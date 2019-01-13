/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcSectionTypeEnum = ENUMERATION OF	(UNIFORM	,TAPERED);
class IFCQUERY_EXPORT IfcSectionTypeEnum : virtual public BuildingObject
{
public:
	enum IfcSectionTypeEnumEnum
	{
		ENUM_UNIFORM,
		ENUM_TAPERED
	};

	IfcSectionTypeEnum() = default;
	IfcSectionTypeEnum( IfcSectionTypeEnumEnum e ) { m_enum = e; }
	~IfcSectionTypeEnum();
	virtual const char* className() const { return "IfcSectionTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSectionTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcSectionTypeEnumEnum m_enum;
};

