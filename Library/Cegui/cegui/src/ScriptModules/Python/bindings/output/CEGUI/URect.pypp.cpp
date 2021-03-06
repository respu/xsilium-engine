// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "URect.pypp.hpp"

namespace bp = boost::python;

void register_URect_class(){

    { //::CEGUI::Rect< CEGUI::UDim >
        typedef bp::class_< CEGUI::Rect< CEGUI::UDim > > URect_exposer_t;
        URect_exposer_t URect_exposer = URect_exposer_t( "URect", bp::init< >() );
        bp::scope URect_scope( URect_exposer );
        URect_exposer.def( bp::init< CEGUI::UDim const &, CEGUI::UDim const &, CEGUI::UDim const &, CEGUI::UDim const & >(( bp::arg("left"), bp::arg("top"), bp::arg("right"), bp::arg("bottom") )) );
        URect_exposer.def( bp::init< CEGUI::Vector2< CEGUI::UDim > const &, CEGUI::Vector2< CEGUI::UDim > const & >(( bp::arg("min"), bp::arg("max") )) );
        URect_exposer.def( bp::init< CEGUI::Vector2< CEGUI::UDim > const &, CEGUI::Size< CEGUI::UDim > const & >(( bp::arg("pos"), bp::arg("size") )) );
        URect_exposer.def( bp::init< CEGUI::Rect< CEGUI::UDim > const & >(( bp::arg("r") )) );
        { //::CEGUI::Rect< CEGUI::UDim >::bottom
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*bottom_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "bottom"
                , bottom_function_type( &::CEGUI::Rect< CEGUI::UDim >::bottom )
                , ( bp::arg("v") ) );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::bottom
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::UDim const & ( exported_class_t::*bottom_function_type )(  ) const;
            
            URect_exposer.def( 
                "bottom"
                , bottom_function_type( &::CEGUI::Rect< CEGUI::UDim >::bottom )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::getHeight
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::UDim ( exported_class_t::*getHeight_function_type )(  ) const;
            
            URect_exposer.def( 
                "getHeight"
                , getHeight_function_type( &::CEGUI::Rect< CEGUI::UDim >::getHeight )
                , "*!\n\
            \n\
               return height of Rect area\n\
            *\n" );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::getPosition
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Vector2< CEGUI::UDim > const & ( exported_class_t::*getPosition_function_type )(  ) const;
            
            URect_exposer.def( 
                "getPosition"
                , getPosition_function_type( &::CEGUI::Rect< CEGUI::UDim >::getPosition )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
               Return top-left position of Rect as a Vector2<T>\n\
            *\n" );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::getSize
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Size< CEGUI::UDim > ( exported_class_t::*getSize_function_type )(  ) const;
            
            URect_exposer.def( 
                "getSize"
                , getSize_function_type( &::CEGUI::Rect< CEGUI::UDim >::getSize )
                , "*!\n\
            \n\
               return the size of the Rect area\n\
            *\n" );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::getWidth
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::UDim ( exported_class_t::*getWidth_function_type )(  ) const;
            
            URect_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::CEGUI::Rect< CEGUI::UDim >::getWidth )
                , "*!\n\
            \n\
               return width of Rect area\n\
            *\n" );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::left
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*left_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "left"
                , left_function_type( &::CEGUI::Rect< CEGUI::UDim >::left )
                , ( bp::arg("v") ) );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::left
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::UDim const & ( exported_class_t::*left_function_type )(  ) const;
            
            URect_exposer.def( 
                "left"
                , left_function_type( &::CEGUI::Rect< CEGUI::UDim >::left )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::offset
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*offset_function_type )( ::CEGUI::Vector2< CEGUI::UDim > const & ) ;
            
            URect_exposer.def( 
                "offset"
                , offset_function_type( &::CEGUI::Rect< CEGUI::UDim >::offset )
                , ( bp::arg("v") )
                , "*!\n\
               \n\
                  Applies an offset the Rect object\n\
            \n\
               @param pt\n\
                  Vector2 object containing the offsets to be applied to the Rect.\n\
            \n\
               @return\n\
                  this Rect after the offset is performed\n\
               *\n" );
        
        }
        URect_exposer.def( bp::self != bp::self );
        URect_exposer.def( bp::self * bp::other< CEGUI::UDim >() );
        URect_exposer.def( bp::self *= bp::other< CEGUI::UDim >() );
        URect_exposer.def( bp::self + bp::self );
        { //::CEGUI::Rect< CEGUI::UDim >::operator=
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Rect< CEGUI::UDim > & ( exported_class_t::*assign_function_type )( ::CEGUI::Rect< CEGUI::UDim > const & ) ;
            
            URect_exposer.def( 
                "assign"
                , assign_function_type( &::CEGUI::Rect< CEGUI::UDim >::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >() );
        
        }
        URect_exposer.def( bp::self == bp::self );
        { //::CEGUI::Rect< CEGUI::UDim >::right
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*right_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "right"
                , right_function_type( &::CEGUI::Rect< CEGUI::UDim >::right )
                , ( bp::arg("v") ) );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::right
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::UDim const & ( exported_class_t::*right_function_type )(  ) const;
            
            URect_exposer.def( 
                "right"
                , right_function_type( &::CEGUI::Rect< CEGUI::UDim >::right )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::setHeight
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*setHeight_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "setHeight"
                , setHeight_function_type( &::CEGUI::Rect< CEGUI::UDim >::setHeight )
                , ( bp::arg("h") ) );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::setPosition
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*setPosition_function_type )( ::CEGUI::Vector2< CEGUI::UDim > const & ) ;
            
            URect_exposer.def( 
                "setPosition"
                , setPosition_function_type( &::CEGUI::Rect< CEGUI::UDim >::setPosition )
                , ( bp::arg("min") )
                , "*!\n\
            \n\
               set the position of the Rect (leaves size in tact)\n\
            *\n" );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::setSize
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*setSize_function_type )( ::CEGUI::Size< CEGUI::UDim > const & ) ;
            
            URect_exposer.def( 
                "setSize"
                , setSize_function_type( &::CEGUI::Rect< CEGUI::UDim >::setSize )
                , ( bp::arg("size") ) );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::setWidth
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*setWidth_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::CEGUI::Rect< CEGUI::UDim >::setWidth )
                , ( bp::arg("w") ) );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::top
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef void ( exported_class_t::*top_function_type )( ::CEGUI::UDim const & ) ;
            
            URect_exposer.def( 
                "top"
                , top_function_type( &::CEGUI::Rect< CEGUI::UDim >::top )
                , ( bp::arg("v") ) );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::top
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::UDim const & ( exported_class_t::*top_function_type )(  ) const;
            
            URect_exposer.def( 
                "top"
                , top_function_type( &::CEGUI::Rect< CEGUI::UDim >::top )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::Rect< CEGUI::UDim >::zero
        
            typedef CEGUI::Rect< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Rect< CEGUI::UDim > ( *zero_function_type )(  );
            
            URect_exposer.def( 
                "zero"
                , zero_function_type( &::CEGUI::Rect< CEGUI::UDim >::zero )
                , "!  finger saving alias for zero sized, zero positioned rect\n" );
        
        }
        URect_exposer.def_readwrite( "d_max", &CEGUI::Rect< CEGUI::UDim >::d_max, "*************************************************************************\n\
            Data Fields\n\
        *************************************************************************\n" );
        URect_exposer.def_readwrite( "d_min", &CEGUI::Rect< CEGUI::UDim >::d_min, "*************************************************************************\n\
            Data Fields\n\
        *************************************************************************\n" );
        URect_exposer.staticmethod( "zero" );
    }

}
