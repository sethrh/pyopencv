// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvBlobSeq.pypp.hpp"

namespace bp = boost::python;

struct CvBlobSeq_wrapper : CvBlobSeq, bp::wrapper< CvBlobSeq > {

    CvBlobSeq_wrapper(CvBlobSeq const & arg )
    : CvBlobSeq( arg )
      , bp::wrapper< CvBlobSeq >(){
        // copy constructor
        
    }

    CvBlobSeq_wrapper(int BlobSize=20u )
    : CvBlobSeq( BlobSize )
      , bp::wrapper< CvBlobSeq >(){
        // constructor
    
    }

    virtual void AddBlob( ::CvBlob * pB ) {
        if( bp::override func_AddBlob = this->get_override( "AddBlob" ) )
            func_AddBlob( boost::python::ptr(pB) );
        else{
            this->CvBlobSeq::AddBlob( boost::python::ptr(pB) );
        }
    }
    
    void default_AddBlob( ::CvBlob * pB ) {
        CvBlobSeq::AddBlob( boost::python::ptr(pB) );
    }

    virtual void Clear(  ) {
        if( bp::override func_Clear = this->get_override( "Clear" ) )
            func_Clear(  );
        else{
            this->CvBlobSeq::Clear(  );
        }
    }
    
    void default_Clear(  ) {
        CvBlobSeq::Clear( );
    }

    virtual void DelBlob( int BlobIndex ) {
        if( bp::override func_DelBlob = this->get_override( "DelBlob" ) )
            func_DelBlob( BlobIndex );
        else{
            this->CvBlobSeq::DelBlob( BlobIndex );
        }
    }
    
    void default_DelBlob( int BlobIndex ) {
        CvBlobSeq::DelBlob( BlobIndex );
    }

    virtual void DelBlobByID( int BlobID ) {
        if( bp::override func_DelBlobByID = this->get_override( "DelBlobByID" ) )
            func_DelBlobByID( BlobID );
        else{
            this->CvBlobSeq::DelBlobByID( BlobID );
        }
    }
    
    void default_DelBlobByID( int BlobID ) {
        CvBlobSeq::DelBlobByID( BlobID );
    }

    virtual ::CvBlob * GetBlob( int BlobIndex ) {
        if( bp::override func_GetBlob = this->get_override( "GetBlob" ) )
            return func_GetBlob( BlobIndex );
        else{
            return this->CvBlobSeq::GetBlob( BlobIndex );
        }
    }
    
    ::CvBlob * default_GetBlob( int BlobIndex ) {
        return CvBlobSeq::GetBlob( BlobIndex );
    }

    virtual ::CvBlob * GetBlobByID( int BlobID ) {
        if( bp::override func_GetBlobByID = this->get_override( "GetBlobByID" ) )
            return func_GetBlobByID( BlobID );
        else{
            return this->CvBlobSeq::GetBlobByID( BlobID );
        }
    }
    
    ::CvBlob * default_GetBlobByID( int BlobID ) {
        return CvBlobSeq::GetBlobByID( BlobID );
    }

    virtual int GetBlobNum(  ) {
        if( bp::override func_GetBlobNum = this->get_override( "GetBlobNum" ) )
            return func_GetBlobNum(  );
        else{
            return this->CvBlobSeq::GetBlobNum(  );
        }
    }
    
    int default_GetBlobNum(  ) {
        return CvBlobSeq::GetBlobNum( );
    }

