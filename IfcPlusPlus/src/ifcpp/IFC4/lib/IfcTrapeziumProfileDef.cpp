/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"
#include "ifcpp/IFC4/include/IfcTrapeziumProfileDef.h"

// ENTITY IfcTrapeziumProfileDef 
IfcTrapeziumProfileDef::IfcTrapeziumProfileDef( int id ) { m_entity_id = id; }
IfcTrapeziumProfileDef::~IfcTrapeziumProfileDef() {}
shared_ptr<BuildingObject> IfcTrapeziumProfileDef::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTrapeziumProfileDef> copy_self( new IfcTrapeziumProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement2D>( m_Position->getDeepCopy(options) ); }
	if( m_BottomXDim ) { copy_self->m_BottomXDim = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_BottomXDim->getDeepCopy(options) ); }
	if( m_TopXDim ) { copy_self->m_TopXDim = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_TopXDim->getDeepCopy(options) ); }
	if( m_YDim ) { copy_self->m_YDim = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_YDim->getDeepCopy(options) ); }
	if( m_TopXOffset ) { copy_self->m_TopXOffset = dynamic_pointer_cast<IfcLengthMeasure>( m_TopXOffset->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTrapeziumProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTRAPEZIUMPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_BottomXDim ) { m_BottomXDim->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TopXDim ) { m_TopXDim->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_YDim ) { m_YDim->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TopXOffset ) { m_TopXOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcTrapeziumProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTrapeziumProfileDef::toString() const { return L"IfcTrapeziumProfileDef"; }
void IfcTrapeziumProfileDef::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTrapeziumProfileDef, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Position, map );
	m_BottomXDim = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
	m_TopXDim = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_YDim = IfcPositiveLengthMeasure::createObjectFromSTEP( args[5], map );
	m_TopXOffset = IfcLengthMeasure::createObjectFromSTEP( args[6], map );
}
void IfcTrapeziumProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcParameterizedProfileDef::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BottomXDim", m_BottomXDim ) );
	vec_attributes.emplace_back( std::make_pair( "TopXDim", m_TopXDim ) );
	vec_attributes.emplace_back( std::make_pair( "YDim", m_YDim ) );
	vec_attributes.emplace_back( std::make_pair( "TopXOffset", m_TopXOffset ) );
}
void IfcTrapeziumProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcParameterizedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcTrapeziumProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcTrapeziumProfileDef::unlinkFromInverseCounterparts()
{
	IfcParameterizedProfileDef::unlinkFromInverseCounterparts();
}
