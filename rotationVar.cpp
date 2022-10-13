#include "rotationVar.h"
#include <math.h>
void sx::rotationVar::limitCheck()
{
	if (rot >= 360) rot -= 360.f;
	else if (rot < 0) rot += 360.f;
}

float sx::rotationVar::getRotation()
{
	return rot;
}

void sx::rotationVar::rotateBy(float k)
{
	rot += k;
	limitCheck();
}

float sx::rotationVar::toRadians()
{
	return rot / 180.f * 3.14;
}

sx::vec sx::rotationVar::toVector(float k)
{
	float radians = toRadians();
	return sx::vec(sin(radians) * k, cos(radians) * k);
}

sx::vec sx::rotationVar::toVector()
{
	float radians = toRadians();
	return sx::vec(sin(radians), cos(radians));
}

void sx::rotationVar::setByVector(sx::vec vector)
{
	rot = atan2(vector.y, vector.x) / 3.14 * 180.f;
	limitCheck();
}

void sx::rotationVar::setRotation(float k)
{
	rot = k;
	limitCheck();
}

sx::rotationVar::rotationVar()
{
	rot = 0;
}

sx::rotationVar::rotationVar(float k)
{
	rot = k;
	limitCheck();
}