    virtual void Load( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_Load = this->get_override( "Load" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_Load.ptr(), fs, node );
        }
        else{
            CvBlobSeq::Load( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_Load( ::CvBlobSeq & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvBlobSeq_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvBlobSeq::Load(fs.fs, *(node));
        }
        else{
            inst.Load(fs.fs, *(node));
        }
    }

    virtual void Write( ::CvFileStorage * fs, char const * name ) {
        namespace bpl = boost::python;
        if( bpl::override func_Write = this->get_override( "Write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_Write.ptr(), fs, name );
        }
        else{
            CvBlobSeq::Write( boost::python::ptr(fs), name );
        }
    }
    
    static void default_Write( ::CvBlobSeq & inst, ::cv::FileStorage & fs, char const * name ){
        if( dynamic_cast< CvBlobSeq_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvBlobSeq::Write(fs.fs, name);
        }
        else{
            inst.Write(fs.fs, name);
        }
    }

};

void register_CvBlobSeq_class(){

    { //::CvBlobSeq
        typedef bp::class_< CvBlobSeq_wrapper > CvBlobSeq_exposer_t;
        CvBlobSeq_exposer_t CvBlobSeq_exposer = CvBlobSeq_exposer_t( "CvBlobSeq", bp::init< bp::optional< int > >(( bp::arg("BlobSize")=(int)(20u) )) );
        bp::scope CvBlobSeq_scope( CvBlobSeq_exposer );
        CvBlobSeq_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlobSeq >() );
        bp::implicitly_convertible< int, CvBlobSeq >();
        { //::CvBlobSeq::AddBlob
        
            typedef void ( ::CvBlobSeq::*AddBlob_function_type )( ::CvBlob * ) ;
            typedef void ( CvBlobSeq_wrapper::*default_AddBlob_function_type )( ::CvBlob * ) ;
            
            CvBlobSeq_exposer.def( 
                "AddBlob"
                , AddBlob_function_type(&::CvBlobSeq::AddBlob)
                , default_AddBlob_function_type(&CvBlobSeq_wrapper::default_AddBlob)
                , ( bp::arg("pB") ) );
        
        }
        { //::CvBlobSeq::AddFormat
        
            typedef void ( ::CvBlobSeq::*AddFormat_function_type )( char const * ) ;
            
            CvBlobSeq_exposer.def( 
                "AddFormat"
                , AddFormat_function_type( &::CvBlobSeq::AddFormat )
                , ( bp::arg("str") ) );
        
        }
        { //::CvBlobSeq::Clear
        
            typedef void ( ::CvBlobSeq::*Clear_function_type )(  ) ;
            typedef void ( CvBlobSeq_wrapper::*default_Clear_function_type )(  ) ;
            
            CvBlobSeq_exposer.def( 
                "Clear"
                , Clear_function_type(&::CvBlobSeq::Clear)
                , default_Clear_function_type(&CvBlobSeq_wrapper::default_Clear) );
        
        }
        { //::CvBlobSeq::DelBlob
        
            typedef void ( ::CvBlobSeq::*DelBlob_function_type )( int ) ;
            typedef void ( CvBlobSeq_wrapper::*default_DelBlob_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "DelBlob"
                , DelBlob_function_type(&::CvBlobSeq::DelBlob)
                , default_DelBlob_function_type(&CvBlobSeq_wrapper::default_DelBlob)
                , ( bp::arg("BlobIndex") ) );
        
        }
        { //::CvBlobSeq::DelBlobByID
        
            typedef void ( ::CvBlobSeq::*DelBlobByID_function_type )( int ) ;
            typedef void ( CvBlobSeq_wrapper::*default_DelBlobByID_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "DelBlobByID"
                , DelBlobByID_function_type(&::CvBlobSeq::DelBlobByID)
                , default_DelBlobByID_function_type(&CvBlobSeq_wrapper::default_DelBlobByID)
                , ( bp::arg("BlobID") ) );
        
        }
        { //::CvBlobSeq::GetBlob
        
            typedef ::CvBlob * ( ::CvBlobSeq::*GetBlob_function_type )( int ) ;
            typedef ::CvBlob * ( CvBlobSeq_wrapper::*default_GetBlob_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlob"
                , GetBlob_function_type(&::CvBlobSeq::GetBlob)
                , default_GetBlob_function_type(&CvBlobSeq_wrapper::default_GetBlob)
                , ( bp::arg("BlobIndex") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobSeq::GetBlobByID
        
            typedef ::CvBlob * ( ::CvBlobSeq::*GetBlobByID_function_type )( int ) ;
            typedef ::CvBlob * ( CvBlobSeq_wrapper::*default_GetBlobByID_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlobByID"
                , GetBlobByID_function_type(&::CvBlobSeq::GetBlobByID)
                , default_GetBlobByID_function_type(&CvBlobSeq_wrapper::default_GetBlobByID)
                , ( bp::arg("BlobID") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobSeq::GetBlobNum
        
            typedef int ( ::CvBlobSeq::*GetBlobNum_function_type )(  ) ;
            typedef int ( CvBlobSeq_wrapper::*default_GetBlobNum_function_type )(  ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlobNum"
                , GetBlobNum_function_type(&::CvBlobSeq::GetBlobNum)
                , default_GetBlobNum_function_type(&CvBlobSeq_wrapper::default_GetBlobNum) );
        
        }
        { //::CvBlobSeq::Load
        
            typedef void ( *default_Load_function_type )( CvBlobSeq &,::cv::FileStorage &,::cv::FileNode & );
            
            CvBlobSeq_exposer.def( 
                "Load"
                , default_Load_function_type( &CvBlobSeq_wrapper::default_Load )
                , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
                , "\nArgument 'fs':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage."\
    "\nArgument 'node':"\
    "\n    C/C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode." );
        
        }
        { //::CvBlobSeq::Write
        
            typedef void ( *default_Write_function_type )( CvBlobSeq &,::cv::FileStorage &,char const * );
            
            CvBlobSeq_exposer.def( 
                "Write"
                , default_Write_function_type( &CvBlobSeq_wrapper::default_Write )
                , ( bp::arg("inst"), bp::arg("fs"), bp::arg("name") )
                , "\nArgument 'fs':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." );
        
        }
    }

}
