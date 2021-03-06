// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "RenderingSurface.pypp.hpp"

namespace bp = boost::python;

struct RenderingSurface_wrapper : CEGUI::RenderingSurface, bp::wrapper< CEGUI::RenderingSurface > {

    RenderingSurface_wrapper(::CEGUI::RenderTarget & target )
    : CEGUI::RenderingSurface( boost::ref(target) )
      , bp::wrapper< CEGUI::RenderingSurface >(){
        // constructor
    
    }

    void attachWindow( ::CEGUI::RenderingWindow & w ){
        CEGUI::RenderingSurface::attachWindow( boost::ref(w) );
    }

    virtual void destroyRenderingWindow( ::CEGUI::RenderingWindow & window ) {
        if( bp::override func_destroyRenderingWindow = this->get_override( "destroyRenderingWindow" ) )
            func_destroyRenderingWindow( boost::ref(window) );
        else{
            this->CEGUI::RenderingSurface::destroyRenderingWindow( boost::ref(window) );
        }
    }
    
    void default_destroyRenderingWindow( ::CEGUI::RenderingWindow & window ) {
        CEGUI::RenderingSurface::destroyRenderingWindow( boost::ref(window) );
    }

    void detatchWindow( ::CEGUI::RenderingWindow & w ){
        CEGUI::RenderingSurface::detatchWindow( boost::ref(w) );
    }

    virtual void draw(  ) {
        if( bp::override func_draw = this->get_override( "draw" ) )
            func_draw(  );
        else{
            this->CEGUI::RenderingSurface::draw(  );
        }
    }
    
    void default_draw(  ) {
        CEGUI::RenderingSurface::draw( );
    }

    void draw( ::CEGUI::RenderQueue const & queue, ::CEGUI::RenderQueueEventArgs & args ){
        CEGUI::RenderingSurface::draw( boost::ref(queue), boost::ref(args) );
    }

    virtual void drawContent(  ){
        if( bp::override func_drawContent = this->get_override( "drawContent" ) )
            func_drawContent(  );
        else{
            this->CEGUI::RenderingSurface::drawContent(  );
        }
    }
    
    virtual void default_drawContent(  ){
        CEGUI::RenderingSurface::drawContent( );
    }

    virtual void invalidate(  ) {
        if( bp::override func_invalidate = this->get_override( "invalidate" ) )
            func_invalidate(  );
        else{
            this->CEGUI::RenderingSurface::invalidate(  );
        }
    }
    
    void default_invalidate(  ) {
        CEGUI::RenderingSurface::invalidate( );
    }

    virtual bool isRenderingWindow(  ) const  {
        if( bp::override func_isRenderingWindow = this->get_override( "isRenderingWindow" ) )
            return func_isRenderingWindow(  );
        else{
            return this->CEGUI::RenderingSurface::isRenderingWindow(  );
        }
    }
    
    bool default_isRenderingWindow(  ) const  {
        return CEGUI::RenderingSurface::isRenderingWindow( );
    }

    virtual void transferRenderingWindow( ::CEGUI::RenderingWindow & window ) {
        if( bp::override func_transferRenderingWindow = this->get_override( "transferRenderingWindow" ) )
            func_transferRenderingWindow( boost::ref(window) );
        else{
            this->CEGUI::RenderingSurface::transferRenderingWindow( boost::ref(window) );
        }
    }
    
