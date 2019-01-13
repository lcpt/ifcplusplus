/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAsymmetricIShapeProfileDef.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// ENTITY IfcAsymmetricIShapeProfileDef 
IfcAsymmetricIShapeProfileDef::IfcAsymmetricIShapeProfileDef( int id ) { m_entity_id = id; }
IfcAsymmetricIShapeProfileDef::~IfcAsymmetricIShapeProfileDef() {}
shared_ptr<BuildingObject> IfcAsymmetricIShapeProfileDef::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAsymmetricIShapeProfileDef> copy_self( new IfcAsymmetricIShapeProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement2D>( m_Position->getDeepCopy(options) ); }
	if( m_BottomFlangeWidth ) { copy_self->m_BottomFlangeWidth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_BottomFlangeWidth->getDeepCopy(options) ); }
	if( m_OverallDepth ) { copy_self->m_OverallDepth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_OverallDepth->getDeepCopy(options) ); }
	if( m_WebThickness ) { copy_self->m_WebThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_WebThickness->getDeepCopy(options) ); }
	if( m_BottomFlangeThickness ) { copy_self->m_BottomFlangeThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_BottomFlangeThickness->getDeepCopy(options) ); }
	if( m_BottomFlangeFilletRadius ) { copy_self->m_BottomFlangeFilletRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_BottomFlangeFilletRadius->getDeepCopy(options) ); }
	if( m_TopFlangeWidth ) { copy_self->m_TopFlangeWidth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_TopFlangeWidth->getDeepCopy(options) ); }
	if( m_TopFlangeThickness ) { copy_self->m_TopFlangeThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_TopFlangeThickness->getDeepCopy(options) ); }
	if( m_TopFlangeFilletRadius ) { copy_self->m_TopFlangeFilletRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_TopFlangeFilletRadius->getDeepCopy(options) ); }
	if( m_BottomFlangeEdgeRadius ) { copy_self->m_BottomFlangeEdgeRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_BottomFlangeEdgeRadius->getDeepCopy(options) ); }
	if( m_BottomFlangeSlope ) { copy_self->m_BottomFlangeSlope = dynamic_pointer_cast<IfcPlaneAngleMeasure>( m_BottomFlangeSlope->getDeepCopy(options) ); }
	if( m_TopFlangeEdgeRadius ) { copy_self->m_TopFlangeEdgeRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_TopFlangeEdgeRadius->getDeepCopy(options) ); }
	if( m_TopFlangeSlope ) { copy_self->m_TopFlangeSlope = dynamic_pointer_cast<IfcPlaneAngleMeasure>( m_TopFlangeSlope->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAsymmetricIShapeProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCASYMMETRICISHAPEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_BottomFlangeWidth ) { m_BottomFlangeWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OverallDepth ) { m_OverallDepth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_WebThickness ) { m_WebThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_BottomFlangeThickness ) { m_BottomFlangeThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_BottomFlangeFilletRadius ) { m_BottomFlangeFilletRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TopFlangeWidth ) { m_TopFlangeWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TopFlangeThickness ) { m_TopFlangeThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TopFlangeFilletRadius ) { m_TopFlangeFilletRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_BottomFlangeEdgeRadius ) { m_BottomFlangeEdgeRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_BottomFlangeSlope ) { m_BottomFlangeSlope->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TopFlangeEdgeRadius ) { m_TopFlangeEdgeRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TopFlangeSlope ) { m_TopFlangeSlope->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcAsymmetricIShapeProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAsymmetricIShapeProfileDef::toString() const { return L"IfcAsymmetricIShapeProfileDef"; }
void IfcAsymmetricIShapeProfileDef::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 15 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAsymmetricIShapeProfileDef, expecting 15, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Position, map );
	m_BottomFlangeWidth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
	m_OverallDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_WebThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[5], map );
	m_BottomFlangeThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[6], map );
	m_BottomFlangeFilletRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[7], map );
	m_TopFlangeWidth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[8], map );
	m_TopFlangeThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[9], map );
	m_TopFlangeFilletRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[10], map );
	m_BottomFlangeEdgeRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[11], map );
	m_BottomFlangeSlope = IfcPlaneAngleMeasure::createObjectFromSTEP( args[12], map );
	m_TopFlangeEdgeRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[13], map );
	m_TopFlangeSlope = IfcPlaneAngleMeasure::createObjectFromSTEP( args[14], map );
}
void IfcAsymmetricIShapeProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcParameterizedProfileDef::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BottomFlangeWidth", m_BottomFlangeWidth ) );
	vec_attributes.emplace_back( std::make_pair( "OverallDepth", m_OverallDepth ) );
	vec_attributes.emplace_back( std::make_pair( "WebThickness", m_WebThickness ) );
	vec_attributes.emplace_back( std::make_pair( "BottomFlangeThickness", m_BottomFlangeThickness ) );
	vec_attributes.emplace_back( std::make_pair( "BottomFlangeFilletRadius", m_BottomFlangeFilletRadius ) );
	vec_attributes.emplace_back( std::make_pair( "TopFlangeWidth", m_TopFlangeWidth ) );
	vec_attributes.emplace_back( std::make_pair( "TopFlangeThickness", m_TopFlangeThickness ) );
	vec_attributes.emplace_back( std::make_pair( "TopFlangeFilletRadius", m_TopFlangeFilletRadius ) );
	vec_attributes.emplace_back( std::make_pair( "BottomFlangeEdgeRadius", m_BottomFlangeEdgeRadius ) );
	vec_attributes.emplace_back( std::make_pair( "BottomFlangeSlope", m_BottomFlangeSlope ) );
	vec_attributes.emplace_back( std::make_pair( "TopFlangeEdgeRadius", m_TopFlangeEdgeRadius ) );
	vec_attributes.emplace_back( std::make_pair( "TopFlangeSlope", m_TopFlangeSlope ) );
}
void IfcAsymmetricIShapeProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcParameterizedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcAsymmetricIShapeProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcAsymmetricIShapeProfileDef::unlinkFromInverseCounterparts()
{
	IfcParameterizedProfileDef::unlinkFromInverseCounterparts();
}
