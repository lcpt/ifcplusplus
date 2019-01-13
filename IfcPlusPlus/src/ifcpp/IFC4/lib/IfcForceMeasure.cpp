/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcForceMeasure.h"

// TYPE IfcForceMeasure = REAL;
IfcForceMeasure::IfcForceMeasure( double value ) { m_value = value; }
IfcForceMeasure::~IfcForceMeasure() {}
shared_ptr<BuildingObject> IfcForceMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcForceMeasure> copy_self( new IfcForceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcForceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFORCEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcForceMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcForceMeasure> IfcForceMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcForceMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcForceMeasure>(); }
	shared_ptr<IfcForceMeasure> type_object( new IfcForceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
