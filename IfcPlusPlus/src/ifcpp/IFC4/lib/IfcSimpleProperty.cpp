/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcComplexProperty.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4/include/IfcPropertySet.h"
#include "ifcpp/IFC4/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4/include/IfcSimpleProperty.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcSimpleProperty 
IfcSimpleProperty::IfcSimpleProperty( int id ) { m_entity_id = id; }
IfcSimpleProperty::~IfcSimpleProperty() {}
shared_ptr<BuildingObject> IfcSimpleProperty::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSimpleProperty> copy_self( new IfcSimpleProperty() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcIdentifier>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSimpleProperty::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSIMPLEPROPERTY" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSimpleProperty::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSimpleProperty::toString() const { return L"IfcSimpleProperty"; }
void IfcSimpleProperty::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSimpleProperty, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
}
void IfcSimpleProperty::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcProperty::getAttributes( vec_attributes );
}
void IfcSimpleProperty::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcProperty::getAttributesInverse( vec_attributes_inverse );
}
void IfcSimpleProperty::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProperty::setInverseCounterparts( ptr_self_entity );
}
void IfcSimpleProperty::unlinkFromInverseCounterparts()
{
	IfcProperty::unlinkFromInverseCounterparts();
}
