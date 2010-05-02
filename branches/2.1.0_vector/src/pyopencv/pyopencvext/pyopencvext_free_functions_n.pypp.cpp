// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_n.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_n(){

    { //::cvNextNArraySlice
    
        typedef int ( *nextNArraySlice_function_type )( ::CvNArrayIterator * );
        
        bp::def( 
            "nextNArraySlice"
            , nextNArraySlice_function_type( &::cvNextNArraySlice )
            , ( bp::arg("array_iterator") )
            , "\nWrapped function:"
    "\n    cvNextNArraySlice" );
    
    }

    { //::cv::namedWindow
    
        typedef void ( *namedWindow_function_type )( ::std::string const &,int );
        
        bp::def( 
            "namedWindow"
            , namedWindow_function_type( &::cv::namedWindow )
            , ( bp::arg("winname"), bp::arg("flags")=(int)(1) )
            , "\nCreates a window."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/user_interface.html#cv-namedwindow" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::SparseMat const &,int );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("src"), bp::arg("normType") )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::MatND const &,::cv::MatND const &,int,::cv::MatND const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("normType")=int(::cv::NORM_L2), bp::arg("mask")=cv::MatND() )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::MatND const &,int,::cv::MatND const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("normType")=int(::cv::NORM_L2), bp::arg("mask")=cv::MatND() )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,::cv::Mat const &,int,::cv::Mat const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("normType"), bp::arg("mask") )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,int,::cv::Mat const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("normType"), bp::arg("mask") )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,::cv::Mat const &,int );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("normType")=int(::cv::NORM_L2) )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,int );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("normType")=int(::cv::NORM_L2) )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::normalize
    
        typedef void ( *normalize_function_type )( ::cv::SparseMat const &,::cv::SparseMat &,double,int );
        
        bp::def( 
            "normalize"
            , normalize_function_type( &::cv::normalize )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("alpha"), bp::arg("normType") )
            , "\nNormalizes array's norm or the range."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-normalize" );
    
    }

    { //::cv::normalize
    
        typedef void ( *normalize_function_type )( ::cv::MatND const &,::cv::MatND &,double,double,int,int,::cv::MatND const & );
        
        bp::def( 
            "normalize"
            , normalize_function_type( &::cv::normalize )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("alpha")=1, bp::arg("beta")=0, bp::arg("norm_type")=int(::cv::NORM_L2), bp::arg("rtype")=(int)(-0x000000001), bp::arg("mask")=cv::MatND() )
            , "\nNormalizes array's norm or the range."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-normalize" );
    
    }

    { //::cv::normalize
    
        typedef void ( *normalize_function_type )( ::cv::Mat const &,::cv::Mat &,double,double,int,int,::cv::Mat const & );
        
        bp::def( 
            "normalize"
            , normalize_function_type( &::cv::normalize )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("alpha")=1, bp::arg("beta")=0, bp::arg("norm_type")=int(::cv::NORM_L2), bp::arg("rtype")=(int)(-0x000000001), bp::arg("mask")=cv::Mat() )
            , "\nNormalizes array's norm or the range."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-normalize" );
    
    }

}
