/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcFillAreaStyleTiles.h"
#include "ifcpp/IFC4/include/IfcPositiveRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcVector.h"

// ENTITY IfcFillAreaStyleTiles 
IfcFillAreaStyleTiles::IfcFillAreaStyleTiles( int id ) { m_entity_id = id; }
IfcFillAreaStyleTiles::~IfcFillAreaStyleTiles() {}
shared_ptr<BuildingObject> IfcFillAreaStyleTiles::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFillAreaStyleTiles> copy_self( new IfcFillAreaStyleTiles() );
	for( size_t ii=0; ii<m_TilingPattern.size(); ++ii )
	{
		auto item_ii = m_TilingPattern[ii];
		if( item_ii )
		{
			copy_self->m_TilingPattern.emplace_back( dynamic_pointer_cast<IfcVector>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_Tiles.size(); ++ii )
	{
		auto item_ii = m_Tiles[ii];
		if( item_ii )
		{
			copy_self->m_Tiles.emplace_back( dynamic_pointer_cast<IfcStyledItem>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_TilingScale ) { copy_self->m_TilingScale = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_TilingScale->getDeepCopy(options) ); }
	return copy_self;
}
void IfcFillAreaStyleTiles::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCFILLAREASTYLETILES" << "(";
	writeEntityList( stream, m_TilingPattern );
	stream << ",";
	writeEntityList( stream, m_Tiles );
	stream << ",";
	if( m_TilingScale ) { m_TilingScale->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcFillAreaStyleTiles::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcFillAreaStyleTiles::toString() const { return L"IfcFillAreaStyleTiles"; }
void IfcFillAreaStyleTiles::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcFillAreaStyleTiles, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_TilingPattern, map );
	readEntityReferenceList( args[1], m_Tiles, map );
	m_TilingScale = IfcPositiveRatioMeasure::createObjectFromSTEP( args[2], map );
}
void IfcFillAreaStyleTiles::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	if( !m_TilingPattern.empty() )
	{
		shared_ptr<AttributeObjectVector> TilingPattern_vec_object( new AttributeObjectVector() );
		std::copy( m_TilingPattern.begin(), m_TilingPattern.end(), std::back_inserter( TilingPattern_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "TilingPattern", TilingPattern_vec_object ) );
	}
	if( !m_Tiles.empty() )
	{
		shared_ptr<AttributeObjectVector> Tiles_vec_object( new AttributeObjectVector() );
		std::copy( m_Tiles.begin(), m_Tiles.end(), std::back_inserter( Tiles_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Tiles", Tiles_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "TilingScale", m_TilingScale ) );
}
void IfcFillAreaStyleTiles::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcFillAreaStyleTiles::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcFillAreaStyleTiles::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
