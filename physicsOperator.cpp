#include "physicsOperator.h"
#include <iostream>
void sx::physicsOperator::insertObject(staticLine line)
{
	lines.push_back(line);
}

void sx::physicsOperator::insertObject(dynamicPoint point)
{
	points.push_back(point);
}

void sx::physicsOperator::calculateForces()
{
	for (int obj = 0; obj < points.size(); obj++)
	{
		sx::vec gravityForce(0, points[obj].mass * values.g);
		sx::vec restForce;
		if (true) //Collision condition, to be added 
		{
			sx::rotationVar slope;
			slope.setByVector(lines[0].box);
			slope.setRotation((int)(slope.getRotation() - 90.f) % 180);
			std::cout << slope.getRotation()<<"\n";

		}

	}
}
