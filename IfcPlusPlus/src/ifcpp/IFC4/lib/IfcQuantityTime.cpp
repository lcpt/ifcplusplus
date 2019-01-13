/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNamedUnit.h"
#include "ifcpp/IFC4/include/IfcPhysicalComplexQuantity.h"
#include "ifcpp/IFC4/include/IfcQuantityTime.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTimeMeasure.h"

// ENTITY IfcQuantityTime 
IfcQuantityTime::IfcQuantityTime( int id ) { m_entity_id = id; }
IfcQuantityTime::~IfcQuantityTime() {}
shared_ptr<BuildingObject> IfcQuantityTime::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcQuantityTime> copy_self( new IfcQuantityTime() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_Unit ) { copy_self->m_Unit = dynamic_pointer_cast<IfcNamedUnit>( m_Unit->getDeepCopy(options) ); }
	if( m_TimeValue ) { copy_self->m_TimeValue = dynamic_pointer_cast<IfcTimeMeasure>( m_TimeValue->getDeepCopy(options) ); }
	if( m_Formula ) { copy_self->m_Formula = dynamic_pointer_cast<IfcLabel>( m_Formula->getDeepCopy(options) ); }
	return copy_self;
}
void IfcQuantityTime::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCQUANTITYTIME" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Unit ) { stream << "#" << m_Unit->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_TimeValue ) { m_TimeValue->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Formula ) { m_Formula->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcQuantityTime::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcQuantityTime::toString() const { return L"IfcQuantityTime"; }
void IfcQuantityTime::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcQuantityTime, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Unit, map );
	m_TimeValue = IfcTimeMeasure::createObjectFromSTEP( args[3], map );
	m_Formula = IfcLabel::createObjectFromSTEP( args[4], map );
}
void IfcQuantityTime::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPhysicalSimpleQuantity::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "TimeValue", m_TimeValue ) );
	vec_attributes.emplace_back( std::make_pair( "Formula", m_Formula ) );
}
void IfcQuantityTime::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPhysicalSimpleQuantity::getAttributesInverse( vec_attributes_inverse );
}
void IfcQuantityTime::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPhysicalSimpleQuantity::setInverseCounterparts( ptr_self_entity );
}
void IfcQuantityTime::unlinkFromInverseCounterparts()
{
	IfcPhysicalSimpleQuantity::unlinkFromInverseCounterparts();
}
