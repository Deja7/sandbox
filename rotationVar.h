#pragma once
#include "sbxV2D.h"
namespace sx
{
	class rotationVar
	{
	private:
		float rot;
		void limitCheck();			/// limit rotation between 0 and 359


	public:							/// ALL FUNCIONTS AUTOMATICALLY PERFORM LIMIT CHECK
		rotationVar();				///
		rotationVar(float r);		///constructors

		float getRotation();		/// returns value
		void setRotation(float k);	///sets rotation to chosen value
		void rotateBy(float k);		///changes the rotation by chosen value

		float toRadians();			///convert degrees to radians (used in c++ trigonometry functions)

		sx::vec toVector(float k);	///Recalculates the rotation to x and y vectors (original vector of k value)
		sx::vec toVector();			///same, but original vector has value of 1.f
		
	};
}

