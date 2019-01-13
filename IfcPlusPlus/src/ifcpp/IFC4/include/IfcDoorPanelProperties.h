/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPreDefinedPropertySet.h"
class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
class IFCQUERY_EXPORT IfcDoorPanelOperationEnum;
class IFCQUERY_EXPORT IfcNormalisedRatioMeasure;
class IFCQUERY_EXPORT IfcDoorPanelPositionEnum;
class IFCQUERY_EXPORT IfcShapeAspect;
//ENTITY
class IFCQUERY_EXPORT IfcDoorPanelProperties : public IfcPreDefinedPropertySet
{ 
public:
	IfcDoorPanelProperties() = default;
	IfcDoorPanelProperties( int id );
	~IfcDoorPanelProperties();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 9; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcDoorPanelProperties"; }
	virtual const std::wstring toString() const;


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>						m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>							m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>								m_Name;						//optional
	//  shared_ptr<IfcText>									m_Description;				//optional

	// IfcPropertyDefinition -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelDeclares> >				m_HasContext_inverse;
	//  std::vector<weak_ptr<IfcRelAssociates> >			m_HasAssociations_inverse;

	// IfcPropertySetDefinition -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcTypeObject> >				m_DefinesType_inverse;
	//  std::vector<weak_ptr<IfcRelDefinesByTemplate> >		m_IsDefinedBy_inverse;
	//  std::vector<weak_ptr<IfcRelDefinesByProperties> >	m_DefinesOccurrence_inverse;

	// IfcPreDefinedPropertySet -----------------------------------------------------------

	// IfcDoorPanelProperties -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPositiveLengthMeasure>				m_PanelDepth;				//optional
	shared_ptr<IfcDoorPanelOperationEnum>				m_PanelOperation;
	shared_ptr<IfcNormalisedRatioMeasure>				m_PanelWidth;				//optional
	shared_ptr<IfcDoorPanelPositionEnum>				m_PanelPosition;
	shared_ptr<IfcShapeAspect>							m_ShapeAspectStyle;			//optional
};

