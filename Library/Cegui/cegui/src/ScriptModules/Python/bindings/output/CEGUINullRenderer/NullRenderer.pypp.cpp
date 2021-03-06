// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUINullRenderer.h"
#include "NullRenderer.pypp.hpp"

namespace bp = boost::python;

struct NullRenderer_wrapper : CEGUI::NullRenderer, bp::wrapper< CEGUI::NullRenderer > {

    NullRenderer_wrapper( )
    : CEGUI::NullRenderer( )
      , bp::wrapper< CEGUI::NullRenderer >(){
        // null constructor
    
    }

    virtual void beginRendering(  ) {
        if( bp::override func_beginRendering = this->get_override( "beginRendering" ) )
            func_beginRendering(  );
        else{
            this->CEGUI::NullRenderer::beginRendering(  );
        }
    }
    
    void default_beginRendering(  ) {
        CEGUI::NullRenderer::beginRendering( );
    }

    void constructor_impl(  ){
        CEGUI::NullRenderer::constructor_impl(  );
    }

    virtual ::CEGUI::TextureTarget * createTextureTarget(  ) {
        if( bp::override func_createTextureTarget = this->get_override( "createTextureTarget" ) )
            return func_createTextureTarget(  );
        else{
            return this->CEGUI::NullRenderer::createTextureTarget(  );
        }
    }
    
    ::CEGUI::TextureTarget * default_createTextureTarget(  ) {
        return CEGUI::NullRenderer::createTextureTarget( );
    }

    virtual void destroyAllGeometryBuffers(  ) {
        if( bp::override func_destroyAllGeometryBuffers = this->get_override( "destroyAllGeometryBuffers" ) )
            func_destroyAllGeometryBuffers(  );
        else{
            this->CEGUI::NullRenderer::destroyAllGeometryBuffers(  );
        }
    }
    
    void default_destroyAllGeometryBuffers(  ) {
        CEGUI::NullRenderer::destroyAllGeometryBuffers( );
    }

    virtual void destroyAllTextureTargets(  ) {
        if( bp::override func_destroyAllTextureTargets = this->get_override( "destroyAllTextureTargets" ) )
            func_destroyAllTextureTargets(  );
        else{
            this->CEGUI::NullRenderer::destroyAllTextureTargets(  );
        }
    }
    
    void default_destroyAllTextureTargets(  ) {
        CEGUI::NullRenderer::destroyAllTextureTargets( );
    }

    virtual void destroyAllTextures(  ) {
        if( bp::override func_destroyAllTextures = this->get_override( "destroyAllTextures" ) )
            func_destroyAllTextures(  );
        else{
            this->CEGUI::NullRenderer::destroyAllTextures(  );
        }
    }
    
    void default_destroyAllTextures(  ) {
        CEGUI::NullRenderer::destroyAllTextures( );
    }

    virtual void destroyGeometryBuffer( ::CEGUI::GeometryBuffer const & buffer ) {
        if( bp::override func_destroyGeometryBuffer = this->get_override( "destroyGeometryBuffer" ) )
            func_destroyGeometryBuffer( boost::ref(buffer) );
        else{
            this->CEGUI::NullRenderer::destroyGeometryBuffer( boost::ref(buffer) );
        }
    }
    
    void default_destroyGeometryBuffer( ::CEGUI::GeometryBuffer const & buffer ) {
        CEGUI::NullRenderer::destroyGeometryBuffer( boost::ref(buffer) );
    }

    virtual void destroyTexture( ::CEGUI::Texture & texture ) {
        if( bp::override func_destroyTexture = this->get_override( "destroyTexture" ) )
            func_destroyTexture( boost::ref(texture) );
        else{
            this->CEGUI::NullRenderer::destroyTexture( boost::ref(texture) );
        }
    }
    
    void default_destroyTexture( ::CEGUI::Texture & texture ) {
        CEGUI::NullRenderer::destroyTexture( boost::ref(texture) );
    }

    virtual void destroyTexture( ::CEGUI::String const & name ) {
        if( bp::override func_destroyTexture = this->get_override( "destroyTexture" ) )
            func_destroyTexture( boost::ref(name) );
        else{
            this->CEGUI::NullRenderer::destroyTexture( boost::ref(name) );
        }
    }
    
    void default_destroyTexture( ::CEGUI::String const & name ) {
        CEGUI::NullRenderer::destroyTexture( boost::ref(name) );
    }

    virtual void destroyTextureTarget( ::CEGUI::TextureTarget * target ) {
        if( bp::override func_destroyTextureTarget = this->get_override( "destroyTextureTarget" ) )
            func_destroyTextureTarget( boost::python::ptr(target) );
        else{
            this->CEGUI::NullRenderer::destroyTextureTarget( boost::python::ptr(target) );
        }
    }
    
