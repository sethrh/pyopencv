// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvERTreeTrainData.pypp.hpp"

namespace bp = boost::python;

struct CvERTreeTrainData_wrapper : CvERTreeTrainData, bp::wrapper< CvERTreeTrainData > {

    CvERTreeTrainData_wrapper(CvERTreeTrainData const & arg )
    : CvERTreeTrainData( arg )
      , bp::wrapper< CvERTreeTrainData >(){
        // copy constructor
        
    }

    CvERTreeTrainData_wrapper()
    : CvERTreeTrainData()
      , bp::wrapper< CvERTreeTrainData >(){
        // null constructor
        
    }

    virtual void set_data( ::CvMat const * _train_data, int _tflag, ::CvMat const * _responses, ::CvMat const * _var_idx=0, ::CvMat const * _sample_idx=0, ::CvMat const * _var_type=0, ::CvMat const * _missing_mask=0, ::CvDTreeParams const & _params=::CvDTreeParams( ), bool _shared=false, bool _add_labels=false, bool _update_data=false ) {
        namespace bpl = boost::python;
        if( bpl::override func_set_data = this->get_override( "set_data" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_set_data.ptr(), _train_data, _tflag, _responses, _var_idx, _sample_idx, _var_type, _missing_mask, _params, _shared, _add_labels, _update_data );
        }
        else{
            CvERTreeTrainData::set_data( boost::python::ptr(_train_data), _tflag, boost::python::ptr(_responses), boost::python::ptr(_var_idx), boost::python::ptr(_sample_idx), boost::python::ptr(_var_type), boost::python::ptr(_missing_mask), boost::ref(_params), _shared, _add_labels, _update_data );
        }
    }
    
