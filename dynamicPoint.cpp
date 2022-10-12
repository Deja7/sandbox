#include "dynamicPoint.h"

sx::dynamicPoint::dynamicPoint(float rad, sx::vec pos, float mas)
{
	radius = rad;
	position = pos;
	mass = mas;
	rotationSpeed = 0;
	rotation.setRotation(0);
	elasticity = 0;
	calculateEnergies();
}

void sx::dynamicPoint::calculateEnergies()
{
	potentialEnergy = physicsValues().g * (800 - position.y) * mass;
	kineticEnergy = mass * speed.getValue() / 2.f;
}

sf::CircleShape sx::dynamicPoint::getSfPoint()
{
	sf::CircleShape point(radius);
	point.setFillColor(sf::Color::Red);
	point.setOrigin(radius / 2.f, radius / 2.f);
	point.setPosition(position.toSF());
	return point;
}
