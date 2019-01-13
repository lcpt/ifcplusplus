/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAppliedValue.h"
#include "ifcpp/IFC4/include/IfcAppliedValueSelect.h"
#include "ifcpp/IFC4/include/IfcArithmeticOperatorEnum.h"
#include "ifcpp/IFC4/include/IfcDate.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMeasureWithUnit.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcAppliedValue 
IfcAppliedValue::IfcAppliedValue( int id ) { m_entity_id = id; }
IfcAppliedValue::~IfcAppliedValue() {}
shared_ptr<BuildingObject> IfcAppliedValue::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAppliedValue> copy_self( new IfcAppliedValue() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_AppliedValue ) { copy_self->m_AppliedValue = dynamic_pointer_cast<IfcAppliedValueSelect>( m_AppliedValue->getDeepCopy(options) ); }
	if( m_UnitBasis ) { copy_self->m_UnitBasis = dynamic_pointer_cast<IfcMeasureWithUnit>( m_UnitBasis->getDeepCopy(options) ); }
	if( m_ApplicableDate ) { copy_self->m_ApplicableDate = dynamic_pointer_cast<IfcDate>( m_ApplicableDate->getDeepCopy(options) ); }
	if( m_FixedUntilDate ) { copy_self->m_FixedUntilDate = dynamic_pointer_cast<IfcDate>( m_FixedUntilDate->getDeepCopy(options) ); }
	if( m_Category ) { copy_self->m_Category = dynamic_pointer_cast<IfcLabel>( m_Category->getDeepCopy(options) ); }
	if( m_Condition ) { copy_self->m_Condition = dynamic_pointer_cast<IfcLabel>( m_Condition->getDeepCopy(options) ); }
	if( m_ArithmeticOperator ) { copy_self->m_ArithmeticOperator = dynamic_pointer_cast<IfcArithmeticOperatorEnum>( m_ArithmeticOperator->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Components.size(); ++ii )
	{
		auto item_ii = m_Components[ii];
		if( item_ii )
		{
			copy_self->m_Components.emplace_back( dynamic_pointer_cast<IfcAppliedValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcAppliedValue::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCAPPLIEDVALUE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_AppliedValue ) { m_AppliedValue->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_UnitBasis ) { stream << "#" << m_UnitBasis->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ApplicableDate ) { m_ApplicableDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FixedUntilDate ) { m_FixedUntilDate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Category ) { m_Category->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Condition ) { m_Condition->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ArithmeticOperator ) { m_ArithmeticOperator->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Components );
	stream << ");";
}
void IfcAppliedValue::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAppliedValue::toString() const { return L"IfcAppliedValue"; }
void IfcAppliedValue::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAppliedValue, expecting 10, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_AppliedValue = IfcAppliedValueSelect::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_UnitBasis, map );
	m_ApplicableDate = IfcDate::createObjectFromSTEP( args[4], map );
	m_FixedUntilDate = IfcDate::createObjectFromSTEP( args[5], map );
	m_Category = IfcLabel::createObjectFromSTEP( args[6], map );
	m_Condition = IfcLabel::createObjectFromSTEP( args[7], map );
	m_ArithmeticOperator = IfcArithmeticOperatorEnum::createObjectFromSTEP( args[8], map );
	readEntityReferenceList( args[9], m_Components, map );
}
void IfcAppliedValue::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.emplace_back( std::make_pair( "AppliedValue", m_AppliedValue ) );
	vec_attributes.emplace_back( std::make_pair( "UnitBasis", m_UnitBasis ) );
	vec_attributes.emplace_back( std::make_pair( "ApplicableDate", m_ApplicableDate ) );
	vec_attributes.emplace_back( std::make_pair( "FixedUntilDate", m_FixedUntilDate ) );
	vec_attributes.emplace_back( std::make_pair( "Category", m_Category ) );
	vec_attributes.emplace_back( std::make_pair( "Condition", m_Condition ) );
	vec_attributes.emplace_back( std::make_pair( "ArithmeticOperator", m_ArithmeticOperator ) );
	if( !m_Components.empty() )
	{
		shared_ptr<AttributeObjectVector> Components_vec_object( new AttributeObjectVector() );
		std::copy( m_Components.begin(), m_Components.end(), std::back_inserter( Components_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Components", Components_vec_object ) );
	}
}
void IfcAppliedValue::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	if( !m_HasExternalReference_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasExternalReference_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasExternalReference_inverse.size(); ++i )
		{
			if( !m_HasExternalReference_inverse[i].expired() )
			{
				HasExternalReference_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReference_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasExternalReference_inverse", HasExternalReference_inverse_vec_obj ) );
	}
}
void IfcAppliedValue::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcAppliedValue::unlinkFromInverseCounterparts()
{
}
