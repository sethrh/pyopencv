#ifndef SDOPENCV_EXTRA_H
#define SDOPENCV_EXTRA_H

#include <cstdio>
#include <vector>
#include <typeinfo>

#include "boost/python.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "boost/python/tuple.hpp"
#include "boost/python/to_python_value.hpp"

#include "opencv_headers.hpp"

namespace bp = boost::python;

#define BOOST_PYTHON_MAX_ARITY 30

void CV_CDECL sdTrackbarCallback2(int pos, void* userdata);
void CV_CDECL sdMouseCallback(int event, int x, int y, int flags, void* param);
float CV_CDECL sdDistanceFunction( const float* a, const float*b, void* user_param );

// ================================================================================================

// cvtypeof
template<typename T>
inline int cvtypeof()
{
    char s[300];
    sprintf( s, "Instantiation of function cvtypeof() for class '%s' is not yet implemented.", typeid(T).name() );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}

template<> inline int cvtypeof<char>() { return CV_8S; }
template<> inline int cvtypeof<unsigned char>() { return CV_8U; }
template<> inline int cvtypeof<short>() { return CV_16S; }
template<> inline int cvtypeof<unsigned short>() { return CV_16U; }
template<> inline int cvtypeof<long>() { return CV_32S; }
template<> inline int cvtypeof<int>() { return CV_32S; }
template<> inline int cvtypeof<float>() { return CV_32F; }
template<> inline int cvtypeof<double>() { return CV_64F; }

// ================================================================================================

// convert_Mat
template<typename T>
void convert_Mat( const cv::Mat &in_arr, T &out_arr )
{
    char s[300];
    sprintf( s, "Instantiation of function convert_Mat() for class '%s' is not yet implemented.", typeid(T).name() );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}

template<typename T>
void convert_Mat( const T &in_arr, cv::Mat &out_arr )
{
    char s[300];
    sprintf( s, "Instantiation of function convert_Mat() for class '%s' is not yet implemented.", typeid(T).name() );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}

// convert_Mat, T * case
// Only from Mat to T* is implemented. The converse direction is UNSAFE.
template<typename T>
void convert_Mat( const cv::Mat &in_arr, T *&out_arr )
{
    char s[100];
    if(!in_arr.flags) { out_arr = 0; return; }
    
    if(in_arr.rows != 1)
    {
        sprintf(s, "Mat must be a row vector, rows=%d detected.", in_arr.rows);
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    if(in_arr.channels() != 1)
    {
        sprintf(s, "Mat must be single-channel, nchannels=%d detected.", in_arr.channels());
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    if(in_arr.type() != cvtypeof<T>())
    {
        sprintf(s, "cv::Mat's element type is not the same as that of the output array. cv::Mat's type=%d, vector's type=%d.", in_arr.type(), cvtypeof<T>());
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    
    out_arr = (T *)in_arr.data;
}

extern template void convert_Mat( const cv::Mat &in_arr, char *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned char *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, short *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned short *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, long *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned long *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, int *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned int *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, float *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, double *&out_arr );

// ================================================================================================

// convert_seq_to_vector
template<typename T>
void convert_seq_to_vector( const bp::object &in_arr, std::vector<T> &out_arr )
{
    out_arr.clear();
    if(in_arr.ptr() == Py_None) return;
    int len = bp::len(in_arr);
    if(!len) return;
    out_arr.resize(len);
    for(int i = 0; i < len; ++i) out_arr[i] = bp::extract<T>(in_arr[i]);
}

// convert_vector_to_seq
template<typename T>
bp::tuple convert_vector_to_seq( const std::vector<T> &in_arr )
{
    bp::list out_arr;
    int len = in_arr.size();
    if(!len) return bp::tuple();
    for(int i = 0; i < len; ++i) out_arr.append(bp::object(in_arr[i]));
    return bp::tuple(out_arr);
}

template<class T>
struct vector_to_python {
    static PyObject* convert(std::vector<T> const &x) {
        return bp::incref(convert_vector_to_seq(x).ptr());
    }
};

#define DECLARE_SEQUENCE_FOR_VECTOR(CLASS) \
extern template void convert_seq_to_vector( const bp::object &in_arr, std::vector<CLASS> &out_arr ); \
extern template bp::tuple convert_vector_to_seq( const std::vector<CLASS> &in_arr );

#define DEFINE_SEQUENCE_FOR_VECTOR(CLASS) \
template void convert_seq_to_vector( const bp::object &in_arr, std::vector<CLASS> &out_arr ); \
template bp::tuple convert_vector_to_seq( const std::vector<CLASS> &in_arr );

DECLARE_SEQUENCE_FOR_VECTOR(bool)
DECLARE_SEQUENCE_FOR_VECTOR(char)
DECLARE_SEQUENCE_FOR_VECTOR(uchar)
DECLARE_SEQUENCE_FOR_VECTOR(short)
DECLARE_SEQUENCE_FOR_VECTOR(ushort)
DECLARE_SEQUENCE_FOR_VECTOR(int)
DECLARE_SEQUENCE_FOR_VECTOR(unsigned)
DECLARE_SEQUENCE_FOR_VECTOR(float)
DECLARE_SEQUENCE_FOR_VECTOR(double)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Vec2f)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Vec3f)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Vec4i)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Scalar)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Point2i)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Point2f)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Point3i)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Point3f)
DECLARE_SEQUENCE_FOR_VECTOR(cv::Mat)
DECLARE_SEQUENCE_FOR_VECTOR(cv::MatND)
DECLARE_SEQUENCE_FOR_VECTOR(cv::KeyPoint)
DECLARE_SEQUENCE_FOR_VECTOR(cv::CascadeClassifier::DTreeNode)
DECLARE_SEQUENCE_FOR_VECTOR(cv::CascadeClassifier::DTree)
DECLARE_SEQUENCE_FOR_VECTOR(cv::CascadeClassifier::Stage)



