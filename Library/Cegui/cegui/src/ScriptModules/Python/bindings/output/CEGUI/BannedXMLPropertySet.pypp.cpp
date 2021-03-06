// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "python_CEGUI.h"
#include "BannedXMLPropertySet.pypp.hpp"

namespace bp = boost::python;

void register_BannedXMLPropertySet_class(){

    { //::std::set<CEGUI::String, CEGUI::StringFastLessCompare, std::allocator<CEGUI::String> >
        typedef bp::class_< std::set<CEGUI::String, CEGUI::StringFastLessCompare, std::allocator<CEGUI::String> > > BannedXMLPropertySet_exposer_t;
        BannedXMLPropertySet_exposer_t BannedXMLPropertySet_exposer = BannedXMLPropertySet_exposer_t( "BannedXMLPropertySet" );
        bp::scope BannedXMLPropertySet_scope( BannedXMLPropertySet_exposer );
        BannedXMLPropertySet_exposer.def( bp::indexing::set_suite< std::set<CEGUI::String, CEGUI::StringFastLessCompare, std::allocator<CEGUI::String> > >() );
    }

}
