#ifndef __ENVIRE_DISTANCEGRIDTOPOINTCLOUD_HPP__
#define __ENVIRE_DISTANCEGRIDTOPOINTCLOUD_HPP__

#include <envire/Core.hpp>

namespace envire
{
    class DistanceGridToPointcloud : public Operator
    {
	ENVIRONMENT_ITEM( DistanceGridToPointcloud )
	
    public:
	DistanceGridToPointcloud() : uncertaintyFactor(0.1), maxDistance(10.0) {};
	DistanceGridToPointcloud( Serialization& so ) : Operator( so ) {}
	void serialize( Serialization& so ) { Operator::serialize( so ); }

	bool updateAll();

	void setUncertaintyFactor( double f ) { uncertaintyFactor = f; }
	void setMaxDistance( double m ) { maxDistance = m; }

    private:
	double uncertaintyFactor;
	double maxDistance;
    };
}

#endif