    void default_destroyTextureTarget( ::CEGUI::TextureTarget * target ) {
        CEGUI::NullRenderer::destroyTextureTarget( boost::python::ptr(target) );
    }

    virtual void endRendering(  ) {
        if( bp::override func_endRendering = this->get_override( "endRendering" ) )
            func_endRendering(  );
        else{
            this->CEGUI::NullRenderer::endRendering(  );
        }
    }
    
    void default_endRendering(  ) {
        CEGUI::NullRenderer::endRendering( );
    }

    virtual ::CEGUI::uint getMaxTextureSize(  ) const  {
        if( bp::override func_getMaxTextureSize = this->get_override( "getMaxTextureSize" ) )
            return func_getMaxTextureSize(  );
        else{
            return this->CEGUI::NullRenderer::getMaxTextureSize(  );
        }
    }
    
    ::CEGUI::uint default_getMaxTextureSize(  ) const  {
        return CEGUI::NullRenderer::getMaxTextureSize( );
    }

    virtual bool isTextureDefined( ::CEGUI::String const & name ) const  {
        if( bp::override func_isTextureDefined = this->get_override( "isTextureDefined" ) )
            return func_isTextureDefined( boost::ref(name) );
        else{
            return this->CEGUI::NullRenderer::isTextureDefined( boost::ref(name) );
        }
    }
    
    bool default_isTextureDefined( ::CEGUI::String const & name ) const  {
        return CEGUI::NullRenderer::isTextureDefined( boost::ref(name) );
    }

    static void logTextureCreation( ::CEGUI::String const & name ){
        CEGUI::NullRenderer::logTextureCreation( boost::ref(name) );
    }

    static void logTextureDestruction( ::CEGUI::String const & name ){
        CEGUI::NullRenderer::logTextureDestruction( boost::ref(name) );
    }

    virtual void setDisplaySize( ::CEGUI::Sizef const & sz ) {
        if( bp::override func_setDisplaySize = this->get_override( "setDisplaySize" ) )
            func_setDisplaySize( boost::ref(sz) );
        else{
            this->CEGUI::NullRenderer::setDisplaySize( boost::ref(sz) );
        }
    }
    
    void default_setDisplaySize( ::CEGUI::Sizef const & sz ) {
        CEGUI::NullRenderer::setDisplaySize( boost::ref(sz) );
    }

    void throwIfNameExists( ::CEGUI::String const & name ) const {
        CEGUI::NullRenderer::throwIfNameExists( boost::ref(name) );
    }

};

