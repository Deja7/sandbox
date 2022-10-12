#pragma once
#include "sbxV2D.h"
#include "rotationVar.h"
#include "physicsValues.h"
namespace sx
{
	class dynamicPoint
	{
	public:
		float radius;					//=0 for shapes, >0 for single points
		float mass;
		sx::vec position;
		sx::vec speed;
		sx::rotationVar rotation;
		float rotationSpeed;
		float kineticEnergy;
		float potentialEnergy;
		float elasticity;
		dynamicPoint(float rad, sx::vec pos, float mas);

		void calculateEnergies();
		
		sf::CircleShape getSfPoint();
	};
}

