// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvERTrees.pypp.hpp"

namespace bp = boost::python;

struct CvERTrees_wrapper : CvERTrees, bp::wrapper< CvERTrees > {

    CvERTrees_wrapper(CvERTrees const & arg )
    : CvERTrees( arg )
      , bp::wrapper< CvERTrees >(){
        // copy constructor
        
    }

    CvERTrees_wrapper( )
    : CvERTrees( )
      , bp::wrapper< CvERTrees >(){
        // null constructor
    
    }

    virtual bool train( ::CvMat const * _train_data, int _tflag, ::CvMat const * _responses, ::CvMat const * _var_idx=0, ::CvMat const * _sample_idx=0, ::CvMat const * _var_type=0, ::CvMat const * _missing_mask=0, ::CvRTParams params=::CvRTParams( ) ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), _train_data, _tflag, _responses, _var_idx, _sample_idx, _var_type, _missing_mask, params );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvERTrees::train( boost::python::ptr(_train_data), _tflag, boost::python::ptr(_responses), boost::python::ptr(_var_idx), boost::python::ptr(_sample_idx), boost::python::ptr(_var_type), boost::python::ptr(_missing_mask), params );
        }
    }
    
    static boost::python::object default_train_9f93dc7be6c6cee516880b16f5290b4d( ::CvERTrees & inst, ::cv::Mat & _train_data, int _tflag, ::cv::Mat & _responses, ::cv::Mat _var_idx=cv::Mat(), ::cv::Mat _sample_idx=cv::Mat(), ::cv::Mat _var_type=cv::Mat(), ::cv::Mat _missing_mask=cv::Mat(), ::CvRTParams params=::CvRTParams( ) ){
        bool result;
        if( dynamic_cast< CvERTrees_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::CvERTrees::train(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), params);
        }
        else{
            result = inst.train(get_CvMat_ptr(_train_data), _tflag, get_CvMat_ptr(_responses), get_CvMat_ptr(_var_idx), get_CvMat_ptr(_sample_idx), get_CvMat_ptr(_var_type), get_CvMat_ptr(_missing_mask), params);
        }
        return bp::object( result );
    }

    virtual bool train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvRTParams params=::CvRTParams( ) ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        else{
            return this->CvERTrees::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvRTParams params=::CvRTParams( ) ) {
        return CvERTrees::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
    }

    virtual bool train( ::CvMLData * data, ::CvRTParams params=::CvRTParams( ) ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::python::ptr(data), params );
        else{
            return this->CvERTrees::train( boost::python::ptr(data), params );
        }
    }
    
    bool default_train( ::CvMLData * data, ::CvRTParams params=::CvRTParams( ) ) {
        return CvERTrees::train( boost::python::ptr(data), params );
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvRTrees::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvRTrees::clear( );
    }

    virtual float get_proximity( ::CvMat const * sample1, ::CvMat const * sample2, ::CvMat const * missing1=0, ::CvMat const * missing2=0 ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_get_proximity = this->get_override( "get_proximity" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_get_proximity.ptr(), sample1, sample2, missing1, missing2 );
            return bpl::extract< float >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvRTrees::get_proximity( boost::python::ptr(sample1), boost::python::ptr(sample2), boost::python::ptr(missing1), boost::python::ptr(missing2) );
        }
    }
    
    static boost::python::object default_get_proximity( ::CvRTrees const & inst, ::cv::Mat & sample1, ::cv::Mat & sample2, ::cv::Mat missing1=cv::Mat(), ::cv::Mat missing2=cv::Mat() ){
        float result;
        if( dynamic_cast< CvERTrees_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::CvRTrees::get_proximity(get_CvMat_ptr(sample1), get_CvMat_ptr(sample2), get_CvMat_ptr(missing1), get_CvMat_ptr(missing2));
        }
        else{
            result = inst.get_proximity(get_CvMat_ptr(sample1), get_CvMat_ptr(sample2), get_CvMat_ptr(missing1), get_CvMat_ptr(missing2));
        }
        return bp::object( result );
    }

    virtual float get_train_error(  ) {
        if( bp::override func_get_train_error = this->get_override( "get_train_error" ) )
            return func_get_train_error(  );
        else{
            return this->CvRTrees::get_train_error(  );
        }
    }
    
    float default_get_train_error(  ) {
        return CvRTrees::get_train_error( );
    }

    virtual ::CvMat const * get_var_importance(  ) {
        if( bp::override func_get_var_importance = this->get_override( "get_var_importance" ) )
            return func_get_var_importance(  );
        else{
            return this->CvRTrees::get_var_importance(  );
        }
    }
    
    ::CvMat const * default_get_var_importance(  ) {
        return CvRTrees::get_var_importance( );
    }

    virtual void load( char const * filename, char const * name=0 ) {
        if( bp::override func_load = this->get_override( "load" ) )
            func_load( filename, name );
        else{
            this->CvStatModel::load( filename, name );
        }
    }
    
    void default_load( char const * filename, char const * name=0 ) {
        CvStatModel::load( filename, name );
    }

    virtual float predict( ::CvMat const * sample, ::CvMat const * missing=0 ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_predict = this->get_override( "predict" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_predict.ptr(), sample, missing );
            return bpl::extract< float >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvRTrees::predict( boost::python::ptr(sample), boost::python::ptr(missing) );
        }
    }
    
    static boost::python::object default_predict_8f760c2403d8e76b3c8cb03f101d0997( ::CvRTrees const & inst, ::cv::Mat & sample, ::cv::Mat missing=cv::Mat() ){
        float result;
        if( dynamic_cast< CvERTrees_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::CvRTrees::predict(get_CvMat_ptr(sample), get_CvMat_ptr(missing));
        }
        else{
            result = inst.predict(get_CvMat_ptr(sample), get_CvMat_ptr(missing));
        }
        return bp::object( result );
    }

    virtual float predict( ::cv::Mat const & sample, ::cv::Mat const & missing=cv::Mat() ) const  {
        if( bp::override func_predict = this->get_override( "predict" ) )
            return func_predict( boost::ref(sample), boost::ref(missing) );
        else{
            return this->CvRTrees::predict( boost::ref(sample), boost::ref(missing) );
        }
    }
    
    float default_predict( ::cv::Mat const & sample, ::cv::Mat const & missing=cv::Mat() ) const  {
        return CvRTrees::predict( boost::ref(sample), boost::ref(missing) );
    }

    virtual float predict_prob( ::CvMat const * sample, ::CvMat const * missing=0 ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_predict_prob = this->get_override( "predict_prob" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_predict_prob.ptr(), sample, missing );
            return bpl::extract< float >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return CvRTrees::predict_prob( boost::python::ptr(sample), boost::python::ptr(missing) );
        }
    }
    
    static boost::python::object default_predict_prob_4a1ffb549242708ef963dcd84a06f27d( ::CvRTrees const & inst, ::cv::Mat & sample, ::cv::Mat missing=cv::Mat() ){
        float result;
        if( dynamic_cast< CvERTrees_wrapper const* >( boost::addressof( inst ) ) ){
            result = inst.::CvRTrees::predict_prob(get_CvMat_ptr(sample), get_CvMat_ptr(missing));
        }
        else{
            result = inst.predict_prob(get_CvMat_ptr(sample), get_CvMat_ptr(missing));
        }
        return bp::object( result );
    }

    virtual float predict_prob( ::cv::Mat const & sample, ::cv::Mat const & missing=cv::Mat() ) const  {
        if( bp::override func_predict_prob = this->get_override( "predict_prob" ) )
            return func_predict_prob( boost::ref(sample), boost::ref(missing) );
        else{
            return this->CvRTrees::predict_prob( boost::ref(sample), boost::ref(missing) );
        }
    }
    
    float default_predict_prob( ::cv::Mat const & sample, ::cv::Mat const & missing=cv::Mat() ) const  {
        return CvRTrees::predict_prob( boost::ref(sample), boost::ref(missing) );
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node );
        }
        else{
            CvRTrees::read( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read( ::CvRTrees & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvERTrees_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvRTrees::read(fs.fs, *(node));
        }
        else{
            inst.read(fs.fs, *(node));
        }
    }

    virtual void save( char const * filename, char const * name=0 ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, name );
        else{
            this->CvStatModel::save( filename, name );
        }
    }
    
    void default_save( char const * filename, char const * name=0 ) const  {
        CvStatModel::save( filename, name );
    }

    virtual void write( ::CvFileStorage * fs, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), fs, name );
        }
        else{
            CvRTrees::write( boost::python::ptr(fs), name );
        }
    }
    
    static void default_write( ::CvRTrees const & inst, ::cv::FileStorage & fs, char const * name ){
        if( dynamic_cast< CvERTrees_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvRTrees::write(fs.fs, name);
        }
        else{
            inst.write(fs.fs, name);
        }
    }

};

