/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcCooledBeamTypeEnum.h"

// TYPE IfcCooledBeamTypeEnum = ENUMERATION OF	(ACTIVE	,PASSIVE	,USERDEFINED	,NOTDEFINED);
IfcCooledBeamTypeEnum::~IfcCooledBeamTypeEnum() {}
shared_ptr<BuildingObject> IfcCooledBeamTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCooledBeamTypeEnum> copy_self( new IfcCooledBeamTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCooledBeamTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOOLEDBEAMTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACTIVE:	stream << ".ACTIVE."; break;
		case ENUM_PASSIVE:	stream << ".PASSIVE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCooledBeamTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ACTIVE:	return L"ACTIVE";
		case ENUM_PASSIVE:	return L"PASSIVE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCooledBeamTypeEnum> IfcCooledBeamTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCooledBeamTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCooledBeamTypeEnum>(); }
	shared_ptr<IfcCooledBeamTypeEnum> type_object( new IfcCooledBeamTypeEnum() );
	if( boost::iequals( arg, L".ACTIVE." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_ACTIVE;
	}
	else if( boost::iequals( arg, L".PASSIVE." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_PASSIVE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCooledBeamTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
