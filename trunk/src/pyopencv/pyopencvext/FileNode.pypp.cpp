// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "FileNode.pypp.hpp"

namespace bp = boost::python;

static bp::tuple children(cv::FileNode const &inst)
{
    bp::list l;
    for(cv::FileNodeIterator i = inst.begin(); i != inst.end(); ++i)
        l.append(bp::object(*i));
    return bp::tuple(l);
}

static cv::Mat readRaw(cv::FileNode const &inst, std::string const &fmt, int len)
{
    std::vector<uchar> data;
    data.resize(len);
    inst.readRaw(fmt, &data[0], len);
    return convert_from_vector_of_T_to_Mat<uchar>(data);
}

void register_FileNode_class(){

    { //::cv::FileNode
        typedef bp::class_< cv::FileNode > FileNode_exposer_t;
        FileNode_exposer_t FileNode_exposer = FileNode_exposer_t( "FileNode", bp::init< >("\nThe XML/YAML file node class."
    "\n"
    "\nIn PyOpenCV, FileNode is a Python iterator which iterates over the "
    "\nchild nodes of type FileNode. You can use the read-only attribute "
    "\n'children' to get the list of child nodes, too."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filenode") );
        bp::scope FileNode_scope( FileNode_exposer );
        FileNode_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::FileNode >() );
        bp::scope().attr("NONE") = (int)cv::FileNode::NONE;
        bp::scope().attr("INT") = (int)cv::FileNode::INT;
        bp::scope().attr("REAL") = (int)cv::FileNode::REAL;
        bp::scope().attr("FLOAT") = (int)cv::FileNode::FLOAT;
        bp::scope().attr("STR") = (int)cv::FileNode::STR;
        bp::scope().attr("STRING") = (int)cv::FileNode::STRING;
        bp::scope().attr("REF") = (int)cv::FileNode::REF;
        bp::scope().attr("SEQ") = (int)cv::FileNode::SEQ;
        bp::scope().attr("MAP") = (int)cv::FileNode::MAP;
        bp::scope().attr("TYPE_MASK") = (int)cv::FileNode::TYPE_MASK;
        bp::scope().attr("FLOW") = (int)cv::FileNode::FLOW;
        bp::scope().attr("USER") = (int)cv::FileNode::USER;
        bp::scope().attr("EMPTY") = (int)cv::FileNode::EMPTY;
        bp::scope().attr("NAMED") = (int)cv::FileNode::NAMED;
        FileNode_exposer.def( bp::init< cv::FileNode const & >(( bp::arg("_node") ), "\nThe XML/YAML file node class."
    "\n"
    "\nIn PyOpenCV, FileNode is a Python iterator which iterates over the "
    "\nchild nodes of type FileNode. You can use the read-only attribute "
    "\n'children' to get the list of child nodes, too."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/xml_yaml_persistence.html#filenode") );
        { //::cv::FileNode::empty
        
            typedef bool ( ::cv::FileNode::*empty_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "empty"
                , empty_function_type( &::cv::FileNode::empty ) );
        
        }
        { //::cv::FileNode::isInt
        
            typedef bool ( ::cv::FileNode::*isInt_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "isInt"
                , isInt_function_type( &::cv::FileNode::isInt ) );
        
        }
        { //::cv::FileNode::isMap
        
            typedef bool ( ::cv::FileNode::*isMap_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "isMap"
                , isMap_function_type( &::cv::FileNode::isMap ) );
        
        }
        { //::cv::FileNode::isNamed
        
            typedef bool ( ::cv::FileNode::*isNamed_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "isNamed"
                , isNamed_function_type( &::cv::FileNode::isNamed ) );
        
        }
        { //::cv::FileNode::isNone
        
            typedef bool ( ::cv::FileNode::*isNone_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "isNone"
                , isNone_function_type( &::cv::FileNode::isNone ) );
        
        }
        { //::cv::FileNode::isReal
        
            typedef bool ( ::cv::FileNode::*isReal_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "isReal"
                , isReal_function_type( &::cv::FileNode::isReal ) );
        
        }
        { //::cv::FileNode::isSeq
        
            typedef bool ( ::cv::FileNode::*isSeq_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "isSeq"
                , isSeq_function_type( &::cv::FileNode::isSeq ) );
        
        }
        { //::cv::FileNode::isString
        
            typedef bool ( ::cv::FileNode::*isString_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "isString"
                , isString_function_type( &::cv::FileNode::isString ) );
        
        }
        { //::cv::FileNode::name
        
            typedef ::std::string ( ::cv::FileNode::*name_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "name"
                , name_function_type( &::cv::FileNode::name ) );
        
        }
        FileNode_exposer.def( "as_str", &cv::FileNode::operator ::std::string , "\nWrapped function:"
    "\n    operator ::std::string" );
        FileNode_exposer.def( "as_float64", &cv::FileNode::operator double , "\nWrapped function:"
    "\n    operator double" );
        FileNode_exposer.def( "as_float32", &cv::FileNode::operator float , "\nWrapped function:"
    "\n    operator float" );
        FileNode_exposer.def( "as_int", &cv::FileNode::operator int , "\nWrapped function:"
    "\n    operator int" );
        { //::cv::FileNode::operator[]
        
            typedef ::cv::FileNode ( ::cv::FileNode::*__getitem___function_type )( ::std::string const & ) const;
            
            FileNode_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::FileNode::operator[] )
                , ( bp::arg("nodename") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::FileNode::operator[]
        
            typedef ::cv::FileNode ( ::cv::FileNode::*__getitem___function_type )( int ) const;
            
            FileNode_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::FileNode::operator[] )
                , ( bp::arg("i") )
                , "\nWrapped function:"
    "\n    operator[]" );
        
        }
        { //::cv::FileNode::rawDataSize
        
            typedef int ( ::cv::FileNode::*rawDataSize_function_type )( ::std::string const & ) const;
            
            FileNode_exposer.def( 
                "rawDataSize"
                , rawDataSize_function_type( &::cv::FileNode::rawDataSize )
                , ( bp::arg("fmt") ) );
        
        }
        { //::cv::FileNode::size
        
            typedef ::size_t ( ::cv::FileNode::*size_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "size"
                , size_function_type( &::cv::FileNode::size ) );
        
        }
        { //::cv::FileNode::type
        
            typedef int ( ::cv::FileNode::*type_function_type )(  ) const;
            
            FileNode_exposer.def( 
                "type"
                , type_function_type( &::cv::FileNode::type ) );
        
        }
        FileNode_exposer.add_property("children", &::children);
        FileNode_exposer.def("__iter__", &::children);
        FileNode_exposer.def("readRaw", &::readRaw, ( bp::arg("inst"), bp::arg("fmt"), bp::arg("len") ), "Reads raw data. Argument 'vec' is returned as a Mat.");
    }

}
