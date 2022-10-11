#include "sbxV2D.h"

sx::vec::vec()
{
	x = 0;
	y = 0;
}

sx::vec::vec(float xi, float yi)
{
	x = xi;
	y = yi;
}

void sx::vec::set(float xi, float yi)
{
	x = xi;
	y = yi;
}

void sx::vec::sum(vec input)
{
	x += input.x;
	y += input.y;
}

void sx::vec::subtract(vec input)
{
	x += input.x;
	y += input.y;
}

void sx::vec::scale(float k)
{
	x *= k;
	y *= k;
}

sf::Vector2f sx::vec::toSF()
{
	sf::Vector2f tmp(x, y);
	return tmp;
}