/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcEventTypeEnum.h"

// TYPE IfcEventTypeEnum = ENUMERATION OF	(STARTEVENT	,ENDEVENT	,INTERMEDIATEEVENT	,USERDEFINED	,NOTDEFINED);
IfcEventTypeEnum::~IfcEventTypeEnum() {}
shared_ptr<BuildingObject> IfcEventTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcEventTypeEnum> copy_self( new IfcEventTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcEventTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCEVENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_STARTEVENT:	stream << ".STARTEVENT."; break;
		case ENUM_ENDEVENT:	stream << ".ENDEVENT."; break;
		case ENUM_INTERMEDIATEEVENT:	stream << ".INTERMEDIATEEVENT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcEventTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_STARTEVENT:	return L"STARTEVENT";
		case ENUM_ENDEVENT:	return L"ENDEVENT";
		case ENUM_INTERMEDIATEEVENT:	return L"INTERMEDIATEEVENT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcEventTypeEnum> IfcEventTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcEventTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcEventTypeEnum>(); }
	shared_ptr<IfcEventTypeEnum> type_object( new IfcEventTypeEnum() );
	if( boost::iequals( arg, L".STARTEVENT." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_STARTEVENT;
	}
	else if( boost::iequals( arg, L".ENDEVENT." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_ENDEVENT;
	}
	else if( boost::iequals( arg, L".INTERMEDIATEEVENT." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_INTERMEDIATEEVENT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcEventTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