    void default_transferRenderingWindow( ::CEGUI::RenderingWindow & window ) {
        CEGUI::RenderingSurface::transferRenderingWindow( boost::ref(window) );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    void fireEvent_impl( ::CEGUI::String const & name, ::CEGUI::EventArgs & args ){
        CEGUI::EventSet::fireEvent_impl( boost::ref(name), boost::ref(args) );
    }

    ::CEGUI::ScriptModule * getScriptModule(  ) const {
        return CEGUI::EventSet::getScriptModule(  );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

};

void register_RenderingSurface_class(){

    { //::CEGUI::RenderingSurface
        typedef bp::class_< RenderingSurface_wrapper, bp::bases< CEGUI::EventSet >, boost::noncopyable > RenderingSurface_exposer_t;
        RenderingSurface_exposer_t RenderingSurface_exposer = RenderingSurface_exposer_t( "RenderingSurface", bp::init< CEGUI::RenderTarget & >(( bp::arg("target") ), "*!\n\
            \n\
                Constructor for RenderingSurface objects.\n\
        \n\
            @param target\n\
                RenderTarget object that will receive rendered output from the\n\
                RenderingSurface being created.\n\
        \n\
            \note\n\
                The RenderingSurface does not take ownership of  target.  When the\n\
                RenderingSurface is finally destroyed, the RenderTarget will not have\n\
                been destroyed, and it should be destoyed by whover created it, if that\n\
                is desired.  One reason for this is that there is not an exclusive one\n\
                to one mapping from RenderingSurface to RenderTarget objects; it's\n\
                entirely feasable that multiple RenderingSurface objects could be\n\
                targetting a shared RenderTarget).\n\
            *\n") );
        bp::scope RenderingSurface_scope( RenderingSurface_exposer );
        bp::implicitly_convertible< CEGUI::RenderTarget &, CEGUI::RenderingSurface >();
        { //::CEGUI::RenderingSurface::addGeometryBuffer
        
            typedef void ( ::CEGUI::RenderingSurface::*addGeometryBuffer_function_type )( ::CEGUI::RenderQueueID const,::CEGUI::GeometryBuffer const & ) ;
            
            RenderingSurface_exposer.def( 
                "addGeometryBuffer"
                , addGeometryBuffer_function_type( &::CEGUI::RenderingSurface::addGeometryBuffer )
                , ( bp::arg("queue"), bp::arg("buffer") )
                , "*!\n\
                \n\
                    Add the specified GeometryBuffer to the specified queue for rendering\n\
                    when the RenderingSurface is drawn.\n\
            \n\
                @param queue\n\
                    One of the RenderQueueID enumerated values indicating which prioritised\n\
                    queue the GeometryBuffer should be added to.\n\
            \n\
                @param buffer\n\
                    GeometryBuffer object to be added to the specified rendering queue.\n\
            \n\
                \note\n\
                    The RenderingSurface does not take ownership of the GeometryBuffer, and\n\
                    does not destroy it when the RenderingSurface geometry is cleared.\n\
                    Rather, the RenderingSurface is just maintaining a list of thigs to be\n\
                    drawn; the actual GeometryBuffers can be re-used by whichever object\n\
                     e does own them, and even changed or updated while still attached to\n\
                    a RenderingSurface.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderingSurface::attachWindow
        
            typedef void ( RenderingSurface_wrapper::*attachWindow_function_type )( ::CEGUI::RenderingWindow & ) ;
            
            RenderingSurface_exposer.def( 
                "attachWindow"
                , attachWindow_function_type( &RenderingSurface_wrapper::attachWindow )
                , ( bp::arg("w") )
                , "! attach ReneringWindow from this RenderingSurface\n" );
        
        }
        { //::CEGUI::RenderingSurface::clearGeometry
        
            typedef void ( ::CEGUI::RenderingSurface::*clearGeometry_function_type )( ::CEGUI::RenderQueueID const ) ;
            
            RenderingSurface_exposer.def( 
                "clearGeometry"
                , clearGeometry_function_type( &::CEGUI::RenderingSurface::clearGeometry )
                , ( bp::arg("queue") )
                , "*!\n\
                \n\
                    Clears all GeometryBuffers from the specified rendering queue.\n\
            \n\
                @param queue\n\
                    One of the RenderQueueID enumerated values indicating which prioritised\n\
                    queue is to to be cleared.\n\
            \n\
                \note\n\
                    Clearing a rendering queue does not destroy the attached GeometryBuffers,\n\
                    which remain under thier original ownership.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderingSurface::clearGeometry
        
            typedef void ( ::CEGUI::RenderingSurface::*clearGeometry_function_type )(  ) ;
            
            RenderingSurface_exposer.def( 
                "clearGeometry"
                , clearGeometry_function_type( &::CEGUI::RenderingSurface::clearGeometry )
                , "*!\n\
                \n\
                    Clears all GeometryBuffers from all rendering queues.\n\
            \n\
                \note\n\
                    Clearing the rendering queues does not destroy the attached GeometryBuffers,\n\
                    which remain under their original ownership.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderingSurface::createRenderingWindow
        
            typedef ::CEGUI::RenderingWindow & ( ::CEGUI::RenderingSurface::*createRenderingWindow_function_type )( ::CEGUI::TextureTarget & ) ;
            
            RenderingSurface_exposer.def( 
                "createRenderingWindow"
                , createRenderingWindow_function_type(&::CEGUI::RenderingSurface::createRenderingWindow)
                , ( bp::arg("target") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::RenderingSurface::destroyRenderingWindow
        
            typedef void ( ::CEGUI::RenderingSurface::*destroyRenderingWindow_function_type )( ::CEGUI::RenderingWindow & ) ;
            typedef void ( RenderingSurface_wrapper::*default_destroyRenderingWindow_function_type )( ::CEGUI::RenderingWindow & ) ;
            
            RenderingSurface_exposer.def( 
                "destroyRenderingWindow"
                , destroyRenderingWindow_function_type(&::CEGUI::RenderingSurface::destroyRenderingWindow)
                , default_destroyRenderingWindow_function_type(&RenderingSurface_wrapper::default_destroyRenderingWindow)
                , ( bp::arg("window") ) );
        
        }
        { //::CEGUI::RenderingSurface::detatchWindow
        
            typedef void ( RenderingSurface_wrapper::*detatchWindow_function_type )( ::CEGUI::RenderingWindow & ) ;
            
            RenderingSurface_exposer.def( 
                "detatchWindow"
                , detatchWindow_function_type( &RenderingSurface_wrapper::detatchWindow )
                , ( bp::arg("w") )
                , "! detatch ReneringWindow from this RenderingSurface\n" );
        
        }
        { //::CEGUI::RenderingSurface::draw
        
            typedef void ( ::CEGUI::RenderingSurface::*draw_function_type )(  ) ;
            typedef void ( RenderingSurface_wrapper::*default_draw_function_type )(  ) ;
            
            RenderingSurface_exposer.def( 
                "draw"
                , draw_function_type(&::CEGUI::RenderingSurface::draw)
                , default_draw_function_type(&RenderingSurface_wrapper::default_draw) );
        
        }
        { //::CEGUI::RenderingSurface::draw
        
            typedef void ( RenderingSurface_wrapper::*draw_function_type )( ::CEGUI::RenderQueue const &,::CEGUI::RenderQueueEventArgs & ) ;
            
            RenderingSurface_exposer.def( 
                "draw"
                , draw_function_type( &RenderingSurface_wrapper::draw )
                , ( bp::arg("queue"), bp::arg("args") )
                , "! draw a rendering queue, firing events before and after.\n" );
        
        }
        { //::CEGUI::RenderingSurface::drawContent
        
            typedef void ( RenderingSurface_wrapper::*drawContent_function_type )(  ) ;
            
            RenderingSurface_exposer.def( 
                "drawContent"
                , drawContent_function_type( &RenderingSurface_wrapper::default_drawContent )
                , "** draw the surface content. Default impl draws the render queues.\n\
             * NB: Called between RenderTarget activate and deactivate calls.\n\
             *\n" );
        
        }
        { //::CEGUI::RenderingSurface::getRenderTarget
        
            typedef ::CEGUI::RenderTarget const & ( ::CEGUI::RenderingSurface::*getRenderTarget_function_type )(  ) const;
            
            RenderingSurface_exposer.def( 
                "getRenderTarget"
                , getRenderTarget_function_type( &::CEGUI::RenderingSurface::getRenderTarget )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Return the RenderTarget object that this RenderingSurface is drawing\n\
                    to.\n\
            \n\
                @return\n\
                    RenderTarget object that the RenderingSurface is using to draw it's\n\
                    output.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderingSurface::getRenderTarget
        
            typedef ::CEGUI::RenderTarget & ( ::CEGUI::RenderingSurface::*getRenderTarget_function_type )(  ) ;
            
            RenderingSurface_exposer.def( 
                "getRenderTarget"
                , getRenderTarget_function_type( &::CEGUI::RenderingSurface::getRenderTarget )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Return the RenderTarget object that this RenderingSurface is drawing\n\
                    to.\n\
            \n\
                @return\n\
                    RenderTarget object that the RenderingSurface is using to draw it's\n\
                    output.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderingSurface::invalidate
        
            typedef void ( ::CEGUI::RenderingSurface::*invalidate_function_type )(  ) ;
            typedef void ( RenderingSurface_wrapper::*default_invalidate_function_type )(  ) ;
            
            RenderingSurface_exposer.def( 
                "invalidate"
                , invalidate_function_type(&::CEGUI::RenderingSurface::invalidate)
                , default_invalidate_function_type(&RenderingSurface_wrapper::default_invalidate) );
        
        }
        { //::CEGUI::RenderingSurface::isInvalidated
        
            typedef bool ( ::CEGUI::RenderingSurface::*isInvalidated_function_type )(  ) const;
            
            RenderingSurface_exposer.def( 
                "isInvalidated"
                , isInvalidated_function_type( &::CEGUI::RenderingSurface::isInvalidated )
                , "*!\n\
                \n\
                    Return whether this RenderingSurface is invalidated.\n\
            \n\
                @return\n\
                    - true to indicate the RenderingSurface is invalidated and will be\n\
                    rerendered the next time the draw member function is called.\n\
                    - false to indicate the RenderingSurface is valid, and will not be\n\
                    rerendered the next time the draw member function is called, since it's\n\
                    cached imagery is up-to-date.\n\
            \n\
                \n\
                    Note that some surface types can never be in a 'valid' state and so\n\
                    will always return true.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderingSurface::isRenderingWindow
        
            typedef bool ( ::CEGUI::RenderingSurface::*isRenderingWindow_function_type )(  ) const;
            typedef bool ( RenderingSurface_wrapper::*default_isRenderingWindow_function_type )(  ) const;
            
            RenderingSurface_exposer.def( 
                "isRenderingWindow"
                , isRenderingWindow_function_type(&::CEGUI::RenderingSurface::isRenderingWindow)
                , default_isRenderingWindow_function_type(&RenderingSurface_wrapper::default_isRenderingWindow) );
        
        }
        { //::CEGUI::RenderingSurface::removeGeometryBuffer
        
            typedef void ( ::CEGUI::RenderingSurface::*removeGeometryBuffer_function_type )( ::CEGUI::RenderQueueID const,::CEGUI::GeometryBuffer const & ) ;
            
            RenderingSurface_exposer.def( 
                "removeGeometryBuffer"
                , removeGeometryBuffer_function_type( &::CEGUI::RenderingSurface::removeGeometryBuffer )
                , ( bp::arg("queue"), bp::arg("buffer") )
                , "*!\n\
                \n\
                    Remove the specified GeometryBuffer from the specified queue.\n\
            \n\
                @param queue\n\
                    One of the RenderQueueID enumerated values indicating which prioritised\n\
                    queue the GeometryBuffer should be removed from.\n\
            \n\
                @param buffer\n\
                    GeometryBuffer object to be removed from the specified rendering queue.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderingSurface::transferRenderingWindow
        
            typedef void ( ::CEGUI::RenderingSurface::*transferRenderingWindow_function_type )( ::CEGUI::RenderingWindow & ) ;
            typedef void ( RenderingSurface_wrapper::*default_transferRenderingWindow_function_type )( ::CEGUI::RenderingWindow & ) ;
            
            RenderingSurface_exposer.def( 
                "transferRenderingWindow"
                , transferRenderingWindow_function_type(&::CEGUI::RenderingSurface::transferRenderingWindow)
                , default_transferRenderingWindow_function_type(&RenderingSurface_wrapper::default_transferRenderingWindow)
                , ( bp::arg("window") ) );
        
        }
        RenderingSurface_exposer.add_static_property( "EventRenderQueueEnded"
                        , bp::make_getter( &CEGUI::RenderingSurface::EventRenderQueueEnded
                                , bp::return_value_policy< bp::return_by_value >() ) );
        RenderingSurface_exposer.add_static_property( "EventRenderQueueStarted"
                        , bp::make_getter( &CEGUI::RenderingSurface::EventRenderQueueStarted
                                , bp::return_value_policy< bp::return_by_value >() ) );
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( RenderingSurface_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            RenderingSurface_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&RenderingSurface_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::EventSet::fireEvent_impl
        
            typedef void ( RenderingSurface_wrapper::*fireEvent_impl_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs & ) ;
            
            RenderingSurface_exposer.def( 
                "fireEvent_impl"
                , fireEvent_impl_function_type( &RenderingSurface_wrapper::fireEvent_impl )
                , ( bp::arg("name"), bp::arg("args") )
                , "! Implementation event firing member\n" );
        
        }
        { //::CEGUI::EventSet::getScriptModule
        
            typedef ::CEGUI::ScriptModule * ( RenderingSurface_wrapper::*getScriptModule_function_type )(  ) const;
            
            RenderingSurface_exposer.def( 
                "getScriptModule"
                , getScriptModule_function_type( &RenderingSurface_wrapper::getScriptModule )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "! Implementation event firing member\n\
            ! Helper to return the script module pointer or throw.\n" );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( RenderingSurface_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            RenderingSurface_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&RenderingSurface_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( RenderingSurface_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            RenderingSurface_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&RenderingSurface_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
    }

}
