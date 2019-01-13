/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcElement.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProduct.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcSpatialElement.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelReferencedInSpatialStructure 
IfcRelReferencedInSpatialStructure::IfcRelReferencedInSpatialStructure( int id ) { m_entity_id = id; }
IfcRelReferencedInSpatialStructure::~IfcRelReferencedInSpatialStructure() {}
shared_ptr<BuildingObject> IfcRelReferencedInSpatialStructure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelReferencedInSpatialStructure> copy_self( new IfcRelReferencedInSpatialStructure() );
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
	for( size_t ii=0; ii<m_RelatedElements.size(); ++ii )
	{
		auto item_ii = m_RelatedElements[ii];
		if( item_ii )
		{
			copy_self->m_RelatedElements.emplace_back( dynamic_pointer_cast<IfcProduct>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatingStructure ) { copy_self->m_RelatingStructure = dynamic_pointer_cast<IfcSpatialElement>( m_RelatingStructure->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelReferencedInSpatialStructure::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELREFERENCEDINSPATIALSTRUCTURE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedElements );
	stream << ",";
	if( m_RelatingStructure ) { stream << "#" << m_RelatingStructure->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcRelReferencedInSpatialStructure::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelReferencedInSpatialStructure::toString() const { return L"IfcRelReferencedInSpatialStructure"; }
void IfcRelReferencedInSpatialStructure::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelReferencedInSpatialStructure, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReferenceList( args[4], m_RelatedElements, map );
	readEntityReference( args[5], m_RelatingStructure, map );
}
void IfcRelReferencedInSpatialStructure::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelConnects::getAttributes( vec_attributes );
	if( !m_RelatedElements.empty() )
	{
		shared_ptr<AttributeObjectVector> RelatedElements_vec_object( new AttributeObjectVector() );
		std::copy( m_RelatedElements.begin(), m_RelatedElements.end(), std::back_inserter( RelatedElements_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RelatedElements", RelatedElements_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "RelatingStructure", m_RelatingStructure ) );
}
void IfcRelReferencedInSpatialStructure::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelReferencedInSpatialStructure::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelReferencedInSpatialStructure> ptr_self = dynamic_pointer_cast<IfcRelReferencedInSpatialStructure>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelReferencedInSpatialStructure::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedElements.size(); ++i )
	{
		shared_ptr<IfcElement>  RelatedElements_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatedElements[i] );
		if( RelatedElements_IfcElement )
		{
			RelatedElements_IfcElement->m_ReferencedInStructures_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingStructure )
	{
		m_RelatingStructure->m_ReferencesElements_inverse.emplace_back( ptr_self );
	}
}
void IfcRelReferencedInSpatialStructure::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedElements.size(); ++i )
	{
		shared_ptr<IfcElement>  RelatedElements_IfcElement = dynamic_pointer_cast<IfcElement>( m_RelatedElements[i] );
		if( RelatedElements_IfcElement )
		{
			std::vector<weak_ptr<IfcRelReferencedInSpatialStructure> >& ReferencedInStructures_inverse = RelatedElements_IfcElement->m_ReferencedInStructures_inverse;
			for( auto it_ReferencedInStructures_inverse = ReferencedInStructures_inverse.begin(); it_ReferencedInStructures_inverse != ReferencedInStructures_inverse.end(); )
			{
				weak_ptr<IfcRelReferencedInSpatialStructure> self_candidate_weak = *it_ReferencedInStructures_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_ReferencedInStructures_inverse;
					continue;
				}
				shared_ptr<IfcRelReferencedInSpatialStructure> self_candidate( *it_ReferencedInStructures_inverse );
				if( self_candidate.get() == this )
				{
					it_ReferencedInStructures_inverse= ReferencedInStructures_inverse.erase( it_ReferencedInStructures_inverse );
				}
				else
				{
					++it_ReferencedInStructures_inverse;
				}
			}
		}
	}
	if( m_RelatingStructure )
	{
		std::vector<weak_ptr<IfcRelReferencedInSpatialStructure> >& ReferencesElements_inverse = m_RelatingStructure->m_ReferencesElements_inverse;
		for( auto it_ReferencesElements_inverse = ReferencesElements_inverse.begin(); it_ReferencesElements_inverse != ReferencesElements_inverse.end(); )
		{
			weak_ptr<IfcRelReferencedInSpatialStructure> self_candidate_weak = *it_ReferencesElements_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ReferencesElements_inverse;
				continue;
			}
			shared_ptr<IfcRelReferencedInSpatialStructure> self_candidate( *it_ReferencesElements_inverse );
			if( self_candidate.get() == this )
			{
				it_ReferencesElements_inverse= ReferencesElements_inverse.erase( it_ReferencesElements_inverse );
			}
			else
			{
				++it_ReferencesElements_inverse;
			}
		}
	}
}
