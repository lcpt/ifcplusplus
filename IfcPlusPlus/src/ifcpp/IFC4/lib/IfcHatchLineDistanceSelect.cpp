/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcHatchLineDistanceSelect.h"

// TYPE IfcHatchLineDistanceSelect = SELECT	(IfcPositiveLengthMeasure	,IfcVector);
shared_ptr<IfcHatchLineDistanceSelect> IfcHatchLineDistanceSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcHatchLineDistanceSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcHatchLineDistanceSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcHatchLineDistanceSelect>();
	}
	shared_ptr<IfcHatchLineDistanceSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