// vector<cv::FernClassifier::Feature, std::allocator<cv::FernClassifier::Feature>
// vector<cv::Octree::Node, std::allocator<cv::Octree::Node> > --- ::std::vector<cv
// vector<CvFuzzyRule*, std::allocator<CvFuzzyRule*> > --- ::std::vector<CvFuzzyRul
// vector<CvFuzzyCurve, std::allocator<CvFuzzyCurve> > --- ::std::vector<CvFuzzyCur
// vector<CvFuzzyPoint, std::allocator<CvFuzzyPoint> > --- ::std::vector<CvFuzzyPoi
// vector<unsigned char*, std::allocator<unsigned char*> > --- ::std::vector<unsign
// vector<cv::KDTree::Node, std::allocator<cv::KDTree::Node> > --- ::std::vector<cv


// ================================================================================================

// convert_seq_to_vector_vector
template<typename T>
void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector < std::vector < T > > &out_arr )
{
    out_arr.clear();
    if(in_arr.ptr() == Py_None) return;
    int len = bp::len(in_arr);
    if(!len) return;
    out_arr.resize(len);
    for(int i = 0; i < len; ++i) convert_seq_to_vector(in_arr[i], out_arr[i]);
}

// convert_vector_vector_to_seq
template<typename T>
bp::tuple convert_vector_vector_to_seq( const std::vector < std::vector < T > > &in_arr )
{
    bp::list out_arr;
    int len = in_arr.size();
    if(!len) return bp::tuple();
    for(int i = 0; i < len; ++i) out_arr.append(convert_vector_to_seq(in_arr[i]));
    return bp::tuple(out_arr);
}

template<class T>
struct vector_vector_to_python {
    static PyObject* convert(std::vector< std::vector<T> > const &x) {
        return bp::incref(convert_vector_vector_to_seq(x).ptr());
    }
};

#define DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(CLASS) \
extern template void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector< std::vector< CLASS > > &out_arr ); \
extern template bp::tuple convert_vector_to_seq( const std::vector< std::vector< CLASS > > &in_arr );

#define DEFINE_SEQUENCE_FOR_VECTOR_VECTOR(CLASS) \
template void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector< std::vector< CLASS > > &out_arr ); \
template bp::tuple convert_vector_to_seq( const std::vector< std::vector< CLASS > > &in_arr );

DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(int)
DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(float)
DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(cv::Point2f)
DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(cv::Point3f)


#endif