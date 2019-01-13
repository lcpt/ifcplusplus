/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcHumidifierTypeEnum.h"

// TYPE IfcHumidifierTypeEnum = ENUMERATION OF	(STEAMINJECTION	,ADIABATICAIRWASHER	,ADIABATICPAN	,ADIABATICWETTEDELEMENT	,ADIABATICATOMIZING	,ADIABATICULTRASONIC	,ADIABATICRIGIDMEDIA	,ADIABATICCOMPRESSEDAIRNOZZLE	,ASSISTEDELECTRIC	,ASSISTEDNATURALGAS	,ASSISTEDPROPANE	,ASSISTEDBUTANE	,ASSISTEDSTEAM	,USERDEFINED	,NOTDEFINED);
IfcHumidifierTypeEnum::~IfcHumidifierTypeEnum() {}
shared_ptr<BuildingObject> IfcHumidifierTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcHumidifierTypeEnum> copy_self( new IfcHumidifierTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcHumidifierTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCHUMIDIFIERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_STEAMINJECTION:	stream << ".STEAMINJECTION."; break;
		case ENUM_ADIABATICAIRWASHER:	stream << ".ADIABATICAIRWASHER."; break;
		case ENUM_ADIABATICPAN:	stream << ".ADIABATICPAN."; break;
		case ENUM_ADIABATICWETTEDELEMENT:	stream << ".ADIABATICWETTEDELEMENT."; break;
		case ENUM_ADIABATICATOMIZING:	stream << ".ADIABATICATOMIZING."; break;
		case ENUM_ADIABATICULTRASONIC:	stream << ".ADIABATICULTRASONIC."; break;
		case ENUM_ADIABATICRIGIDMEDIA:	stream << ".ADIABATICRIGIDMEDIA."; break;
		case ENUM_ADIABATICCOMPRESSEDAIRNOZZLE:	stream << ".ADIABATICCOMPRESSEDAIRNOZZLE."; break;
		case ENUM_ASSISTEDELECTRIC:	stream << ".ASSISTEDELECTRIC."; break;
		case ENUM_ASSISTEDNATURALGAS:	stream << ".ASSISTEDNATURALGAS."; break;
		case ENUM_ASSISTEDPROPANE:	stream << ".ASSISTEDPROPANE."; break;
		case ENUM_ASSISTEDBUTANE:	stream << ".ASSISTEDBUTANE."; break;
		case ENUM_ASSISTEDSTEAM:	stream << ".ASSISTEDSTEAM."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcHumidifierTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_STEAMINJECTION:	return L"STEAMINJECTION";
		case ENUM_ADIABATICAIRWASHER:	return L"ADIABATICAIRWASHER";
		case ENUM_ADIABATICPAN:	return L"ADIABATICPAN";
		case ENUM_ADIABATICWETTEDELEMENT:	return L"ADIABATICWETTEDELEMENT";
		case ENUM_ADIABATICATOMIZING:	return L"ADIABATICATOMIZING";
		case ENUM_ADIABATICULTRASONIC:	return L"ADIABATICULTRASONIC";
		case ENUM_ADIABATICRIGIDMEDIA:	return L"ADIABATICRIGIDMEDIA";
		case ENUM_ADIABATICCOMPRESSEDAIRNOZZLE:	return L"ADIABATICCOMPRESSEDAIRNOZZLE";
		case ENUM_ASSISTEDELECTRIC:	return L"ASSISTEDELECTRIC";
		case ENUM_ASSISTEDNATURALGAS:	return L"ASSISTEDNATURALGAS";
		case ENUM_ASSISTEDPROPANE:	return L"ASSISTEDPROPANE";
		case ENUM_ASSISTEDBUTANE:	return L"ASSISTEDBUTANE";
		case ENUM_ASSISTEDSTEAM:	return L"ASSISTEDSTEAM";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcHumidifierTypeEnum> IfcHumidifierTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcHumidifierTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcHumidifierTypeEnum>(); }
	shared_ptr<IfcHumidifierTypeEnum> type_object( new IfcHumidifierTypeEnum() );
	if( boost::iequals( arg, L".STEAMINJECTION." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_STEAMINJECTION;
	}
	else if( boost::iequals( arg, L".ADIABATICAIRWASHER." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ADIABATICAIRWASHER;
	}
	else if( boost::iequals( arg, L".ADIABATICPAN." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ADIABATICPAN;
	}
	else if( boost::iequals( arg, L".ADIABATICWETTEDELEMENT." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ADIABATICWETTEDELEMENT;
	}
	else if( boost::iequals( arg, L".ADIABATICATOMIZING." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ADIABATICATOMIZING;
	}
	else if( boost::iequals( arg, L".ADIABATICULTRASONIC." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ADIABATICULTRASONIC;
	}
	else if( boost::iequals( arg, L".ADIABATICRIGIDMEDIA." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ADIABATICRIGIDMEDIA;
	}
	else if( boost::iequals( arg, L".ADIABATICCOMPRESSEDAIRNOZZLE." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ADIABATICCOMPRESSEDAIRNOZZLE;
	}
	else if( boost::iequals( arg, L".ASSISTEDELECTRIC." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ASSISTEDELECTRIC;
	}
	else if( boost::iequals( arg, L".ASSISTEDNATURALGAS." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ASSISTEDNATURALGAS;
	}
	else if( boost::iequals( arg, L".ASSISTEDPROPANE." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ASSISTEDPROPANE;
	}
	else if( boost::iequals( arg, L".ASSISTEDBUTANE." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ASSISTEDBUTANE;
	}
	else if( boost::iequals( arg, L".ASSISTEDSTEAM." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_ASSISTEDSTEAM;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcHumidifierTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
