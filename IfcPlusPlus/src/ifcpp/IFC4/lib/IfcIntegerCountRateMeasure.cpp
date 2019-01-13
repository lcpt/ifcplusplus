/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcIntegerCountRateMeasure.h"

// TYPE IfcIntegerCountRateMeasure = INTEGER;
IfcIntegerCountRateMeasure::IfcIntegerCountRateMeasure( int value ) { m_value = value; }
IfcIntegerCountRateMeasure::~IfcIntegerCountRateMeasure() {}
shared_ptr<BuildingObject> IfcIntegerCountRateMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcIntegerCountRateMeasure> copy_self( new IfcIntegerCountRateMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcIntegerCountRateMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCINTEGERCOUNTRATEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcIntegerCountRateMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcIntegerCountRateMeasure> IfcIntegerCountRateMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcIntegerCountRateMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcIntegerCountRateMeasure>(); }
	shared_ptr<IfcIntegerCountRateMeasure> type_object( new IfcIntegerCountRateMeasure() );
	readInteger( arg, type_object->m_value );
	return type_object;
}
