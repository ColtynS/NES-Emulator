#include <iostream>
#include <SFML\Graphics.hpp>
#include "cpu.h"
#include "TwoCppFiles.h"

const int height = 224;
const int width = 256;
const double CPU_SPEED = 1789773;
const double PPU_SPEED = 5369318;

//CPU
cpu CPU;

int main()
{
	std::cout << "I'm an emulator" << std::endl;

	CPU.RomLoader("SMB.nes");
	system("PAUSE");
	/*
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
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
	*/
	return 0;
}




