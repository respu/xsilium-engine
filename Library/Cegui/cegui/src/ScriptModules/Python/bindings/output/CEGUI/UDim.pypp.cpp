// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "UDim.pypp.hpp"

namespace bp = boost::python;

void register_UDim_class(){

    { //::CEGUI::UDim
        typedef bp::class_< CEGUI::UDim > UDim_exposer_t;
        UDim_exposer_t UDim_exposer = UDim_exposer_t( "UDim", bp::init< >() );
        bp::scope UDim_scope( UDim_exposer );
        UDim_exposer.def( bp::init< float, float >(( bp::arg("scale"), bp::arg("offset") )) );
        UDim_exposer.def( bp::init< CEGUI::UDim const & >(( bp::arg("v") )) );
        UDim_exposer.def( bp::self != bp::self );
        UDim_exposer.def( bp::self * bp::other< float >() );
        UDim_exposer.def( bp::self * bp::self );
        UDim_exposer.def( bp::self *= bp::self );
        UDim_exposer.def( bp::self + bp::self );
        UDim_exposer.def( bp::self += bp::self );
        UDim_exposer.def( bp::self - bp::self );
        UDim_exposer.def( bp::self -= bp::self );
        UDim_exposer.def( bp::self / bp::self );
        UDim_exposer.def( bp::self /= bp::self );
        UDim_exposer.def( bp::self == bp::self );
        { //::CEGUI::UDim::percent
        
            typedef ::CEGUI::UDim ( *percent_function_type )(  );
            
            UDim_exposer.def( 
                "percent"
                , percent_function_type( &::CEGUI::UDim::percent )
                , "*!\n\
             finger saving convenience method returning UDim(0.01, 0)\n\
            \n\
            \note\n\
                Allows quite neat 50 * UDim.percent() self documenting syntax\n\
            *\n" );
        
        }
        { //::CEGUI::UDim::px
        
            typedef ::CEGUI::UDim ( *px_function_type )(  );
            
            UDim_exposer.def( 
                "px"
                , px_function_type( &::CEGUI::UDim::px )
                , "*!\n\
             finger saving convenience method returning UDim(0, 1)\n\
            \n\
            \note\n\
                Allows quite neat 100 * UDim.px() self documenting syntax,\n\
                you can combine it with UDim.relative() as well (using operator+)\n\
            *\n" );
        
        }
        { //::CEGUI::UDim::relative
        
            typedef ::CEGUI::UDim ( *relative_function_type )(  );
            
            UDim_exposer.def( 
                "relative"
                , relative_function_type( &::CEGUI::UDim::relative )
                , "*!\n\
             finger saving convenience method returning UDim(1, 0)\n\
            \n\
            \note\n\
                Allows quite neat 0.5 * UDim.relative() self documenting syntax\n\
            *\n" );
        
        }
        { //::CEGUI::UDim::zero
        
            typedef ::CEGUI::UDim ( *zero_function_type )(  );
            
            UDim_exposer.def( 
                "zero"
                , zero_function_type( &::CEGUI::UDim::zero )
                , "*!\n\
             finger saving convenience method returning UDim(0, 0)\n\
            *\n" );
        
        }
        UDim_exposer.def_readwrite( "d_offset", &CEGUI::UDim::d_offset );
        UDim_exposer.def_readwrite( "d_scale", &CEGUI::UDim::d_scale );
        UDim_exposer.staticmethod( "percent" );
        UDim_exposer.staticmethod( "px" );
        UDim_exposer.staticmethod( "relative" );
        UDim_exposer.staticmethod( "zero" );
    }

}
