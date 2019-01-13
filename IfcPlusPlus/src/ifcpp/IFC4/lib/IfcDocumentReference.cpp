/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDocumentInformation.h"
#include "ifcpp/IFC4/include/IfcDocumentReference.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesDocument.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcURIReference.h"

// ENTITY IfcDocumentReference 
IfcDocumentReference::IfcDocumentReference( int id ) { m_entity_id = id; }
IfcDocumentReference::~IfcDocumentReference() {}
shared_ptr<BuildingObject> IfcDocumentReference::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDocumentReference> copy_self( new IfcDocumentReference() );
	if( m_Location ) { copy_self->m_Location = dynamic_pointer_cast<IfcURIReference>( m_Location->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ReferencedDocument ) { copy_self->m_ReferencedDocument = dynamic_pointer_cast<IfcDocumentInformation>( m_ReferencedDocument->getDeepCopy(options) ); }
	return copy_self;
}
void IfcDocumentReference::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCDOCUMENTREFERENCE" << "(";
	if( m_Location ) { m_Location->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ReferencedDocument ) { stream << "#" << m_ReferencedDocument->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcDocumentReference::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcDocumentReference::toString() const { return L"IfcDocumentReference"; }
void IfcDocumentReference::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDocumentReference, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Location = IfcURIReference::createObjectFromSTEP( args[0], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[1], map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_ReferencedDocument, map );
}
void IfcDocumentReference::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcExternalReference::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.emplace_back( std::make_pair( "ReferencedDocument", m_ReferencedDocument ) );
}
void IfcDocumentReference::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcExternalReference::getAttributesInverse( vec_attributes_inverse );
	if( !m_DocumentRefForObjects_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> DocumentRefForObjects_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_DocumentRefForObjects_inverse.size(); ++i )
		{
			if( !m_DocumentRefForObjects_inverse[i].expired() )
			{
				DocumentRefForObjects_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssociatesDocument>( m_DocumentRefForObjects_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "DocumentRefForObjects_inverse", DocumentRefForObjects_inverse_vec_obj ) );
	}
}
void IfcDocumentReference::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExternalReference::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcDocumentReference> ptr_self = dynamic_pointer_cast<IfcDocumentReference>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcDocumentReference::setInverseCounterparts: type mismatch" ); }
	if( m_ReferencedDocument )
	{
		m_ReferencedDocument->m_HasDocumentReferences_inverse.emplace_back( ptr_self );
	}
}
void IfcDocumentReference::unlinkFromInverseCounterparts()
{
	IfcExternalReference::unlinkFromInverseCounterparts();
	if( m_ReferencedDocument )
	{
		std::vector<weak_ptr<IfcDocumentReference> >& HasDocumentReferences_inverse = m_ReferencedDocument->m_HasDocumentReferences_inverse;
		for( auto it_HasDocumentReferences_inverse = HasDocumentReferences_inverse.begin(); it_HasDocumentReferences_inverse != HasDocumentReferences_inverse.end(); )
		{
			weak_ptr<IfcDocumentReference> self_candidate_weak = *it_HasDocumentReferences_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasDocumentReferences_inverse;
				continue;
			}
			shared_ptr<IfcDocumentReference> self_candidate( *it_HasDocumentReferences_inverse );
			if( self_candidate.get() == this )
			{
				it_HasDocumentReferences_inverse= HasDocumentReferences_inverse.erase( it_HasDocumentReferences_inverse );
			}
			else
			{
				++it_HasDocumentReferences_inverse;
			}
		}
	}
}
