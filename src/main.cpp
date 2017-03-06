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
	sf::Texture diedtexture;
	if (!diedtexture.loadFromFile("Died.png", sf::IntRect(0, 0, 120, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	//////////////////////////////////////////////////////
	sf::Texture bullet0texture;
	if (!bullet0texture.loadFromFile("bullet0.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma0texture;
	if (!plasma0texture.loadFromFile("plasma0.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet1texture;
	if (!bullet1texture.loadFromFile("bullet1.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma1texture;
	if (!plasma1texture.loadFromFile("plasma1.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet2texture;
	if (!bullet2texture.loadFromFile("bullet2.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma2texture;
	if (!plasma2texture.loadFromFile("plasma2.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet3texture;
	if (!bullet3texture.loadFromFile("bullet3.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma3texture;
	if (!plasma3texture.loadFromFile("plasma3.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet4texture;
	if (!bullet4texture.loadFromFile("bullet4.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma4texture;
	if (!plasma4texture.loadFromFile("plasma4.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet5texture;
	if (!bullet5texture.loadFromFile("bullet5.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma5texture;
	if (!plasma5texture.loadFromFile("plasma5.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet6texture;
	if (!bullet6texture.loadFromFile("bullet6.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma6texture;
	if (!plasma6texture.loadFromFile("plasma6.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet7texture;
	if (!bullet7texture.loadFromFile("bullet7.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma7texture;
	if (!plasma7texture.loadFromFile("plasma7.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet8texture;
	if (!bullet8texture.loadFromFile("bullet8.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma8texture;
	if (!plasma8texture.loadFromFile("plasma8.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture bullet9texture;
	if (!bullet9texture.loadFromFile("bullet9.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture plasma9texture;
	if (!plasma9texture.loadFromFile("plasma9.png", sf::IntRect(0, 0, 80, 50)))
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

	sf::Sprite died;
	died.setTexture(diedtexture);
	died.move(650, 5);

	sf::Sprite bullet;
	bullet.setTexture(bullet0texture);
	bullet.move(5, 300);

	sf::Sprite plasma;
	plasma.setTexture(plasma0texture);
	plasma.move(5, 400);




	// *****board ********
	 
	sf::Sprite map[15][15];
	for(int i = 0; i < 15; i++){   
	    for(int j = 0; j < 15; j++){ 
	    	map[i][j].setTexture(tiletexture); 
	        map[i][j].move(sf::Vector2f(200+(i*26), 60+(j*26)));
	    }  
	} 
	sf::Texture bullets[10];
	bullets[0]=bullet0texture;
	bullets[1]=bullet1texture;
	bullets[2]=bullet2texture;
	bullets[3]=bullet3texture;
	bullets[4]=bullet4texture;
	bullets[5]=bullet5texture;
	bullets[6]=bullet6texture;
	bullets[7]=bullet7texture;
	bullets[8]=bullet8texture;
	bullets[9]=bullet9texture;
	int i=0;

	
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
					

					//clear board and redraw all remaining characters
					for(int i = 0; i < 15; i++){   
				    for(int j = 0; j < 15; j++){ 
				    	map[i][j].setTexture(tiletexture); 
				    }
				}
				
				    //START NEW GAME
				    if (event.mouseButton.x <= 455 && event.mouseButton.y <= 55 && event.mouseButton.x >= 335 && event.mouseButton.y >= 5) {
	 					map[5][5].setTexture(chartexture);
	 					//logic to restart game
				    	//on button click, clear board and set new char's

					//LOAD will add plasma later
				    } else if (event.mouseButton.x <= 50 && event.mouseButton.y <= 50) {
						//map[10][10].setTexture(chartexture);
						//increase player bullets by 1,
						//call players bullet val to get int for below
						if (i<9)
							i+=1;
						else
							i=9;
						bullet.setTexture(bullets[i]);
						//run game simulations
					}
				}
				break;

			default:
				break;
			}
		}
		
		window.clear();
		//**right column*
		window.draw(plasma);
		window.draw(bullet);
		window.draw(died);
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
		
		window.display();
	}
	
	return 0;
}
