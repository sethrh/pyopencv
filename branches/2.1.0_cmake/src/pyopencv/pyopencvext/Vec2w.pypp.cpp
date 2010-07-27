// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Vec2w.pypp.hpp"

namespace bp = boost::python;

void register_Vec2w_class(){

    { //::cv::Vec< unsigned short, 2 >
        typedef bp::class_< cv::Vec< unsigned short, 2 > > Vec2w_exposer_t;
        Vec2w_exposer_t Vec2w_exposer = Vec2w_exposer_t( "Vec2w", bp::init< >() );
        bp::scope Vec2w_scope( Vec2w_exposer );
        Vec2w_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< unsigned short, 2 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<unsigned short, 2>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<unsigned short, 2>::channels;
        bp::scope().attr("type") = (int)cv::Vec<unsigned short, 2>::type;
        Vec2w_exposer.def( bp::init< short unsigned int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< short unsigned int, cv::Vec< unsigned short, 2 > >();
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec2w_exposer.def( bp::init< short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec2w_exposer.def( bp::init< cv::Vec< unsigned short, 2 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< unsigned short, 2 >::all
        
            typedef cv::Vec< unsigned short, 2 > exported_class_t;
            typedef ::cv::Vec< unsigned short, 2 > ( *all_function_type )( short unsigned int );
            
            Vec2w_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< unsigned short, 2 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< unsigned short, 2 >::cross
        
            typedef cv::Vec< unsigned short, 2 > exported_class_t;
            typedef ::cv::Vec< unsigned short, 2 > ( exported_class_t::*cross_function_type )( ::cv::Vec< unsigned short, 2 > const & ) const;
            
            Vec2w_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< unsigned short, 2 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< unsigned short, 2 >::ddot
        
            typedef cv::Vec< unsigned short, 2 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< unsigned short, 2 > const & ) const;
            
            Vec2w_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< unsigned short, 2 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< unsigned short, 2 >::dot
        
            typedef cv::Vec< unsigned short, 2 > exported_class_t;
            typedef short unsigned int ( exported_class_t::*dot_function_type )( ::cv::Vec< unsigned short, 2 > const & ) const;
            
            Vec2w_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< unsigned short, 2 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< unsigned short, 2 >::operator[]
        
            typedef cv::Vec< unsigned short, 2 > exported_class_t;
            typedef short unsigned int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec2w_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< unsigned short, 2 >::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::Vec< unsigned short, 2 >::operator[]
        
            typedef cv::Vec< unsigned short, 2 > exported_class_t;
            typedef short unsigned int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec2w_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< unsigned short, 2 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        Vec2w_exposer.staticmethod( "all" );
        Vec2w_exposer.def("from_ndarray", &sdcpp::from_ndarray< cv::Vec<unsigned short,2> >, (bp::arg("inst_ndarray")) );
        Vec2w_exposer.staticmethod("from_ndarray");
        Vec2w_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec<unsigned short,2> >);
        Vec2w_exposer.def("__iadd__", &__iadd__<cv::Vec2w, cv::Vec2b>, bp::return_self<>() );
        Vec2w_exposer.def("__isub__", &__isub__<cv::Vec2w, cv::Vec2b>, bp::return_self<>() );
        Vec2w_exposer.def("__iadd__", &__iadd__<cv::Vec2w, cv::Vec2s>, bp::return_self<>() );
        Vec2w_exposer.def("__isub__", &__isub__<cv::Vec2w, cv::Vec2s>, bp::return_self<>() );
        Vec2w_exposer.def("__iadd__", &__iadd__<cv::Vec2w, cv::Vec2w>, bp::return_self<>() );
        Vec2w_exposer.def("__isub__", &__isub__<cv::Vec2w, cv::Vec2w>, bp::return_self<>() );
        Vec2w_exposer.def("__iadd__", &__iadd__<cv::Vec2w, cv::Vec2i>, bp::return_self<>() );
        Vec2w_exposer.def("__isub__", &__isub__<cv::Vec2w, cv::Vec2i>, bp::return_self<>() );
        Vec2w_exposer.def("__iadd__", &__iadd__<cv::Vec2w, cv::Vec2f>, bp::return_self<>() );
        Vec2w_exposer.def("__isub__", &__isub__<cv::Vec2w, cv::Vec2f>, bp::return_self<>() );
        Vec2w_exposer.def("__iadd__", &__iadd__<cv::Vec2w, cv::Vec2d>, bp::return_self<>() );
        Vec2w_exposer.def("__isub__", &__isub__<cv::Vec2w, cv::Vec2d>, bp::return_self<>() );
        Vec2w_exposer.def("__add__", &__add__<cv::Vec2w, cv::Vec2w> );
        Vec2w_exposer.def("__sub__", &__sub__<cv::Vec2w, cv::Vec2w> );
        Vec2w_exposer.def("__eq__", &__eq__<cv::Vec2w, cv::Vec2w> );
        Vec2w_exposer.def("__ne__", &__ne__<cv::Vec2w, cv::Vec2w> );
        Vec2w_exposer.def("__imul__", &__imul__<cv::Vec2w, unsigned short>, bp::return_self<>() );
        Vec2w_exposer.def("__mul__", &__mul__<cv::Vec2w, unsigned short> );
        Vec2w_exposer.def("__rmul__", &__rmul__<unsigned short, cv::Vec2w> );
        Vec2w_exposer.def("__neg__", &__neg__<cv::Vec2w> );
    }

}