void register_NullRenderer_class(){

    { //::CEGUI::NullRenderer
        typedef bp::class_< NullRenderer_wrapper, bp::bases< ::CEGUI::Renderer >, boost::noncopyable > NullRenderer_exposer_t;
        NullRenderer_exposer_t NullRenderer_exposer = NullRenderer_exposer_t( "NullRenderer", "! CEGUI.Renderer implementation for no particular engine\n", bp::no_init );
        bp::scope NullRenderer_scope( NullRenderer_exposer );
        NullRenderer_exposer.def( bp::init< >("! default constructor.\n") );
        { //::CEGUI::NullRenderer::beginRendering
        
            typedef void ( ::CEGUI::NullRenderer::*beginRendering_function_type )(  ) ;
            typedef void ( NullRenderer_wrapper::*default_beginRendering_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "beginRendering"
                , beginRendering_function_type(&::CEGUI::NullRenderer::beginRendering)
                , default_beginRendering_function_type(&NullRenderer_wrapper::default_beginRendering) );
        
        }
        { //::CEGUI::NullRenderer::bootstrapSystem
        
            typedef ::CEGUI::NullRenderer & ( *bootstrapSystem_function_type )( int const );
            
            NullRenderer_exposer.def( 
                "bootstrapSystem"
                , bootstrapSystem_function_type( &::CEGUI::NullRenderer::bootstrapSystem )
                , ( bp::arg("abi")=(int const)(99990) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Convenience function that creates all the necessary objects\n\
                    then initialises the CEGUI system with them.\n\
            \n\
                    This will create and initialise the following objects for you:\n\
                    - CEGUI.NullRenderer\n\
                    - CEGUI.DefaultResourceProvider\n\
                    - CEGUI.System\n\
            \n\
                @param abi\n\
                    This must be set to CEGUI_VERSION_ABI\n\
            \n\
                @return\n\
                    Reference to the CEGUI.NullRenderer object that was created.\n\
            \n\
                *\n" );
        
        }
        { //::CEGUI::NullRenderer::constructor_impl
        
            typedef void ( NullRenderer_wrapper::*constructor_impl_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "constructor_impl"
                , constructor_impl_function_type( &NullRenderer_wrapper::constructor_impl )
                , "! default constructor.\n\
            ! common construction things.\n" );
        
        }
        { //::CEGUI::NullRenderer::create
        
            typedef ::CEGUI::NullRenderer & ( *create_function_type )( int const );
            
            NullRenderer_exposer.def( 
                "create"
                , create_function_type( &::CEGUI::NullRenderer::create )
                , ( bp::arg("abi")=(int const)(99990) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Create an NullRenderer object \n\
            *\n" );
        
        }
        { //::CEGUI::NullRenderer::createGeometryBuffer
        
            typedef ::CEGUI::GeometryBuffer & ( ::CEGUI::NullRenderer::*createGeometryBuffer_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "createGeometryBuffer"
                , createGeometryBuffer_function_type(&::CEGUI::NullRenderer::createGeometryBuffer)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NullRenderer::createTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::NullRenderer::*createTexture_function_type )( ::CEGUI::String const & ) ;
            
            NullRenderer_exposer.def( 
                "createTexture"
                , createTexture_function_type(&::CEGUI::NullRenderer::createTexture)
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NullRenderer::createTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::NullRenderer::*createTexture_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const & ) ;
            
            NullRenderer_exposer.def( 
                "createTexture"
                , createTexture_function_type(&::CEGUI::NullRenderer::createTexture)
                , ( bp::arg("name"), bp::arg("filename"), bp::arg("resourceGroup") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NullRenderer::createTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::NullRenderer::*createTexture_function_type )( ::CEGUI::String const &,::CEGUI::Sizef const & ) ;
            
            NullRenderer_exposer.def( 
                "createTexture"
                , createTexture_function_type(&::CEGUI::NullRenderer::createTexture)
                , ( bp::arg("name"), bp::arg("size") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NullRenderer::createTextureTarget
        
            typedef ::CEGUI::TextureTarget * ( ::CEGUI::NullRenderer::*createTextureTarget_function_type )(  ) ;
            typedef ::CEGUI::TextureTarget * ( NullRenderer_wrapper::*default_createTextureTarget_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "createTextureTarget"
                , createTextureTarget_function_type(&::CEGUI::NullRenderer::createTextureTarget)
                , default_createTextureTarget_function_type(&NullRenderer_wrapper::default_createTextureTarget)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NullRenderer::destroy
        
            typedef void ( *destroy_function_type )( ::CEGUI::NullRenderer & );
            
            NullRenderer_exposer.def( 
                "destroy"
                , destroy_function_type( &::CEGUI::NullRenderer::destroy )
                , ( bp::arg("renderer") )
                , "! destory an NullRenderer object.\n" );
        
        }
        { //::CEGUI::NullRenderer::destroyAllGeometryBuffers
        
            typedef void ( ::CEGUI::NullRenderer::*destroyAllGeometryBuffers_function_type )(  ) ;
            typedef void ( NullRenderer_wrapper::*default_destroyAllGeometryBuffers_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "destroyAllGeometryBuffers"
                , destroyAllGeometryBuffers_function_type(&::CEGUI::NullRenderer::destroyAllGeometryBuffers)
                , default_destroyAllGeometryBuffers_function_type(&NullRenderer_wrapper::default_destroyAllGeometryBuffers) );
        
        }
        { //::CEGUI::NullRenderer::destroyAllTextureTargets
        
            typedef void ( ::CEGUI::NullRenderer::*destroyAllTextureTargets_function_type )(  ) ;
            typedef void ( NullRenderer_wrapper::*default_destroyAllTextureTargets_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "destroyAllTextureTargets"
                , destroyAllTextureTargets_function_type(&::CEGUI::NullRenderer::destroyAllTextureTargets)
                , default_destroyAllTextureTargets_function_type(&NullRenderer_wrapper::default_destroyAllTextureTargets) );
        
        }
        { //::CEGUI::NullRenderer::destroyAllTextures
        
            typedef void ( ::CEGUI::NullRenderer::*destroyAllTextures_function_type )(  ) ;
            typedef void ( NullRenderer_wrapper::*default_destroyAllTextures_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "destroyAllTextures"
                , destroyAllTextures_function_type(&::CEGUI::NullRenderer::destroyAllTextures)
                , default_destroyAllTextures_function_type(&NullRenderer_wrapper::default_destroyAllTextures) );
        
        }
        { //::CEGUI::NullRenderer::destroyGeometryBuffer
        
            typedef void ( ::CEGUI::NullRenderer::*destroyGeometryBuffer_function_type )( ::CEGUI::GeometryBuffer const & ) ;
            typedef void ( NullRenderer_wrapper::*default_destroyGeometryBuffer_function_type )( ::CEGUI::GeometryBuffer const & ) ;
            
            NullRenderer_exposer.def( 
                "destroyGeometryBuffer"
                , destroyGeometryBuffer_function_type(&::CEGUI::NullRenderer::destroyGeometryBuffer)
                , default_destroyGeometryBuffer_function_type(&NullRenderer_wrapper::default_destroyGeometryBuffer)
                , ( bp::arg("buffer") ) );
        
        }
        { //::CEGUI::NullRenderer::destroySystem
        
            typedef void ( *destroySystem_function_type )(  );
            
            NullRenderer_exposer.def( 
                "destroySystem"
                , destroySystem_function_type( &::CEGUI::NullRenderer::destroySystem )
                , "*!\n\
                \n\
                    Convenience function to cleanup the CEGUI system and related objects\n\
                    that were created by calling the bootstrapSystem function.\n\
            \n\
                    This function will destroy the following objects for you:\n\
                    - CEGUI.System\n\
                    - CEGUI.DefaultResourceProvider\n\
                    - CEGUI.NullRenderer\n\
            \n\
                \note\n\
                    If you did not initialise CEGUI by calling the bootstrapSystem function,\n\
                    you should  e not call this, but rather delete any objects you created\n\
                    manually.\n\
                *\n" );
        
        }
        { //::CEGUI::NullRenderer::destroyTexture
        
            typedef void ( ::CEGUI::NullRenderer::*destroyTexture_function_type )( ::CEGUI::Texture & ) ;
            typedef void ( NullRenderer_wrapper::*default_destroyTexture_function_type )( ::CEGUI::Texture & ) ;
            
            NullRenderer_exposer.def( 
                "destroyTexture"
                , destroyTexture_function_type(&::CEGUI::NullRenderer::destroyTexture)
                , default_destroyTexture_function_type(&NullRenderer_wrapper::default_destroyTexture)
                , ( bp::arg("texture") ) );
        
        }
        { //::CEGUI::NullRenderer::destroyTexture
        
            typedef void ( ::CEGUI::NullRenderer::*destroyTexture_function_type )( ::CEGUI::String const & ) ;
            typedef void ( NullRenderer_wrapper::*default_destroyTexture_function_type )( ::CEGUI::String const & ) ;
            
            NullRenderer_exposer.def( 
                "destroyTexture"
                , destroyTexture_function_type(&::CEGUI::NullRenderer::destroyTexture)
                , default_destroyTexture_function_type(&NullRenderer_wrapper::default_destroyTexture)
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::NullRenderer::destroyTextureTarget
        
            typedef void ( ::CEGUI::NullRenderer::*destroyTextureTarget_function_type )( ::CEGUI::TextureTarget * ) ;
            typedef void ( NullRenderer_wrapper::*default_destroyTextureTarget_function_type )( ::CEGUI::TextureTarget * ) ;
            
            NullRenderer_exposer.def( 
                "destroyTextureTarget"
                , destroyTextureTarget_function_type(&::CEGUI::NullRenderer::destroyTextureTarget)
                , default_destroyTextureTarget_function_type(&NullRenderer_wrapper::default_destroyTextureTarget)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::NullRenderer::endRendering
        
            typedef void ( ::CEGUI::NullRenderer::*endRendering_function_type )(  ) ;
            typedef void ( NullRenderer_wrapper::*default_endRendering_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "endRendering"
                , endRendering_function_type(&::CEGUI::NullRenderer::endRendering)
                , default_endRendering_function_type(&NullRenderer_wrapper::default_endRendering) );
        
        }
        { //::CEGUI::NullRenderer::getDefaultRenderTarget
        
            typedef ::CEGUI::RenderTarget & ( ::CEGUI::NullRenderer::*getDefaultRenderTarget_function_type )(  ) ;
            
            NullRenderer_exposer.def( 
                "getDefaultRenderTarget"
                , getDefaultRenderTarget_function_type(&::CEGUI::NullRenderer::getDefaultRenderTarget)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NullRenderer::getDisplayDPI
        
            typedef ::CEGUI::Vector2f const & ( ::CEGUI::NullRenderer::*getDisplayDPI_function_type )(  ) const;
            
            NullRenderer_exposer.def( 
                "getDisplayDPI"
                , getDisplayDPI_function_type(&::CEGUI::NullRenderer::getDisplayDPI)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::NullRenderer::getDisplaySize
        
            typedef ::CEGUI::Sizef const & ( ::CEGUI::NullRenderer::*getDisplaySize_function_type )(  ) const;
            
            NullRenderer_exposer.def( 
                "getDisplaySize"
                , getDisplaySize_function_type(&::CEGUI::NullRenderer::getDisplaySize)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::NullRenderer::getIdentifierString
        
            typedef ::CEGUI::String const & ( ::CEGUI::NullRenderer::*getIdentifierString_function_type )(  ) const;
            
            NullRenderer_exposer.def( 
                "getIdentifierString"
                , getIdentifierString_function_type(&::CEGUI::NullRenderer::getIdentifierString)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::NullRenderer::getMaxTextureSize
        
            typedef ::CEGUI::uint ( ::CEGUI::NullRenderer::*getMaxTextureSize_function_type )(  ) const;
            typedef ::CEGUI::uint ( NullRenderer_wrapper::*default_getMaxTextureSize_function_type )(  ) const;
            
            NullRenderer_exposer.def( 
                "getMaxTextureSize"
                , getMaxTextureSize_function_type(&::CEGUI::NullRenderer::getMaxTextureSize)
                , default_getMaxTextureSize_function_type(&NullRenderer_wrapper::default_getMaxTextureSize) );
        
        }
        { //::CEGUI::NullRenderer::getTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::NullRenderer::*getTexture_function_type )( ::CEGUI::String const & ) const;
            
            NullRenderer_exposer.def( 
                "getTexture"
                , getTexture_function_type(&::CEGUI::NullRenderer::getTexture)
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NullRenderer::isTextureDefined
        
            typedef bool ( ::CEGUI::NullRenderer::*isTextureDefined_function_type )( ::CEGUI::String const & ) const;
            typedef bool ( NullRenderer_wrapper::*default_isTextureDefined_function_type )( ::CEGUI::String const & ) const;
            
            NullRenderer_exposer.def( 
                "isTextureDefined"
                , isTextureDefined_function_type(&::CEGUI::NullRenderer::isTextureDefined)
                , default_isTextureDefined_function_type(&NullRenderer_wrapper::default_isTextureDefined)
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::NullRenderer::logTextureCreation
        
            typedef void ( *logTextureCreation_function_type )( ::CEGUI::String const & );
            
            NullRenderer_exposer.def( 
                "logTextureCreation"
                , logTextureCreation_function_type( &NullRenderer_wrapper::logTextureCreation )
                , ( bp::arg("name") )
                , "! helper to throw exception if name is already used.\n\
            ! helper to safely log the creation of a named texture\n" );
        
        }
        { //::CEGUI::NullRenderer::logTextureDestruction
        
            typedef void ( *logTextureDestruction_function_type )( ::CEGUI::String const & );
            
            NullRenderer_exposer.def( 
                "logTextureDestruction"
                , logTextureDestruction_function_type( &NullRenderer_wrapper::logTextureDestruction )
                , ( bp::arg("name") )
                , "! helper to safely log the creation of a named texture\n\
            ! helper to safely log the destruction of a named texture\n" );
        
        }
        { //::CEGUI::NullRenderer::setDisplaySize
        
            typedef void ( ::CEGUI::NullRenderer::*setDisplaySize_function_type )( ::CEGUI::Sizef const & ) ;
            typedef void ( NullRenderer_wrapper::*default_setDisplaySize_function_type )( ::CEGUI::Sizef const & ) ;
            
            NullRenderer_exposer.def( 
                "setDisplaySize"
                , setDisplaySize_function_type(&::CEGUI::NullRenderer::setDisplaySize)
                , default_setDisplaySize_function_type(&NullRenderer_wrapper::default_setDisplaySize)
                , ( bp::arg("sz") ) );
        
        }
        { //::CEGUI::NullRenderer::throwIfNameExists
        
            typedef void ( NullRenderer_wrapper::*throwIfNameExists_function_type )( ::CEGUI::String const & ) const;
            
            NullRenderer_exposer.def( 
                "throwIfNameExists"
                , throwIfNameExists_function_type( &NullRenderer_wrapper::throwIfNameExists )
                , ( bp::arg("name") )
                , "! helper to throw exception if name is already used.\n" );
        
        }
        NullRenderer_exposer.staticmethod( "bootstrapSystem" );
        NullRenderer_exposer.staticmethod( "create" );
        NullRenderer_exposer.staticmethod( "destroy" );
        NullRenderer_exposer.staticmethod( "destroySystem" );
        NullRenderer_exposer.staticmethod( "logTextureCreation" );
        NullRenderer_exposer.staticmethod( "logTextureDestruction" );
    }

}
