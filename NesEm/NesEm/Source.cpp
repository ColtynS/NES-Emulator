#include <iostream>
#include <SFML\Graphics.hpp>
#include "cpu.h"

const int height = 224;
const int width = 256;
const double CPU_SPEED = 1789773;
const double PPU_SPEED = 5369318;

int main()
{
	std::cout << "I'm an emulator" << std::endl;
	sf::RenderWindow window(sf::VideoMode(36, 36), "SFML works!");
	sf::CircleShape shape(18.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}