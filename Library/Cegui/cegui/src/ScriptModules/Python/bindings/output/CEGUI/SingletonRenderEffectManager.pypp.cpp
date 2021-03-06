// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "SingletonRenderEffectManager.pypp.hpp"

namespace bp = boost::python;

void register_SingletonRenderEffectManager_class(){

    { //::CEGUI::Singleton< CEGUI::RenderEffectManager >
        typedef bp::class_< CEGUI::Singleton< CEGUI::RenderEffectManager >, boost::noncopyable > SingletonRenderEffectManager_exposer_t;
        SingletonRenderEffectManager_exposer_t SingletonRenderEffectManager_exposer = SingletonRenderEffectManager_exposer_t( "SingletonRenderEffectManager", bp::init< >() );
        bp::scope SingletonRenderEffectManager_scope( SingletonRenderEffectManager_exposer );
        { //::CEGUI::Singleton< CEGUI::RenderEffectManager >::getSingleton
        
            typedef CEGUI::Singleton< CEGUI::RenderEffectManager > exported_class_t;
            typedef ::CEGUI::RenderEffectManager & ( *getSingleton_function_type )(  );
            
            SingletonRenderEffectManager_exposer.def( 
                "getSingleton"
                , getSingleton_function_type( &::CEGUI::Singleton< CEGUI::RenderEffectManager >::getSingleton )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        SingletonRenderEffectManager_exposer.staticmethod( "getSingleton" );
    }

}
