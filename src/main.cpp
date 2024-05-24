#include <SFML/Graphics.hpp>
#include <chrono>
#include <stdlib.h>
#include <string>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "RayCaster");
	
	sf::CircleShape circle(10);
	circle.setFillColor(sf::Color().Green);
	circle.setPosition(400, 300);


	while (window.isOpen())
	{
		sf::Event event;
		if (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (sf::Keyboard().isKeyPressed(sf::Keyboard().Q))
			window.close();


		window.draw(circle);
		window.display();

	}

	return 0; 
}