// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "WindowRendererFactory.pypp.hpp"

namespace bp = boost::python;

struct WindowRendererFactory_wrapper : CEGUI::WindowRendererFactory, bp::wrapper< CEGUI::WindowRendererFactory > {

    WindowRendererFactory_wrapper(::CEGUI::String const & name )
    : CEGUI::WindowRendererFactory( boost::ref(name) )
      , bp::wrapper< CEGUI::WindowRendererFactory >(){
        // constructor
    
    }

    virtual ::CEGUI::WindowRenderer * create(  ){
        bp::override func_create = this->get_override( "create" );
        return func_create(  );
    }

    virtual void destroy( ::CEGUI::WindowRenderer * wr ){
        bp::override func_destroy = this->get_override( "destroy" );
        func_destroy( boost::python::ptr(wr) );
    }

};

void register_WindowRendererFactory_class(){

    { //::CEGUI::WindowRendererFactory
        typedef bp::class_< WindowRendererFactory_wrapper, boost::noncopyable > WindowRendererFactory_exposer_t;
        WindowRendererFactory_exposer_t WindowRendererFactory_exposer = WindowRendererFactory_exposer_t( "WindowRendererFactory", "*!\n\
        \n\
            Base-class for WindowRendererFactory\n\
        *\n", bp::init< CEGUI::String const & >(( bp::arg("name") ), "*!\n\
            \n\
                Contructor\n\
        \n\
            @param name\n\
                Type name for this window renderer factory\n\
            *\n") );
        bp::scope WindowRendererFactory_scope( WindowRendererFactory_exposer );
        { //::CEGUI::WindowRendererFactory::create
        
            typedef ::CEGUI::WindowRenderer * ( ::CEGUI::WindowRendererFactory::*create_function_type )(  ) ;
            
            WindowRendererFactory_exposer.def( 
                "create"
                , bp::pure_virtual( create_function_type(&::CEGUI::WindowRendererFactory::create) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Creates and returns a new window renderer object.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRendererFactory::destroy
        
            typedef void ( ::CEGUI::WindowRendererFactory::*destroy_function_type )( ::CEGUI::WindowRenderer * ) ;
            
            WindowRendererFactory_exposer.def( 
                "destroy"
                , bp::pure_virtual( destroy_function_type(&::CEGUI::WindowRendererFactory::destroy) )
                , ( bp::arg("wr") )
                , "*!\n\
            \n\
                Destroys a window renderer object previously created by us.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowRendererFactory::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::WindowRendererFactory::*getName_function_type )(  ) const;
            
            WindowRendererFactory_exposer.def( 
                "getName"
                , getName_function_type( &::CEGUI::WindowRendererFactory::getName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
                Returns the type name of this window renderer factory.\n\
            *\n" );
        
        }
    }

}
