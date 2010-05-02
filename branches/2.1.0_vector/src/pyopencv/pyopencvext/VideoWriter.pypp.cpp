// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "VideoWriter.pypp.hpp"

namespace bp = boost::python;

struct VideoWriter_wrapper : cv::VideoWriter, bp::wrapper< cv::VideoWriter > {

    VideoWriter_wrapper(cv::VideoWriter const & arg )
    : cv::VideoWriter( arg )
      , bp::wrapper< cv::VideoWriter >(){
        // copy constructor
        
    }

    VideoWriter_wrapper( )
    : cv::VideoWriter( )
      , bp::wrapper< cv::VideoWriter >(){
        // null constructor
    
    }

    VideoWriter_wrapper(::std::string const & filename, int fourcc, double fps, ::cv::Size frameSize, bool isColor=true )
    : cv::VideoWriter( filename, fourcc, fps, frameSize, isColor )
      , bp::wrapper< cv::VideoWriter >(){
        // constructor
    
    }

    virtual bool isOpened(  ) const  {
        if( bp::override func_isOpened = this->get_override( "isOpened" ) )
            return func_isOpened(  );
        else{
            return this->cv::VideoWriter::isOpened(  );
        }
    }
    
    bool default_isOpened(  ) const  {
        return cv::VideoWriter::isOpened( );
    }

    virtual bool open( ::std::string const & filename, int fourcc, double fps, ::cv::Size frameSize, bool isColor=true ) {
        if( bp::override func_open = this->get_override( "open" ) )
            return func_open( filename, fourcc, fps, frameSize, isColor );
        else{
            return this->cv::VideoWriter::open( filename, fourcc, fps, frameSize, isColor );
        }
    }
    
    bool default_open( ::std::string const & filename, int fourcc, double fps, ::cv::Size frameSize, bool isColor=true ) {
        return cv::VideoWriter::open( filename, fourcc, fps, frameSize, isColor );
    }

};

static cv::VideoWriter &lshift( cv::VideoWriter &inst, cv::Mat const &x ){ return inst << x; }

void register_VideoWriter_class(){

    bp::class_< VideoWriter_wrapper >( "VideoWriter", "\nVideo writer class."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/reading_and_writing_images_and_video.html#videowriter", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::VideoWriter >(), "\nVideo writer class."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/reading_and_writing_images_and_video.html#videowriter" )    
        .def( bp::init< std::string const &, int, double, cv::Size, bp::optional< bool > >(( bp::arg("filename"), bp::arg("fourcc"), bp::arg("fps"), bp::arg("frameSize"), bp::arg("isColor")=(bool)(true) )) )    
        .def( 
            "isOpened"
            , (bool ( ::cv::VideoWriter::* )(  ) const)(&::cv::VideoWriter::isOpened)
            , (bool ( VideoWriter_wrapper::* )(  ) const)(&VideoWriter_wrapper::default_isOpened) )    
        .def( 
            "open"
            , (bool ( ::cv::VideoWriter::* )( ::std::string const &,int,double,::cv::Size,bool ) )(&::cv::VideoWriter::open)
            , (bool ( VideoWriter_wrapper::* )( ::std::string const &,int,double,::cv::Size,bool ) )(&VideoWriter_wrapper::default_open)
            , ( bp::arg("filename"), bp::arg("fourcc"), bp::arg("fps"), bp::arg("frameSize"), bp::arg("isColor")=(bool)(true) ) )    
        .def( "__lshift__", &::lshift, bp::return_self<>() );

}
