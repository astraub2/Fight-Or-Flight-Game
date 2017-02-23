#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(250, 250);
	
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
		window.display();
	}
	
	return 0;
}
