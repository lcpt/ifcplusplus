/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcThermalConductivityMeasure.h"

// TYPE IfcThermalConductivityMeasure = REAL;
IfcThermalConductivityMeasure::IfcThermalConductivityMeasure( double value ) { m_value = value; }
IfcThermalConductivityMeasure::~IfcThermalConductivityMeasure() {}
shared_ptr<BuildingObject> IfcThermalConductivityMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcThermalConductivityMeasure> copy_self( new IfcThermalConductivityMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcThermalConductivityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTHERMALCONDUCTIVITYMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcThermalConductivityMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcThermalConductivityMeasure> IfcThermalConductivityMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcThermalConductivityMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcThermalConductivityMeasure>(); }
	shared_ptr<IfcThermalConductivityMeasure> type_object( new IfcThermalConductivityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
