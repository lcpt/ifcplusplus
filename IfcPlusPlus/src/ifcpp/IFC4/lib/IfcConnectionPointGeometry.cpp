/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectionPointGeometry.h"
#include "ifcpp/IFC4/include/IfcPointOrVertexPoint.h"

// ENTITY IfcConnectionPointGeometry 
IfcConnectionPointGeometry::IfcConnectionPointGeometry( int id ) { m_entity_id = id; }
IfcConnectionPointGeometry::~IfcConnectionPointGeometry() {}
shared_ptr<BuildingObject> IfcConnectionPointGeometry::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcConnectionPointGeometry> copy_self( new IfcConnectionPointGeometry() );
	if( m_PointOnRelatingElement ) { copy_self->m_PointOnRelatingElement = dynamic_pointer_cast<IfcPointOrVertexPoint>( m_PointOnRelatingElement->getDeepCopy(options) ); }
	if( m_PointOnRelatedElement ) { copy_self->m_PointOnRelatedElement = dynamic_pointer_cast<IfcPointOrVertexPoint>( m_PointOnRelatedElement->getDeepCopy(options) ); }
	return copy_self;
}
void IfcConnectionPointGeometry::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCONNECTIONPOINTGEOMETRY" << "(";
	if( m_PointOnRelatingElement ) { m_PointOnRelatingElement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_PointOnRelatedElement ) { m_PointOnRelatedElement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcConnectionPointGeometry::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcConnectionPointGeometry::toString() const { return L"IfcConnectionPointGeometry"; }
void IfcConnectionPointGeometry::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcConnectionPointGeometry, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_PointOnRelatingElement = IfcPointOrVertexPoint::createObjectFromSTEP( args[0], map );
	m_PointOnRelatedElement = IfcPointOrVertexPoint::createObjectFromSTEP( args[1], map );
}
void IfcConnectionPointGeometry::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcConnectionGeometry::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PointOnRelatingElement", m_PointOnRelatingElement ) );
	vec_attributes.emplace_back( std::make_pair( "PointOnRelatedElement", m_PointOnRelatedElement ) );
}
void IfcConnectionPointGeometry::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcConnectionGeometry::getAttributesInverse( vec_attributes_inverse );
}
void IfcConnectionPointGeometry::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcConnectionGeometry::setInverseCounterparts( ptr_self_entity );
}
void IfcConnectionPointGeometry::unlinkFromInverseCounterparts()
{
	IfcConnectionGeometry::unlinkFromInverseCounterparts();
}
