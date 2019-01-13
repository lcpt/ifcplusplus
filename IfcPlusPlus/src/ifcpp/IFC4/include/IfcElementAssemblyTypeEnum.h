/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcElementAssemblyTypeEnum = ENUMERATION OF	(ACCESSORY_ASSEMBLY	,ARCH	,BEAM_GRID	,BRACED_FRAME	,GIRDER	,REINFORCEMENT_UNIT	,RIGID_FRAME	,SLAB_FIELD	,TRUSS	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcElementAssemblyTypeEnum : virtual public BuildingObject
{
public:
	enum IfcElementAssemblyTypeEnumEnum
	{
		ENUM_ACCESSORY_ASSEMBLY,
		ENUM_ARCH,
		ENUM_BEAM_GRID,
		ENUM_BRACED_FRAME,
		ENUM_GIRDER,
		ENUM_REINFORCEMENT_UNIT,
		ENUM_RIGID_FRAME,
		ENUM_SLAB_FIELD,
		ENUM_TRUSS,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcElementAssemblyTypeEnum() = default;
	IfcElementAssemblyTypeEnum( IfcElementAssemblyTypeEnumEnum e ) { m_enum = e; }
	~IfcElementAssemblyTypeEnum();
	virtual const char* className() const { return "IfcElementAssemblyTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcElementAssemblyTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcElementAssemblyTypeEnumEnum m_enum;
};

