/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcTemperatureRateOfChangeMeasure.h"

// TYPE IfcTemperatureRateOfChangeMeasure = REAL;
IfcTemperatureRateOfChangeMeasure::IfcTemperatureRateOfChangeMeasure( double value ) { m_value = value; }
IfcTemperatureRateOfChangeMeasure::~IfcTemperatureRateOfChangeMeasure() {}
shared_ptr<BuildingObject> IfcTemperatureRateOfChangeMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTemperatureRateOfChangeMeasure> copy_self( new IfcTemperatureRateOfChangeMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcTemperatureRateOfChangeMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEMPERATURERATEOFCHANGEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTemperatureRateOfChangeMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcTemperatureRateOfChangeMeasure> IfcTemperatureRateOfChangeMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTemperatureRateOfChangeMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTemperatureRateOfChangeMeasure>(); }
	shared_ptr<IfcTemperatureRateOfChangeMeasure> type_object( new IfcTemperatureRateOfChangeMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
