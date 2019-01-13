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
#include "ifcpp/IFC4/include/IfcMeasureWithUnit.h"
#include "ifcpp/IFC4/include/IfcObjectDefinition.h"
#include "ifcpp/IFC4/include/IfcObjectTypeEnum.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProcess.h"
#include "ifcpp/IFC4/include/IfcProcessSelect.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProcess.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTypeProcess.h"

// ENTITY IfcRelAssignsToProcess 
IfcRelAssignsToProcess::IfcRelAssignsToProcess( int id ) { m_entity_id = id; }
IfcRelAssignsToProcess::~IfcRelAssignsToProcess() {}
shared_ptr<BuildingObject> IfcRelAssignsToProcess::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelAssignsToProcess> copy_self( new IfcRelAssignsToProcess() );
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
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.emplace_back( dynamic_pointer_cast<IfcObjectDefinition>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatedObjectsType ) { copy_self->m_RelatedObjectsType = dynamic_pointer_cast<IfcObjectTypeEnum>( m_RelatedObjectsType->getDeepCopy(options) ); }
	if( m_RelatingProcess ) { copy_self->m_RelatingProcess = dynamic_pointer_cast<IfcProcessSelect>( m_RelatingProcess->getDeepCopy(options) ); }
	if( m_QuantityInProcess ) { copy_self->m_QuantityInProcess = dynamic_pointer_cast<IfcMeasureWithUnit>( m_QuantityInProcess->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelAssignsToProcess::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELASSIGNSTOPROCESS" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedObjects );
	stream << ",";
	if( m_RelatedObjectsType ) { m_RelatedObjectsType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingProcess ) { m_RelatingProcess->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_QuantityInProcess ) { stream << "#" << m_QuantityInProcess->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcRelAssignsToProcess::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelAssignsToProcess::toString() const { return L"IfcRelAssignsToProcess"; }
void IfcRelAssignsToProcess::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelAssignsToProcess, expecting 8, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReferenceList( args[4], m_RelatedObjects, map );
	m_RelatedObjectsType = IfcObjectTypeEnum::createObjectFromSTEP( args[5], map );
	m_RelatingProcess = IfcProcessSelect::createObjectFromSTEP( args[6], map );
	readEntityReference( args[7], m_QuantityInProcess, map );
}
void IfcRelAssignsToProcess::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelAssigns::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingProcess", m_RelatingProcess ) );
	vec_attributes.emplace_back( std::make_pair( "QuantityInProcess", m_QuantityInProcess ) );
}
void IfcRelAssignsToProcess::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelAssigns::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelAssignsToProcess::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelAssigns::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssignsToProcess> ptr_self = dynamic_pointer_cast<IfcRelAssignsToProcess>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelAssignsToProcess::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcProcess>  RelatingProcess_IfcProcess = dynamic_pointer_cast<IfcProcess>( m_RelatingProcess );
	if( RelatingProcess_IfcProcess )
	{
		RelatingProcess_IfcProcess->m_OperatesOn_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcTypeProcess>  RelatingProcess_IfcTypeProcess = dynamic_pointer_cast<IfcTypeProcess>( m_RelatingProcess );
	if( RelatingProcess_IfcTypeProcess )
	{
		RelatingProcess_IfcTypeProcess->m_OperatesOn_inverse.emplace_back( ptr_self );
	}
}
void IfcRelAssignsToProcess::unlinkFromInverseCounterparts()
{
	IfcRelAssigns::unlinkFromInverseCounterparts();
	shared_ptr<IfcProcess>  RelatingProcess_IfcProcess = dynamic_pointer_cast<IfcProcess>( m_RelatingProcess );
	if( RelatingProcess_IfcProcess )
	{
		std::vector<weak_ptr<IfcRelAssignsToProcess> >& OperatesOn_inverse = RelatingProcess_IfcProcess->m_OperatesOn_inverse;
		for( auto it_OperatesOn_inverse = OperatesOn_inverse.begin(); it_OperatesOn_inverse != OperatesOn_inverse.end(); )
		{
			weak_ptr<IfcRelAssignsToProcess> self_candidate_weak = *it_OperatesOn_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_OperatesOn_inverse;
				continue;
			}
			shared_ptr<IfcRelAssignsToProcess> self_candidate( *it_OperatesOn_inverse );
			if( self_candidate.get() == this )
			{
				it_OperatesOn_inverse= OperatesOn_inverse.erase( it_OperatesOn_inverse );
			}
			else
			{
				++it_OperatesOn_inverse;
			}
		}
	}
	shared_ptr<IfcTypeProcess>  RelatingProcess_IfcTypeProcess = dynamic_pointer_cast<IfcTypeProcess>( m_RelatingProcess );
	if( RelatingProcess_IfcTypeProcess )
	{
		std::vector<weak_ptr<IfcRelAssignsToProcess> >& OperatesOn_inverse = RelatingProcess_IfcTypeProcess->m_OperatesOn_inverse;
		for( auto it_OperatesOn_inverse = OperatesOn_inverse.begin(); it_OperatesOn_inverse != OperatesOn_inverse.end(); )
		{
			weak_ptr<IfcRelAssignsToProcess> self_candidate_weak = *it_OperatesOn_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_OperatesOn_inverse;
				continue;
			}
			shared_ptr<IfcRelAssignsToProcess> self_candidate( *it_OperatesOn_inverse );
			if( self_candidate.get() == this )
			{
				it_OperatesOn_inverse= OperatesOn_inverse.erase( it_OperatesOn_inverse );
			}
			else
			{
				++it_OperatesOn_inverse;
			}
		}
	}
}
