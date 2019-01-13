/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDoorStyleConstructionEnum.h"

// TYPE IfcDoorStyleConstructionEnum = ENUMERATION OF	(ALUMINIUM	,HIGH_GRADE_STEEL	,STEEL	,WOOD	,ALUMINIUM_WOOD	,ALUMINIUM_PLASTIC	,PLASTIC	,USERDEFINED	,NOTDEFINED);
IfcDoorStyleConstructionEnum::~IfcDoorStyleConstructionEnum() {}
shared_ptr<BuildingObject> IfcDoorStyleConstructionEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDoorStyleConstructionEnum> copy_self( new IfcDoorStyleConstructionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDoorStyleConstructionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDOORSTYLECONSTRUCTIONENUM("; }
	switch( m_enum )
	{
		case ENUM_ALUMINIUM:	stream << ".ALUMINIUM."; break;
		case ENUM_HIGH_GRADE_STEEL:	stream << ".HIGH_GRADE_STEEL."; break;
		case ENUM_STEEL:	stream << ".STEEL."; break;
		case ENUM_WOOD:	stream << ".WOOD."; break;
		case ENUM_ALUMINIUM_WOOD:	stream << ".ALUMINIUM_WOOD."; break;
		case ENUM_ALUMINIUM_PLASTIC:	stream << ".ALUMINIUM_PLASTIC."; break;
		case ENUM_PLASTIC:	stream << ".PLASTIC."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDoorStyleConstructionEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ALUMINIUM:	return L"ALUMINIUM";
		case ENUM_HIGH_GRADE_STEEL:	return L"HIGH_GRADE_STEEL";
		case ENUM_STEEL:	return L"STEEL";
		case ENUM_WOOD:	return L"WOOD";
		case ENUM_ALUMINIUM_WOOD:	return L"ALUMINIUM_WOOD";
		case ENUM_ALUMINIUM_PLASTIC:	return L"ALUMINIUM_PLASTIC";
		case ENUM_PLASTIC:	return L"PLASTIC";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDoorStyleConstructionEnum> IfcDoorStyleConstructionEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDoorStyleConstructionEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDoorStyleConstructionEnum>(); }
	shared_ptr<IfcDoorStyleConstructionEnum> type_object( new IfcDoorStyleConstructionEnum() );
	if( boost::iequals( arg, L".ALUMINIUM." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_ALUMINIUM;
	}
	else if( boost::iequals( arg, L".HIGH_GRADE_STEEL." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_HIGH_GRADE_STEEL;
	}
	else if( boost::iequals( arg, L".STEEL." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_STEEL;
	}
	else if( boost::iequals( arg, L".WOOD." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_WOOD;
	}
	else if( boost::iequals( arg, L".ALUMINIUM_WOOD." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_ALUMINIUM_WOOD;
	}
	else if( boost::iequals( arg, L".ALUMINIUM_PLASTIC." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_ALUMINIUM_PLASTIC;
	}
	else if( boost::iequals( arg, L".PLASTIC." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_PLASTIC;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDoorStyleConstructionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
