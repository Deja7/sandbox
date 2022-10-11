#include <SFML/Graphics.hpp>
#include <iostream>

#include "sbxV2D.h"
#include "rotationVar.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "sandbox");


	while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::White);



		window.display();
	}


	return 0;
}