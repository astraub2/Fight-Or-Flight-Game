#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 500), "Fight or Flight");
	
	sf::Font font;
	if (!font.loadFromFile("../fonts/Roboto-Light.ttf")) {
		std::cout << "Error: Font not found" << std::endl;
	}
	sf::Texture texture;
	if (!texture.loadFromFile("purple.jpeg", sf::IntRect(0, 0, 25, 25)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	texture.setSmooth(true);
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
	//I will figure out a way to do this iterativly, just testing
	 
	sf::Sprite map[15][15];
	for(int i = 0; i < 15; i++){   
	    for(int j = 0; j < 15; j++){ 
	    	map[i][j].setTexture(texture); 
	        map[i][j].move(sf::Vector2f(200+(i*26), 50+(j*26)));
	    }  
	} 

	// sf::RectangleShape a0(sf::Vector2f(25, 25));
	// sf::RectangleShape a1(sf::Vector2f(25, 25));
	// sf::RectangleShape a2(sf::Vector2f(25, 25));
	// sf::RectangleShape a3(sf::Vector2f(25, 25));
	// sf::RectangleShape a4(sf::Vector2f(25, 25));
	// sf::RectangleShape points[]={a0, a1, a2, a3,a4};
	// for (int i=0; i<5; i++){

	// 	points[i].setFillColor(sf::Color::Blue);
	// 	points[i].move(200+(i*26), 50);
	// }

	// sf::RectangleShape a0(sf::Vector2f(25, 25));
	// a0.setFillColor(sf::Color::Blue);
	// a0.move(200, 50);
	// sf::RectangleShape a1(sf::Vector2f(25, 25));
	// a1.setFillColor(sf::Color::Blue);
	// a1.move(226, 50);
	// sf::RectangleShape a2(sf::Vector2f(25, 25));
	// a2.setFillColor(sf::Color::Blue);
	// a2.move(252, 50);
	// sf::RectangleShape a3(sf::Vector2f(25, 25));
	// a3.setFillColor(sf::Color::Blue);
	// a3.move(278, 50);
	// sf::RectangleShape a4(sf::Vector2f(25, 25));
	// a4.setFillColor(sf::Color::Blue);
	// a4.move(304, 50);
	// sf::RectangleShape b0(sf::Vector2f(25, 25));

	// b0.setFillColor(sf::Color::Blue);
	// b0.move(200, 76);
	// sf::RectangleShape b1(sf::Vector2f(25, 25));
	// b1.setFillColor(sf::Color::Blue);
	// b1.move(226, 76);
	// sf::RectangleShape b2(sf::Vector2f(25, 25));
	// b2.setFillColor(sf::Color::Blue);
	// b2.move(252, 76);
	// sf::RectangleShape b3(sf::Vector2f(25, 25));
	// b3.setFillColor(sf::Color::Blue);
	// b3.move(278, 76);
	// sf::RectangleShape b4(sf::Vector2f(25, 25));
	// b4.setFillColor(sf::Color::Blue);
	// b4.move(304, 76);
	


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
		//**right column*
		window.draw(shootButton);
		window.draw(loadButton);
		window.draw(shieldButton);
		window.draw(moveButton);

		window.draw(loadText);
		window.draw(shootText);
		window.draw(shieldText);
		window.draw(moveText);

		//**board**
		for(int i = 0; i < 15; i++){   
	    for(int j = 0; j < 15; j++){  
	       window.draw(map[i][j]);
	       	    }  
	}
		// window.draw(a0);
		// window.draw(a1);
		// window.draw(a2);
		// window.draw(a3);
		// window.draw(a4);
		// window.draw(b0);
		// window.draw(b1);
		// window.draw(b2);
		// window.draw(b3);
		// window.draw(b4);

		//left column
		window.display();
	}
	
	return 0;
}
