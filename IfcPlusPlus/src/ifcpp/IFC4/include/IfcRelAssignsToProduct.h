/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRelAssigns.h"
class IFCQUERY_EXPORT IfcProductSelect;
//ENTITY
class IFCQUERY_EXPORT IfcRelAssignsToProduct : public IfcRelAssigns
{ 
public:
	IfcRelAssignsToProduct() = default;
	IfcRelAssignsToProduct( int id );
	~IfcRelAssignsToProduct();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRelAssignsToProduct"; }
	virtual const std::wstring toString() const;


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>					m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>						m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>							m_Name;						//optional
	//  shared_ptr<IfcText>								m_Description;				//optional

	// IfcRelationship -----------------------------------------------------------

	// IfcRelAssigns -----------------------------------------------------------
	// attributes:
	//  std::vector<shared_ptr<IfcObjectDefinition> >	m_RelatedObjects;
	//  shared_ptr<IfcObjectTypeEnum>					m_RelatedObjectsType;		//optional

	// IfcRelAssignsToProduct -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcProductSelect>					m_RelatingProduct;
};

