/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCardinalPointReference.h"

// TYPE IfcCardinalPointReference = INTEGER;
IfcCardinalPointReference::IfcCardinalPointReference( int value ) { m_value = value; }
IfcCardinalPointReference::~IfcCardinalPointReference() {}
shared_ptr<BuildingObject> IfcCardinalPointReference::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCardinalPointReference> copy_self( new IfcCardinalPointReference() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcCardinalPointReference::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCARDINALPOINTREFERENCE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCardinalPointReference::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcCardinalPointReference> IfcCardinalPointReference::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCardinalPointReference>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCardinalPointReference>(); }
	shared_ptr<IfcCardinalPointReference> type_object( new IfcCardinalPointReference() );
	readInteger( arg, type_object->m_value );
	return type_object;
}
