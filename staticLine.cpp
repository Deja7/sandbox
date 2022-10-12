#include "staticLine.h"

sx::staticLine::staticLine(sx::vec start, sx::vec end)
{
	p1 = start;
	p2 = end;
	box = p2;
	box.subtract(p1);
	getSfVertexArray();
}

void sx::staticLine::getSfVertexArray()
{
	line.setPrimitiveType(sf::Lines);
	sf::Vertex v1; sf::Vertex v2;
	v1.position = sf::Vector2f(p1.x, p1.y);
	v2.position = sf::Vector2f(p2.x, p2.y);
	v1.color = sf::Color(0, 0, 0);
	v2.color = sf::Color(0, 0, 0);
	line.append(v1);
	line.append(v2);
}
