// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "CvModuleInfo.pypp.hpp"

namespace bp = boost::python;

struct CvModuleInfo_wrapper : CvModuleInfo, bp::wrapper< CvModuleInfo > {

    CvModuleInfo_wrapper(CvModuleInfo const & arg )
    : CvModuleInfo( arg )
      , bp::wrapper< CvModuleInfo >(){
        // copy constructor
        
    }

    CvModuleInfo_wrapper()
    : CvModuleInfo()
      , bp::wrapper< CvModuleInfo >(){
        // null constructor
        
    }

    static bp::object get_name( ::CvModuleInfo const & inst ){        
        return inst.name? bp::str(inst.name): bp::object();
    }

    static bp::object get_version( ::CvModuleInfo const & inst ){        
        return inst.version? bp::str(inst.version): bp::object();
    }

};

static ::CvModuleInfo * get_next( ::CvModuleInfo const & inst ) { return inst.next; }

static ::CvPluginFuncInfo * get_func_tab( ::CvModuleInfo const & inst ) { return inst.func_tab; }

void register_CvModuleInfo_class(){

    bp::class_< CvModuleInfo_wrapper >( "CvModuleInfo" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvModuleInfo >() )    
        .add_property( "next", bp::make_function(&::get_next, bp::return_internal_reference<>()) )    
        .add_property( "func_tab", bp::make_function(&::get_func_tab, bp::return_internal_reference<>()) )    
        .add_property( "name", bp::make_function(&::CvModuleInfo_wrapper::get_name) )    
        .add_property( "version", bp::make_function(&::CvModuleInfo_wrapper::get_version) );

}
