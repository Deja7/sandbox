#include <SFML/Graphics.hpp>
#include <iostream>

#include "sbxV2D.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "sandbox");

	

	while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
	{
		window.clear(sf::Color::Black);

		window.display();
	}


	return 0;
}