/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"

// TYPE IfcDateTime = STRING;
IfcDateTime::IfcDateTime( std::wstring value ) { m_value = value; }
IfcDateTime::~IfcDateTime() {}
shared_ptr<BuildingObject> IfcDateTime::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDateTime> copy_self( new IfcDateTime() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcDateTime::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDATETIME("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDateTime::toString() const
{
	return m_value;
}
shared_ptr<IfcDateTime> IfcDateTime::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDateTime>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDateTime>(); }
	shared_ptr<IfcDateTime> type_object( new IfcDateTime() );
	readString( arg, type_object->m_value );
	return type_object;
}
