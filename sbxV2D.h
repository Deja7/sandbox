#pragma once
#include <SFML/graphics.hpp>
namespace sx
{
	class vec
	{
	public:
		float x;	///vector values
		float y;	///


		vec();							///
		vec(float xi, float yi);		///constructors

		void set(float xi, float yi);	///set values

		void sum(vec);					///scalar operations
		void subtract(vec);				///

		void scale(float k);			//scale by k factor

		sf::Vector2f toSF();			//output as sfml vector

	};
}

