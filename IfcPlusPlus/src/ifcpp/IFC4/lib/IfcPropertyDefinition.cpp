/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPropertyDefinition.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcPropertyDefinition 
IfcPropertyDefinition::IfcPropertyDefinition( int id ) { m_entity_id = id; }
IfcPropertyDefinition::~IfcPropertyDefinition() {}
shared_ptr<BuildingObject> IfcPropertyDefinition::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPropertyDefinition> copy_self( new IfcPropertyDefinition() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid<wchar_t>().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPropertyDefinition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROPERTYDEFINITION" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPropertyDefinition::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPropertyDefinition::toString() const { return L"IfcPropertyDefinition"; }
void IfcPropertyDefinition::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPropertyDefinition, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
}
void IfcPropertyDefinition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRoot::getAttributes( vec_attributes );
}
void IfcPropertyDefinition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRoot::getAttributesInverse( vec_attributes_inverse );
	if( !m_HasContext_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasContext_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasContext_inverse.size(); ++i )
		{
			if( !m_HasContext_inverse[i].expired() )
			{
				HasContext_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelDeclares>( m_HasContext_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasContext_inverse", HasContext_inverse_vec_obj ) );
	}
	if( !m_HasAssociations_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasAssociations_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasAssociations_inverse.size(); ++i )
		{
			if( !m_HasAssociations_inverse[i].expired() )
			{
				HasAssociations_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociates>( m_HasAssociations_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasAssociations_inverse", HasAssociations_inverse_vec_obj ) );
	}
}
void IfcPropertyDefinition::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRoot::setInverseCounterparts( ptr_self_entity );
}
void IfcPropertyDefinition::unlinkFromInverseCounterparts()
{
	IfcRoot::unlinkFromInverseCounterparts();
}
