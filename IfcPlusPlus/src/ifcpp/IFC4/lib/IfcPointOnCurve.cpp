/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPointOnCurve.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcPointOnCurve 
IfcPointOnCurve::IfcPointOnCurve( int id ) { m_entity_id = id; }
IfcPointOnCurve::~IfcPointOnCurve() {}
shared_ptr<BuildingObject> IfcPointOnCurve::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPointOnCurve> copy_self( new IfcPointOnCurve() );
	if( m_BasisCurve ) { copy_self->m_BasisCurve = dynamic_pointer_cast<IfcCurve>( m_BasisCurve->getDeepCopy(options) ); }
	if( m_PointParameter ) { copy_self->m_PointParameter = dynamic_pointer_cast<IfcParameterValue>( m_PointParameter->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPointOnCurve::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPOINTONCURVE" << "(";
	if( m_BasisCurve ) { stream << "#" << m_BasisCurve->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_PointParameter ) { m_PointParameter->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPointOnCurve::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPointOnCurve::toString() const { return L"IfcPointOnCurve"; }
void IfcPointOnCurve::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPointOnCurve, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_BasisCurve, map );
	m_PointParameter = IfcParameterValue::createObjectFromSTEP( args[1], map );
}
void IfcPointOnCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPoint::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BasisCurve", m_BasisCurve ) );
	vec_attributes.emplace_back( std::make_pair( "PointParameter", m_PointParameter ) );
}
void IfcPointOnCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPoint::getAttributesInverse( vec_attributes_inverse );
}
void IfcPointOnCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPoint::setInverseCounterparts( ptr_self_entity );
}
void IfcPointOnCurve::unlinkFromInverseCounterparts()
{
	IfcPoint::unlinkFromInverseCounterparts();
}
