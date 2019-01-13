/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcVertex.h"
#include "ifcpp/IFC4/include/IfcVertexLoop.h"

// ENTITY IfcVertexLoop 
IfcVertexLoop::IfcVertexLoop( int id ) { m_entity_id = id; }
IfcVertexLoop::~IfcVertexLoop() {}
shared_ptr<BuildingObject> IfcVertexLoop::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcVertexLoop> copy_self( new IfcVertexLoop() );
	if( m_LoopVertex ) { copy_self->m_LoopVertex = dynamic_pointer_cast<IfcVertex>( m_LoopVertex->getDeepCopy(options) ); }
	return copy_self;
}
void IfcVertexLoop::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCVERTEXLOOP" << "(";
	if( m_LoopVertex ) { stream << "#" << m_LoopVertex->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcVertexLoop::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcVertexLoop::toString() const { return L"IfcVertexLoop"; }
void IfcVertexLoop::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcVertexLoop, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_LoopVertex, map );
}
void IfcVertexLoop::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcLoop::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "LoopVertex", m_LoopVertex ) );
}
void IfcVertexLoop::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcLoop::getAttributesInverse( vec_attributes_inverse );
}
void IfcVertexLoop::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcLoop::setInverseCounterparts( ptr_self_entity );
}
void IfcVertexLoop::unlinkFromInverseCounterparts()
{
	IfcLoop::unlinkFromInverseCounterparts();
}
