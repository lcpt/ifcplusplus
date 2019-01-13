/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcActuatorTypeEnum = ENUMERATION OF	(ELECTRICACTUATOR	,HANDOPERATEDACTUATOR	,HYDRAULICACTUATOR	,PNEUMATICACTUATOR	,THERMOSTATICACTUATOR	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcActuatorTypeEnum : virtual public BuildingObject
{
public:
	enum IfcActuatorTypeEnumEnum
	{
		ENUM_ELECTRICACTUATOR,
		ENUM_HANDOPERATEDACTUATOR,
		ENUM_HYDRAULICACTUATOR,
		ENUM_PNEUMATICACTUATOR,
		ENUM_THERMOSTATICACTUATOR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcActuatorTypeEnum() = default;
	IfcActuatorTypeEnum( IfcActuatorTypeEnumEnum e ) { m_enum = e; }
	~IfcActuatorTypeEnum();
	virtual const char* className() const { return "IfcActuatorTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcActuatorTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcActuatorTypeEnumEnum m_enum;
};

