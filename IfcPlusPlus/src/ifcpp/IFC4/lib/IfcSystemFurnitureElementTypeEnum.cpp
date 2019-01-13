/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSystemFurnitureElementTypeEnum.h"

// TYPE IfcSystemFurnitureElementTypeEnum = ENUMERATION OF	(PANEL	,WORKSURFACE	,USERDEFINED	,NOTDEFINED);
IfcSystemFurnitureElementTypeEnum::~IfcSystemFurnitureElementTypeEnum() {}
shared_ptr<BuildingObject> IfcSystemFurnitureElementTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSystemFurnitureElementTypeEnum> copy_self( new IfcSystemFurnitureElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSystemFurnitureElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSYSTEMFURNITUREELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_PANEL:	stream << ".PANEL."; break;
		case ENUM_WORKSURFACE:	stream << ".WORKSURFACE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSystemFurnitureElementTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_PANEL:	return L"PANEL";
		case ENUM_WORKSURFACE:	return L"WORKSURFACE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSystemFurnitureElementTypeEnum> IfcSystemFurnitureElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSystemFurnitureElementTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSystemFurnitureElementTypeEnum>(); }
	shared_ptr<IfcSystemFurnitureElementTypeEnum> type_object( new IfcSystemFurnitureElementTypeEnum() );
	if( boost::iequals( arg, L".PANEL." ) )
	{
		type_object->m_enum = IfcSystemFurnitureElementTypeEnum::ENUM_PANEL;
	}
	else if( boost::iequals( arg, L".WORKSURFACE." ) )
	{
		type_object->m_enum = IfcSystemFurnitureElementTypeEnum::ENUM_WORKSURFACE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSystemFurnitureElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSystemFurnitureElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