    static void default_set_data( ::CvERTreeTrainData & inst, ::cv::Mat & _train_data, int _tflag, ::cv::Mat & _responses, ::cv::Mat _var_idx=cv::Mat(), ::cv::Mat _sample_idx=cv::Mat(), ::cv::Mat _var_type=cv::Mat(), ::cv::Mat _missing_mask=cv::Mat(), ::CvDTreeParams const & _params=::CvDTreeParams( ), bool _shared=false, bool _add_labels=false, bool _update_data=false ){
        if( dynamic_cast< CvERTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvERTreeTrainData::set_data(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), _params, _shared, _add_labels, _update_data);
        }
        else{
            inst.set_data(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), _params, _shared, _add_labels, _update_data);
        }
    }

    virtual CvDTreeNode * subsample_data( ::CvMat const * _subsample_idx ) {
        namespace bpl = boost::python;
        if( bpl::override func_subsample_data = this->get_override( "subsample_data" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_subsample_data.ptr(), _subsample_idx );
            return bpl::extract< CvDTreeNode * >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvERTreeTrainData::subsample_data( boost::python::ptr(_subsample_idx) );
        }
    }
    
    static boost::python::object default_subsample_data( ::CvERTreeTrainData & inst, ::cv::Mat & _subsample_idx ){
        CvDTreeNode * result;
        if( dynamic_cast< CvERTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvERTreeTrainData::subsample_data(get_CvMat_ptr(_subsample_idx));
        }
        else{
            result = inst.subsample_data(get_CvMat_ptr(_subsample_idx));
        }
        typedef bp::return_internal_reference< > call_policies_t;
        return bp::object( pyplusplus::call_policies::make_object< call_policies_t, CvDTreeNode * >( result ) );
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvDTreeTrainData::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvDTreeTrainData::clear( );
    }

    virtual void do_responses_copy(  ) {
        if( bp::override func_do_responses_copy = this->get_override( "do_responses_copy" ) )
            func_do_responses_copy(  );
        else{
            this->CvDTreeTrainData::do_responses_copy(  );
        }
    }
    
    void default_do_responses_copy(  ) {
        CvDTreeTrainData::do_responses_copy( );
    }

    virtual void free_node( ::CvDTreeNode * node ) {
        if( bp::override func_free_node = this->get_override( "free_node" ) )
            func_free_node( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node( boost::python::ptr(node) );
        }
    }
    
    void default_free_node( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node( boost::python::ptr(node) );
    }

    virtual void free_node_data( ::CvDTreeNode * node ) {
        if( bp::override func_free_node_data = this->get_override( "free_node_data" ) )
            func_free_node_data( boost::python::ptr(node) );
        else{
            this->CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
        }
    }
    
    void default_free_node_data( ::CvDTreeNode * node ) {
        CvDTreeTrainData::free_node_data( boost::python::ptr(node) );
    }

    virtual void free_train_data(  ) {
        if( bp::override func_free_train_data = this->get_override( "free_train_data" ) )
            func_free_train_data(  );
        else{
            this->CvDTreeTrainData::free_train_data(  );
        }
    }
    
    void default_free_train_data(  ) {
        CvDTreeTrainData::free_train_data( );
    }

    virtual int get_child_buf_idx( ::CvDTreeNode * n ) {
        if( bp::override func_get_child_buf_idx = this->get_override( "get_child_buf_idx" ) )
            return func_get_child_buf_idx( boost::python::ptr(n) );
        else{
            return this->CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
        }
    }
    
    int default_get_child_buf_idx( ::CvDTreeNode * n ) {
        return CvDTreeTrainData::get_child_buf_idx( boost::python::ptr(n) );
    }

    virtual ::CvDTreeNode * new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        if( bp::override func_new_node = this->get_override( "new_node" ) )
            return func_new_node( boost::python::ptr(parent), count, storage_idx, offset );
        else{
            return this->CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
        }
    }
    
    ::CvDTreeNode * default_new_node( ::CvDTreeNode * parent, int count, int storage_idx, int offset ) {
        return CvDTreeTrainData::new_node( boost::python::ptr(parent), count, storage_idx, offset );
    }

    virtual ::CvDTreeSplit * new_split_cat( int vi, float quality ) {
        if( bp::override func_new_split_cat = this->get_override( "new_split_cat" ) )
            return func_new_split_cat( vi, quality );
        else{
            return this->CvDTreeTrainData::new_split_cat( vi, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_cat( int vi, float quality ) {
        return CvDTreeTrainData::new_split_cat( vi, quality );
    }

    virtual ::CvDTreeSplit * new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        if( bp::override func_new_split_ord = this->get_override( "new_split_ord" ) )
            return func_new_split_ord( vi, cmp_val, split_point, inversed, quality );
        else{
            return this->CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
        }
    }
    
    ::CvDTreeSplit * default_new_split_ord( int vi, float cmp_val, int split_point, int inversed, float quality ) {
        return CvDTreeTrainData::new_split_ord( vi, cmp_val, split_point, inversed, quality );
    }

    virtual void read_params( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read_params = this->get_override( "read_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read_params.ptr(), fs, node );
        }
        else{
            CvDTreeTrainData::read_params( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read_params( ::CvDTreeTrainData & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvERTreeTrainData_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::read_params(fs.fs, *(node));
        }
        else{
            inst.read_params(fs.fs, *(node));
        }
    }

    virtual bool set_params( ::CvDTreeParams const & params ) {
        if( bp::override func_set_params = this->get_override( "set_params" ) )
            return func_set_params( boost::ref(params) );
        else{
            return this->CvDTreeTrainData::set_params( boost::ref(params) );
        }
    }
    
    bool default_set_params( ::CvDTreeParams const & params ) {
        return CvDTreeTrainData::set_params( boost::ref(params) );
    }

    virtual void write_params( ::CvFileStorage * fs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write_params = this->get_override( "write_params" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write_params.ptr(), fs );
        }
        else{
            CvDTreeTrainData::write_params( boost::python::ptr(fs) );
        }
    }
    
    static void default_write_params( ::CvDTreeTrainData const & inst, ::cv::FileStorage & fs ){
        if( dynamic_cast< CvERTreeTrainData_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTreeTrainData::write_params(fs.fs);
        }
        else{
            inst.write_params(fs.fs);
        }
    }

};

static cv::Mat get_missing_mask(::CvERTreeTrainData const &inst) { return inst.missing_mask? cv::Mat(inst.missing_mask): cv::Mat(); }

void register_CvERTreeTrainData_class(){

    bp::class_< CvERTreeTrainData_wrapper, bp::bases< CvDTreeTrainData > >( "CvERTreeTrainData" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvERTreeTrainData >() )    
        .def( 
            "set_data"
            , (void (*)( CvERTreeTrainData &,::cv::Mat &,int,::cv::Mat &,::cv::Mat,::cv::Mat,::cv::Mat,::cv::Mat,CvDTreeParams const &,bool,bool,bool ))( &CvERTreeTrainData_wrapper::default_set_data )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("_params")=::CvDTreeParams( ), bp::arg("_shared")=(bool)(false), bp::arg("_add_labels")=(bool)(false), bp::arg("_update_data")=(bool)(false) )
            , "\nArgument '_train_data':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_idx':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_sample_idx':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_type':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_missing_mask':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "subsample_data"
            , (boost::python::object (*)( CvERTreeTrainData &,::cv::Mat & ))( &CvERTreeTrainData_wrapper::default_subsample_data )
            , ( bp::arg("inst"), bp::arg("_subsample_idx") )
            , "\nArgument '_subsample_idx':"\
    "\n    C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "clear"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::clear)
            , (void ( CvERTreeTrainData_wrapper::* )(  ) )(&CvERTreeTrainData_wrapper::default_clear) )    
        .def( 
            "do_responses_copy"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::do_responses_copy)
            , (void ( CvERTreeTrainData_wrapper::* )(  ) )(&CvERTreeTrainData_wrapper::default_do_responses_copy) )    
        .def( 
            "free_node"
            , (void ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node)
            , (void ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvERTreeTrainData_wrapper::default_free_node)
            , ( bp::arg("node") ) )    
        .def( 
            "free_node_data"
            , (void ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::free_node_data)
            , (void ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvERTreeTrainData_wrapper::default_free_node_data)
            , ( bp::arg("node") ) )    
        .def( 
            "free_train_data"
            , (void ( CvDTreeTrainData::* )(  ) )(&::CvDTreeTrainData::free_train_data)
            , (void ( CvERTreeTrainData_wrapper::* )(  ) )(&CvERTreeTrainData_wrapper::default_free_train_data) )    
        .def( 
            "get_child_buf_idx"
            , (int ( CvDTreeTrainData::* )( ::CvDTreeNode * ) )(&::CvDTreeTrainData::get_child_buf_idx)
            , (int ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode * ) )(&CvERTreeTrainData_wrapper::default_get_child_buf_idx)
            , ( bp::arg("n") ) )    
        .def( 
            "new_node"
            , (::CvDTreeNode * ( CvDTreeTrainData::* )( ::CvDTreeNode *,int,int,int ) )(&::CvDTreeTrainData::new_node)
            , (::CvDTreeNode * ( CvERTreeTrainData_wrapper::* )( ::CvDTreeNode *,int,int,int ) )(&CvERTreeTrainData_wrapper::default_new_node)
            , ( bp::arg("parent"), bp::arg("count"), bp::arg("storage_idx"), bp::arg("offset") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_cat"
            , (::CvDTreeSplit * ( CvDTreeTrainData::* )( int,float ) )(&::CvDTreeTrainData::new_split_cat)
            , (::CvDTreeSplit * ( CvERTreeTrainData_wrapper::* )( int,float ) )(&CvERTreeTrainData_wrapper::default_new_split_cat)
            , ( bp::arg("vi"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "new_split_ord"
            , (::CvDTreeSplit * ( CvDTreeTrainData::* )( int,float,int,int,float ) )(&::CvDTreeTrainData::new_split_ord)
            , (::CvDTreeSplit * ( CvERTreeTrainData_wrapper::* )( int,float,int,int,float ) )(&CvERTreeTrainData_wrapper::default_new_split_ord)
            , ( bp::arg("vi"), bp::arg("cmp_val"), bp::arg("split_point"), bp::arg("inversed"), bp::arg("quality") )
            , bp::return_internal_reference< >() )    
        .def( 
            "read_params"
            , (void (*)( CvDTreeTrainData &,::cv::FileStorage &,::cv::FileNode & ))( &CvERTreeTrainData_wrapper::default_read_params )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
            , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage."\
    "\nArgument 'node':"\
    "\n    C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode." )    
        .def( 
            "set_params"
            , (bool ( CvDTreeTrainData::* )( ::CvDTreeParams const & ) )(&::CvDTreeTrainData::set_params)
            , (bool ( CvERTreeTrainData_wrapper::* )( ::CvDTreeParams const & ) )(&CvERTreeTrainData_wrapper::default_set_params)
            , ( bp::arg("params") ) )    
        .def( 
            "write_params"
            , (void (*)( CvDTreeTrainData const &,::cv::FileStorage & ))( &CvERTreeTrainData_wrapper::default_write_params )
            , ( bp::arg("inst"), bp::arg("fs") )
            , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .add_property( "missing_mask", &::get_missing_mask );

}