void register_CvERTrees_class(){

    bp::class_< CvERTrees_wrapper, bp::bases< CvRTrees > >( "CvERTrees", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvERTrees >() )    
        .def( 
            "train"
            , (boost::python::object (*)( CvERTrees &,::cv::Mat &,int,::cv::Mat &,::cv::Mat,::cv::Mat,::cv::Mat,::cv::Mat,CvRTParams ))( &CvERTrees_wrapper::default_train_9f93dc7be6c6cee516880b16f5290b4d )
            , ( bp::arg("inst"), bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvRTParams( ) )
            , "\nArgument '_train_data':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_responses':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_sample_idx':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_var_type':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument '_missing_mask':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "train"
            , (bool ( CvERTrees::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvRTParams ) )(&::CvERTrees::train)
            , (bool ( CvERTrees_wrapper::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvRTParams ) )(&CvERTrees_wrapper::default_train)
            , ( bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvRTParams( ) ) )    
        .def( 
            "train"
            , (bool ( CvERTrees::* )( ::CvMLData *,::CvRTParams ) )(&::CvERTrees::train)
            , (bool ( CvERTrees_wrapper::* )( ::CvMLData *,::CvRTParams ) )(&CvERTrees_wrapper::default_train)
            , ( bp::arg("data"), bp::arg("params")=::CvRTParams( ) ) )    
        .def( 
            "clear"
            , (void ( CvRTrees::* )(  ) )(&::CvRTrees::clear)
            , (void ( CvERTrees_wrapper::* )(  ) )(&CvERTrees_wrapper::default_clear) )    
        .def( 
            "get_proximity"
            , (boost::python::object (*)( CvRTrees const &,::cv::Mat &,::cv::Mat &,::cv::Mat,::cv::Mat ))( &CvERTrees_wrapper::default_get_proximity )
            , ( bp::arg("inst"), bp::arg("sample1"), bp::arg("sample2"), bp::arg("missing1")=cv::Mat(), bp::arg("missing2")=cv::Mat() )
            , "\nArgument 'sample1':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument 'sample2':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument 'missing1':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument 'missing2':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "get_train_error"
            , (float ( CvRTrees::* )(  ) )(&::CvRTrees::get_train_error)
            , (float ( CvERTrees_wrapper::* )(  ) )(&CvERTrees_wrapper::default_get_train_error) )    
        .def( 
            "get_var_importance"
            , (::CvMat const * ( CvRTrees::* )(  ) )(&::CvRTrees::get_var_importance)
            , (::CvMat const * ( CvERTrees_wrapper::* )(  ) )(&CvERTrees_wrapper::default_get_var_importance)
            , bp::return_internal_reference< >() )    
        .def( 
            "load"
            , (void ( CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvERTrees_wrapper::* )( char const *,char const * ) )(&CvERTrees_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "predict"
            , (boost::python::object (*)( CvRTrees const &,::cv::Mat &,::cv::Mat ))( &CvERTrees_wrapper::default_predict_8f760c2403d8e76b3c8cb03f101d0997 )
            , ( bp::arg("inst"), bp::arg("sample"), bp::arg("missing")=cv::Mat() )
            , "\nArgument 'sample':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument 'missing':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "predict"
            , (float ( CvRTrees::* )( ::cv::Mat const &,::cv::Mat const & ) const)(&::CvRTrees::predict)
            , (float ( CvERTrees_wrapper::* )( ::cv::Mat const &,::cv::Mat const & ) const)(&CvERTrees_wrapper::default_predict)
            , ( bp::arg("sample"), bp::arg("missing")=cv::Mat() ) )    
        .def( 
            "predict_prob"
            , (boost::python::object (*)( CvRTrees const &,::cv::Mat &,::cv::Mat ))( &CvERTrees_wrapper::default_predict_prob_4a1ffb549242708ef963dcd84a06f27d )
            , ( bp::arg("inst"), bp::arg("sample"), bp::arg("missing")=cv::Mat() )
            , "\nArgument 'sample':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat."\
    "\nArgument 'missing':"\
    "\n    C/C++ type: ::CvMat const *."\
    "\n    Python type: Mat." )    
        .def( 
            "predict_prob"
            , (float ( CvRTrees::* )( ::cv::Mat const &,::cv::Mat const & ) const)(&::CvRTrees::predict_prob)
            , (float ( CvERTrees_wrapper::* )( ::cv::Mat const &,::cv::Mat const & ) const)(&CvERTrees_wrapper::default_predict_prob)
            , ( bp::arg("sample"), bp::arg("missing")=cv::Mat() ) )    
        .def( 
            "read"
            , (void (*)( CvRTrees &,::cv::FileStorage &,::cv::FileNode & ))( &CvERTrees_wrapper::default_read )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
            , "\nArgument 'fs':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage."\
    "\nArgument 'node':"\
    "\n    C/C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode." )    
        .def( 
            "save"
            , (void ( CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvERTrees_wrapper::* )( char const *,char const * ) const)(&CvERTrees_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "write"
            , (void (*)( CvRTrees const &,::cv::FileStorage &,char const * ))( &CvERTrees_wrapper::default_write )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("name") )
            , "\nArgument 'fs':"\
    "\n    C/C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." );

}
