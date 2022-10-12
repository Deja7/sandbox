#pragma once
#include "sbxV2D.h"
#include "rotationVar.h"
#include "dynamicPoint.h"
#include "staticLine.h"
#include "physicsValues.h"
#include <math.h>
#include <vector>
namespace sx
{
	class physicsOperator
	{
	public:
		physicsValues values;

		std::vector <staticLine> lines;
		std::vector <dynamicPoint> points;

		//physicsOperator();

		void insertObject(staticLine line);
		void insertObject(dynamicPoint point);
		//void insertObject(staticLine line);		for shapes


		void calculateForces();						//only for points now
	};
}
