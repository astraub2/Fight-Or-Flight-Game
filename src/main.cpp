#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 500), "Fight or Flight");
	
	sf::Font font;
	if (!font.loadFromFile("../fonts/Roboto-Light.ttf")) {
		std::cout << "Error: Font not found" << std::endl;
	}
	//** the format of the board, replaced with pics later?? ***

	//right column
	sf::Text loadText;
	sf::Text shootText;
	sf::Text shieldText;
	sf::Text moveText;
	loadText.setFont(font);
	shootText.setFont(font);
	shieldText.setFont(font);
	moveText.setFont(font);
	loadText.setString("Load");
	loadText.move(10, 5);
	shootText.setString("Shoot");
	shootText.move(10, 55);
	shieldText.setString("Shield");
	shieldText.move(10, 105);
	moveText.setString("Move");
	moveText.move(10, 160);
	loadText.setCharacterSize(16);
	shootText.setCharacterSize(16);
	shieldText.setCharacterSize(16);
	moveText.setCharacterSize(16);

	//text1.setFillColor(sf::Color::Green);
	//text2.setFillColor(sf::Color::Red);
	
	sf::RectangleShape loadButton(sf::Vector2f(80, 50));
	loadButton.setFillColor(sf::Color::Red);
	loadButton.move(10, 5);

	sf::RectangleShape shootButton(sf::Vector2f(80, 50));
	shootButton.setFillColor(sf::Color::Blue);
	shootButton.move(10, 55);

	sf::RectangleShape shieldButton(sf::Vector2f(80, 50));
	shieldButton.setFillColor(sf::Color::Red);
	shieldButton.move(10, 105);
	
	sf::RectangleShape moveButton(sf::Vector2f(80, 50));
	moveButton.setFillColor(sf::Color::Blue);
	moveButton.move(10, 155);

	// *****board *********
	sf::RectangleShape a0(sf::Vector2f(25, 25));
	a0.setFillColor(sf::Color::Blue);
	a0.move(105, 105);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {

			case sf::Event::Closed:
				window.close();
				break;
			// *****board logic below**********

			// case sf::Event::MouseButtonPressed:
			// 	if (event.mouseButton.button == sf::Mouse::Left) {
			// 		if (event.mouseButton.x <= 50 && event.mouseButton.y <= 50) {
			// 			shape.setFillColor(sf::Color::Red);
			// 		} else if (event.mouseButton.x <= 50 && event.mouseButton.y <= 100) {
			// 			shape.setFillColor(sf::Color::Green);
			// 		}
			// 	}
			// 	break;

			default:
				break;
			}
		}
		
		window.clear();
		//**right*
		window.draw(shootButton);
		window.draw(loadButton);
		window.draw(shieldButton);
		window.draw(moveButton);

		window.draw(loadText);
		window.draw(shootText);
		window.draw(shieldText);
		window.draw(moveText);

		//**board**
		window.draw(a0);
		window.display();
	}
	
	return 0;
}
