/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcMaterialDefinition.h"
#include "ifcpp/IFC4/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4/include/IfcProperty.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcMaterialProperties 
IfcMaterialProperties::IfcMaterialProperties( int id ) { m_entity_id = id; }
IfcMaterialProperties::~IfcMaterialProperties() {}
shared_ptr<BuildingObject> IfcMaterialProperties::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialProperties> copy_self( new IfcMaterialProperties() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcIdentifier>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Properties.size(); ++ii )
	{
		auto item_ii = m_Properties[ii];
		if( item_ii )
		{
			copy_self->m_Properties.emplace_back( dynamic_pointer_cast<IfcProperty>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Material ) { copy_self->m_Material = dynamic_pointer_cast<IfcMaterialDefinition>( m_Material->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALPROPERTIES" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Properties );
	stream << ",";
	if( m_Material ) { stream << "#" << m_Material->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialProperties::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialProperties::toString() const { return L"IfcMaterialProperties"; }
void IfcMaterialProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialProperties, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReferenceList( args[2], m_Properties, map );
	readEntityReference( args[3], m_Material, map );
}
void IfcMaterialProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcExtendedProperties::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Material", m_Material ) );
}
void IfcMaterialProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcExtendedProperties::getAttributesInverse( vec_attributes_inverse );
}
void IfcMaterialProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExtendedProperties::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcMaterialProperties> ptr_self = dynamic_pointer_cast<IfcMaterialProperties>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcMaterialProperties::setInverseCounterparts: type mismatch" ); }
	if( m_Material )
	{
		m_Material->m_HasProperties_inverse.emplace_back( ptr_self );
	}
}
void IfcMaterialProperties::unlinkFromInverseCounterparts()
{
	IfcExtendedProperties::unlinkFromInverseCounterparts();
	if( m_Material )
	{
		std::vector<weak_ptr<IfcMaterialProperties> >& HasProperties_inverse = m_Material->m_HasProperties_inverse;
		for( auto it_HasProperties_inverse = HasProperties_inverse.begin(); it_HasProperties_inverse != HasProperties_inverse.end(); )
		{
			weak_ptr<IfcMaterialProperties> self_candidate_weak = *it_HasProperties_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasProperties_inverse;
				continue;
			}
			shared_ptr<IfcMaterialProperties> self_candidate( *it_HasProperties_inverse );
			if( self_candidate.get() == this )
			{
				it_HasProperties_inverse= HasProperties_inverse.erase( it_HasProperties_inverse );
			}
			else
			{
				++it_HasProperties_inverse;
			}
		}
	}
}
