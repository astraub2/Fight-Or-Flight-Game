#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 500), "Fight or Flight");
	
	sf::Font font;
	if (!font.loadFromFile("../fonts/Roboto-Light.ttf")) {
		std::cout << "Error: Font not found" << std::endl;
	}
	sf::Texture tiletexture;
	if (!tiletexture.loadFromFile("purple.jpeg", sf::IntRect(0, 0, 25, 25)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture chartexture;
	if (!chartexture.loadFromFile("char.png", sf::IntRect(0, 0, 25, 25)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture starttexture;
	if (!starttexture.loadFromFile("NewGame.png", sf::IntRect(0, 0, 120, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}

	
	//** the format of the board, replaced with pics later?? ***

	//left column
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

	sf::Sprite start;
	start.setTexture(starttexture);
	start.move(335, 5);

	// *****board ********
	 
	sf::Sprite map[15][15];
	for(int i = 0; i < 15; i++){   
	    for(int j = 0; j < 15; j++){ 
	    	map[i][j].setTexture(tiletexture); 
	        map[i][j].move(sf::Vector2f(200+(i*26), 60+(j*26)));
	    }  
	} 
	

	
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {

			case sf::Event::Closed:
				window.close();
				break;
			// *****board logic below**********

			case sf::Event::MouseButtonPressed:
				if (event.mouseButton.button == sf::Mouse::Left) {
					for(int i = 0; i < 15; i++){   
				    for(int j = 0; j < 15; j++){ 
				    	map[i][j].setTexture(tiletexture); 
				        //map[i][j].move(sf::Vector2f(200+(i*26), 50+(j*26)));
				    }  
	} 
					if (event.mouseButton.x <= 50 && event.mouseButton.y <= 50) {
						map[5][5].setTexture(chartexture);
					} else if (event.mouseButton.x <= 50 && event.mouseButton.y <= 100) {
						map[10][10].setTexture(chartexture);
					}
				}
				break;

			default:
				break;
			}
		}
		
		window.clear();
		//**right column*
		window.draw(start);
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
		
		//left column
		window.display();
	}
	
	return 0;
}
