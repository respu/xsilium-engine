// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "MouseCursorEventArgs.pypp.hpp"

namespace bp = boost::python;

struct MouseCursorEventArgs_wrapper : CEGUI::MouseCursorEventArgs, bp::wrapper< CEGUI::MouseCursorEventArgs > {

    MouseCursorEventArgs_wrapper(CEGUI::MouseCursorEventArgs const & arg )
    : CEGUI::MouseCursorEventArgs( arg )
      , bp::wrapper< CEGUI::MouseCursorEventArgs >(){
        // copy constructor
        
    }

    MouseCursorEventArgs_wrapper(::CEGUI::MouseCursor * cursor )
    : CEGUI::MouseCursorEventArgs( boost::python::ptr(cursor) )
      , bp::wrapper< CEGUI::MouseCursorEventArgs >(){
        // constructor
    
    }

    static ::CEGUI::Image const * get_image(CEGUI::MouseCursorEventArgs const & inst ){
        return inst.image;
    }
    
    static void set_image( CEGUI::MouseCursorEventArgs & inst, ::CEGUI::Image const * new_value ){ 
        inst.image = new_value;
    }

    static ::CEGUI::MouseCursor * get_mouseCursor(CEGUI::MouseCursorEventArgs const & inst ){
        return inst.mouseCursor;
    }
    
    static void set_mouseCursor( CEGUI::MouseCursorEventArgs & inst, ::CEGUI::MouseCursor * new_value ){ 
        inst.mouseCursor = new_value;
    }

};

void register_MouseCursorEventArgs_class(){

    { //::CEGUI::MouseCursorEventArgs
        typedef bp::class_< MouseCursorEventArgs_wrapper, bp::bases< CEGUI::EventArgs > > MouseCursorEventArgs_exposer_t;
        MouseCursorEventArgs_exposer_t MouseCursorEventArgs_exposer = MouseCursorEventArgs_exposer_t( "MouseCursorEventArgs", "*!\n\
        \n\
           EventArgs based class that is used for objects passed to input event handlers\n\
           concerning mouse cursor events.\n\
        *\n", bp::init< CEGUI::MouseCursor * >(( bp::arg("cursor") )) );
        bp::scope MouseCursorEventArgs_scope( MouseCursorEventArgs_exposer );
        bp::implicitly_convertible< CEGUI::MouseCursor *, CEGUI::MouseCursorEventArgs >();
        MouseCursorEventArgs_exposer.add_property( "image"
                    , bp::make_function( (::CEGUI::Image const * (*)( ::CEGUI::MouseCursorEventArgs const & ))(&MouseCursorEventArgs_wrapper::get_image), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::CEGUI::MouseCursorEventArgs &,::CEGUI::Image const * ))(&MouseCursorEventArgs_wrapper::set_image), bp::with_custodian_and_ward_postcall< 1, 2 >() ) );
        MouseCursorEventArgs_exposer.add_property( "mouseCursor"
                    , bp::make_function( (::CEGUI::MouseCursor * (*)( ::CEGUI::MouseCursorEventArgs const & ))(&MouseCursorEventArgs_wrapper::get_mouseCursor), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::CEGUI::MouseCursorEventArgs &,::CEGUI::MouseCursor * ))(&MouseCursorEventArgs_wrapper::set_mouseCursor), bp::with_custodian_and_ward_postcall< 1, 2 >() ) );
    }

}
