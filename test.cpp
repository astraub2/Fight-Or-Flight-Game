#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(250, 250);
	
	sf::Font font;
	if (!font.loadFromFile("fonts/Roboto-Black.ttf")) {
		std::cout << "Error: Font not found" << std::endl;
	}

	sf::Text text1;
	sf::Text text2;

	text1.setFont(font);
	text2.setFont(font);

	text1.setString("Red");
	text2.setString("Green");

	text1.setCharacterSize(16);
	text2.setCharacterSize(16);

	text1.setFillColor(sf::Color::Green);
	text2.setFillColor(sf::Color::Red);
	
	text2.move(0, 50);	
		
	sf::RectangleShape button1(sf::Vector2f(50, 50));
	button1.setFillColor(sf::Color::Red);
	
	sf::RectangleShape button2(sf::Vector2f(50, 50));
	button2.setFillColor(sf::Color::Green);
	button2.move(0, 50);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {

			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::MouseButtonPressed:
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (event.mouseButton.x <= 50 && event.mouseButton.y <= 50) {
						shape.setFillColor(sf::Color::Red);
					} else if (event.mouseButton.x <= 50 && event.mouseButton.y <= 100) {
						shape.setFillColor(sf::Color::Green);
					}
				}
				break;

			default:
				break;
			}
		}
		
		window.clear();
		window.draw(shape);
		window.draw(button1);
		window.draw(button2);
		window.draw(text1);
		window.draw(text2);
		window.display();
	}
	
	return 0;
}
