#include <SFML/Graphics.hpp>
#include <iostream>

#include "sbxV2D.h"
#include "rotationVar.h"
#include "staticLine.h"
#include "dynamicPoint.h"
#include "physicsOperator.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "sandbox");

	sx::staticLine base(sx::vec(100, 300), sx::vec(700, 700));

	sx::dynamicPoint point(5, sx::vec(400, 100), 100);

	/*sx::rotationVar rot;
	rot.setRotation(0);
	std::cout << rot.toVector().x << " " << rot.toVector().y;
	*/
	sx::physicsOperator phys;
	phys.insertObject(base);
	phys.insertObject(point);

	while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::White);
		phys.calculateForces();
		window.draw(base.line);
		window.draw(point.getSfPoint());
		window.display();
	}


	return 0;
}