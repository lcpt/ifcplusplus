/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcPipeSegmentTypeEnum.h"

// TYPE IfcPipeSegmentTypeEnum = ENUMERATION OF	(CULVERT	,FLEXIBLESEGMENT	,RIGIDSEGMENT	,GUTTER	,SPOOL	,USERDEFINED	,NOTDEFINED);
IfcPipeSegmentTypeEnum::~IfcPipeSegmentTypeEnum() {}
shared_ptr<BuildingObject> IfcPipeSegmentTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPipeSegmentTypeEnum> copy_self( new IfcPipeSegmentTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPipeSegmentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPIPESEGMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CULVERT:	stream << ".CULVERT."; break;
		case ENUM_FLEXIBLESEGMENT:	stream << ".FLEXIBLESEGMENT."; break;
		case ENUM_RIGIDSEGMENT:	stream << ".RIGIDSEGMENT."; break;
		case ENUM_GUTTER:	stream << ".GUTTER."; break;
		case ENUM_SPOOL:	stream << ".SPOOL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPipeSegmentTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CULVERT:	return L"CULVERT";
		case ENUM_FLEXIBLESEGMENT:	return L"FLEXIBLESEGMENT";
		case ENUM_RIGIDSEGMENT:	return L"RIGIDSEGMENT";
		case ENUM_GUTTER:	return L"GUTTER";
		case ENUM_SPOOL:	return L"SPOOL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPipeSegmentTypeEnum> IfcPipeSegmentTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPipeSegmentTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPipeSegmentTypeEnum>(); }
	shared_ptr<IfcPipeSegmentTypeEnum> type_object( new IfcPipeSegmentTypeEnum() );
	if( boost::iequals( arg, L".CULVERT." ) )
	{
		type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_CULVERT;
	}
	else if( boost::iequals( arg, L".FLEXIBLESEGMENT." ) )
	{
		type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_FLEXIBLESEGMENT;
	}
	else if( boost::iequals( arg, L".RIGIDSEGMENT." ) )
	{
		type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_RIGIDSEGMENT;
	}
	else if( boost::iequals( arg, L".GUTTER." ) )
	{
		type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_GUTTER;
	}
	else if( boost::iequals( arg, L".SPOOL." ) )
	{
		type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_SPOOL;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
