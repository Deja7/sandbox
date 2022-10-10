#include <SFML/Graphics.hpp>
#include <iostream>

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