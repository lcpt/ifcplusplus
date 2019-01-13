/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcBooleanOperator = ENUMERATION OF	(UNION	,INTERSECTION	,DIFFERENCE);
class IFCQUERY_EXPORT IfcBooleanOperator : virtual public BuildingObject
{
public:
	enum IfcBooleanOperatorEnum
	{
		ENUM_UNION,
		ENUM_INTERSECTION,
		ENUM_DIFFERENCE
	};

	IfcBooleanOperator() = default;
	IfcBooleanOperator( IfcBooleanOperatorEnum e ) { m_enum = e; }
	~IfcBooleanOperator();
	virtual const char* className() const { return "IfcBooleanOperator"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcBooleanOperator> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcBooleanOperatorEnum m_enum;
};

