/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcLinearMomentMeasure.h"

// TYPE IfcLinearMomentMeasure = REAL;
IfcLinearMomentMeasure::IfcLinearMomentMeasure( double value ) { m_value = value; }
IfcLinearMomentMeasure::~IfcLinearMomentMeasure() {}
shared_ptr<BuildingObject> IfcLinearMomentMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLinearMomentMeasure> copy_self( new IfcLinearMomentMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLinearMomentMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLINEARMOMENTMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLinearMomentMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcLinearMomentMeasure> IfcLinearMomentMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLinearMomentMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLinearMomentMeasure>(); }
	shared_ptr<IfcLinearMomentMeasure> type_object( new IfcLinearMomentMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
