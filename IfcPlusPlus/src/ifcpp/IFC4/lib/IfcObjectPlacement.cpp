/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLocalPlacement.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcProduct.h"

// ENTITY IfcObjectPlacement 
IfcObjectPlacement::IfcObjectPlacement( int id ) { m_entity_id = id; }
IfcObjectPlacement::~IfcObjectPlacement() {}
shared_ptr<BuildingObject> IfcObjectPlacement::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcObjectPlacement> copy_self( new IfcObjectPlacement() );
	return copy_self;
}
void IfcObjectPlacement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCOBJECTPLACEMENT" << "(";
	stream << ");";
}
void IfcObjectPlacement::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcObjectPlacement::toString() const { return L"IfcObjectPlacement"; }
void IfcObjectPlacement::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcObjectPlacement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IfcObjectPlacement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	if( !m_PlacesObject_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> PlacesObject_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_PlacesObject_inverse.size(); ++i )
		{
			if( !m_PlacesObject_inverse[i].expired() )
			{
				PlacesObject_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcProduct>( m_PlacesObject_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "PlacesObject_inverse", PlacesObject_inverse_vec_obj ) );
	}
	if( !m_ReferencedByPlacements_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ReferencedByPlacements_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ReferencedByPlacements_inverse.size(); ++i )
		{
			if( !m_ReferencedByPlacements_inverse[i].expired() )
			{
				ReferencedByPlacements_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcLocalPlacement>( m_ReferencedByPlacements_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ReferencedByPlacements_inverse", ReferencedByPlacements_inverse_vec_obj ) );
	}
}
void IfcObjectPlacement::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcObjectPlacement::unlinkFromInverseCounterparts()
{
}
