/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTubeBundleTypeEnum = ENUMERATION OF	(FINNED	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTubeBundleTypeEnum : virtual public BuildingObject
{
public:
	enum IfcTubeBundleTypeEnumEnum
	{
		ENUM_FINNED,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTubeBundleTypeEnum() = default;
	IfcTubeBundleTypeEnum( IfcTubeBundleTypeEnumEnum e ) { m_enum = e; }
	~IfcTubeBundleTypeEnum();
	virtual const char* className() const { return "IfcTubeBundleTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTubeBundleTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTubeBundleTypeEnumEnum m_enum;
};

