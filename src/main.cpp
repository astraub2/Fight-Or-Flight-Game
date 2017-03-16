#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "Game.hpp"
#include <vector>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 500), "Fight or Flight");
	
	sf::Texture movetabletexture;
	if (!movetabletexture.loadFromFile("MoveTable.png", sf::IntRect(0, 0, 120, 120)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture movetablecleartexture;
	if (!movetablecleartexture.loadFromFile("MoveTableClear.png", sf::IntRect(0, 0, 120, 120)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture welcomemessagetexture;
	if (!welcomemessagetexture.loadFromFile("Welcome.png", sf::IntRect(0, 0, 120, 120)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture welcomemessagecleartexture;
	if (!welcomemessagecleartexture.loadFromFile("WelcomeClear.png", sf::IntRect(0, 0, 120, 120)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture movetotexture;
	if (!movetotexture.loadFromFile("moveto.png", sf::IntRect(0, 0, 120, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture loadtexture;
	if (!loadtexture.loadFromFile("Load.png", sf::IntRect(0, 0, 120, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture shieldtexture;
	if (!shieldtexture.loadFromFile("Shield.png", sf::IntRect(0, 0, 120, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture movetexture;
	if (!movetexture.loadFromFile("Move.png", sf::IntRect(0, 0, 120, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture shoottexture;
	if (!shoottexture.loadFromFile("Shoot.png", sf::IntRect(0, 0, 120, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
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
	sf::Texture alientexture;
	if (!alientexture.loadFromFile("alien.png", sf::IntRect(0, 0, 25, 25)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	sf::Texture cowboytexture;
	if (!cowboytexture.loadFromFile("cowboy.png", sf::IntRect(0, 0, 25, 25)))
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
	
	sf::Texture bullet1texture;
	if (!bullet1texture.loadFromFile("bullet1.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet2texture;
	if (!bullet2texture.loadFromFile("bullet2.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet3texture;
	if (!bullet3texture.loadFromFile("bullet3.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet4texture;
	if (!bullet4texture.loadFromFile("bullet4.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet5texture;
	if (!bullet5texture.loadFromFile("bullet5.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet6texture;
	if (!bullet6texture.loadFromFile("bullet6.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet7texture;
	if (!bullet7texture.loadFromFile("bullet7.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet8texture;
	if (!bullet8texture.loadFromFile("bullet8.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	
	sf::Texture bullet9texture;
	if (!bullet9texture.loadFromFile("bullet9.png", sf::IntRect(0, 0, 80, 50)))
		{
		std::cout << "Error: image not found" << std::endl;
		}
	

	sf::Sprite loadButton;
	loadButton.setTexture(loadtexture);
	loadButton.move(10, 5);

	sf::Sprite shootButton;
	shootButton.setTexture(shoottexture);
	shootButton.move(10, 60);

	sf::Sprite shieldButton;
	shieldButton.setTexture(shieldtexture);
	shieldButton.move(10, 115);
	
	sf::Sprite moveButton;
	moveButton.setTexture(movetexture);
	moveButton.move(10, 175);

	sf::Sprite start;
	start.setTexture(starttexture);
	start.move(335, 5);

	sf::Sprite died;
	//died.setTexture(diedtexture);
	died.move(650, 5);
	sf::Sprite welcome;
	//died.setTexture(diedtexture);
	welcome.move(650, 100);


	sf::Sprite bullet;
	bullet.setTexture(bullet0texture);
	bullet.move(5, 400);

	sf::Sprite movetable;
	//movetable.setTexture();
	movetable.move(5, 250);



	// *****board ********
	 
	sf::Sprite map[15][15];
	for(int i = 0; i < 15; i++){   
	    for(int j = 0; j < 15; j++){ 
	    	map[i][j].setTexture(tiletexture); 
	        map[i][j].move(sf::Vector2f(200+(i*26), 60+(j*26)));
	    }  
	} 
	//Important board info, leave alone
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

	sf::Texture thePlayerTextures[3];
	thePlayerTextures[0]=chartexture;
	thePlayerTextures[1]=alientexture;
	thePlayerTextures[2]=cowboytexture;


	int numBullets=0;
	int numberOfPlayers;
	bool canmove=false;
	bool canshoot=false;
	bool shootplasma=false;
	bool shootbullet=false;
	bool youDied=true;
	welcome.setTexture(welcomemessagetexture);
	Game* gamePointer = (new Game());
	Game game = *gamePointer;
	
	
	//actual window interactions
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
					//clear the move table if present
				    movetable.setTexture(movetablecleartexture);
				    
				  //START NEW GAME
				    if (event.mouseButton.x <= 455 && event.mouseButton.y <= 55 && event.mouseButton.x >= 335 && event.mouseButton.y >= 5) {
	 					numBullets=0;
	 					bullet.setTexture(bullets[numBullets]);
	 					canmove=false;
						canshoot=false;
						shootplasma=false;
						shootbullet=false;
						youDied=false;
						welcome.setTexture(welcomemessagecleartexture);
						died.setTexture(movetablecleartexture);
						int thePlayerX;
						int thePlayerY;
						for(int i = 0; i < 15; i++){   
				  			for(int j = 0; j < 15; j++){ 
				    			map[i][j].setTexture(tiletexture); 
				    		}		
						}

	 					delete gamePointer;
	 					gamePointer = new Game();
	 					game = *gamePointer;
	 					std::vector<Player*> players = *(game.getPlayerList());
	 					numberOfPlayers=players.size();
	 					for(int i=0; i<numberOfPlayers; i++){
	 						Player* thePlayer = players[i];
	 						thePlayerX=thePlayer->getXPosition();
	 					 	thePlayerY=thePlayer->getYPosition();
	 						int thePlayerType=thePlayer->getPlayerType();
	 						map[thePlayerX][thePlayerY].setTexture(thePlayerTextures[thePlayerType]);
	 						
	 					}
				//LOAD 
				    } else if (event.mouseButton.x <= 120 && event.mouseButton.y <= 50 && event.mouseButton.x >= 5 && event.mouseButton.y >= 0) {
						if (youDied==false){
						//map[10][10].setTexture(chartexture);
						//increase player bullets by 1,
						//call players bullet val to get int for below
						youDied = game.playRound(PlayerMove(PlayerMove::RELOAD, PlayerMove::NONE, 0, 0, 0));
							
						std::vector<Player*> players = *(game.getPlayerList());
						numBullets = players[0]->getAmmo();
						//playerMove=HumanPlayer.reload()
						// PlayerMove playerMove = new PlayerMove(PlayerMove::RELOAD, PlayerMove::NONE, 0, 0, &players[0]);
						// game.playRound(playerMove);
						bullet.setTexture(bullets[numBullets]);
					}
					}
					 //SHOOT PLASMA
					 else if (event.mouseButton.x <= 75 && event.mouseButton.y <= 100 && event.mouseButton.x >= 5 && event.mouseButton.y >= 50) {
					 	if (youDied==false){
					 	std::vector<Player*> players = *(game.getPlayerList());
	 					Player* thePlayer = players[0];
 						int x=thePlayer->getXPosition();
 						
 					 	int y=thePlayer->getYPosition();

 						int xvalues[9]={-1,0,1,-1,1,-1,0,1};
						int yvalues[9]={-1,-1,-1,0,0,1,1,1};
						for(int j=0; j<8; j++){

							map[x+(xvalues[j])][y+(yvalues[j])].setTexture(movetotexture);
						}
						//redraw char here
						//std::vector<Player*> players = *(game.getPlayerList());
	 					numberOfPlayers=players.size();
	 					
	 					for(int i=0; i<numberOfPlayers; i++){
	 						
	 						Player* thePlayer = players[i];
	 						//printf("player %d accessed\n", i + 1);
	 					//for each player we need coordinates
	 						int thePlayerX=thePlayer->getXPosition();
	 						//printf("player %d's x = %d\n", i + 1, thePlayerX);
	 					 	int thePlayerY=thePlayer->getYPosition();
	 						int thePlayerType=thePlayer->getPlayerType();
	 						map[thePlayerX][thePlayerY].setTexture(thePlayerTextures[thePlayerType]);
	 					//dropdown
						movetable.setTexture(movetabletexture);
						canshoot=true;
						shootplasma=true;
					 }
					}
				}


					//SHOOT BULLET
					 else if (event.mouseButton.x <= 150 && event.mouseButton.y <= 100 && event.mouseButton.x >= 75 && event.mouseButton.y >= 50) {
						if (youDied==false){
						std::vector<Player*> players = *(game.getPlayerList());
	 					Player* thePlayer = players[0];
 						int x=thePlayer->getXPosition();
 						
 					 	int y=thePlayer->getYPosition();

 						int xvalues[9]={-1,0,1,-1,1,-1,0,1};
						int yvalues[9]={-1,-1,-1,0,0,1,1,1};
						for(int j=0; j<8; j++){

							map[x+(xvalues[j])][y+(yvalues[j])].setTexture(movetotexture);
						}
						//redraw char here
						//std::vector<Player*> players = *(game.getPlayerList());
	 					numberOfPlayers=players.size();
	 					
	 					for(int i=0; i<numberOfPlayers; i++){
	 						
	 						Player* thePlayer = players[i];
	 						//printf("player %d accessed\n", i + 1);
	 					//for each player we need coordinates
	 						int thePlayerX=thePlayer->getXPosition();
	 						//printf("player %d's x = %d\n", i + 1, thePlayerX);
	 					 	int thePlayerY=thePlayer->getYPosition();
	 						int thePlayerType=thePlayer->getPlayerType();
	 						map[thePlayerX][thePlayerY].setTexture(thePlayerTextures[thePlayerType]);
	 					//dropdown
						movetable.setTexture(movetabletexture);
	 					canshoot=true;
						shootbullet=true;
						 }
							 }
							}


					// //SHIELD PLASMA
					else if (event.mouseButton.x <= 75 && event.mouseButton.y <= 150 && event.mouseButton.x >= 5 && event.mouseButton.y >= 100) {
						if (youDied==false){
						youDied = game.playRound(PlayerMove(PlayerMove::SHIELD, PlayerMove::PLASMA, 0, 0, 0));
						
					 }
					}

					// //SHIELD BULLET
						
					 else if (event.mouseButton.x <= 150 && event.mouseButton.y <= 150 && event.mouseButton.x >= 75 && event.mouseButton.y >= 100) {
						if (youDied==false){
						youDied = game.playRound(PlayerMove(PlayerMove::SHIELD, PlayerMove::METAL, 0, 0, 0));
	
						 }
							}

					//MOVE
					else if (event.mouseButton.y <= 225 && event.mouseButton.x <= 120 && event.mouseButton.y >= 175 && event.mouseButton.x >= 5) {
						if (youDied==false){
			
						movetable.setTexture(movetabletexture);
						canmove=true;

						
					
				}
			}
					//************
					//LOGIC FOR MOVE AND SHOOT PLASMA/BULLET
					//**********************
					//Left UP 
					else if (event.mouseButton.y <=290  && event.mouseButton.x <= 45 && event.mouseButton.y >= 250 && event.mouseButton.x >= 5) {
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::NONE, -1, -1, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, -1, -1, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, -1, -1, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
						}
						//UP
						else if (event.mouseButton.y <=290  && event.mouseButton.x <= 85 && event.mouseButton.y >= 250 && event.mouseButton.x >= 45) {
						
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::METAL, 0, -1, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, 0, -1, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, 0, -1, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
						}
						//Right Up
						else if (event.mouseButton.y <=290  && event.mouseButton.x <= 125 && event.mouseButton.y >= 250 && event.mouseButton.x >= 85) {
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::METAL, 1, -1, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, 1, -1, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, 1, -1, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
						}
						//LEFT 
						else if (event.mouseButton.y <=330  && event.mouseButton.x <= 45 && event.mouseButton.y >= 290 && event.mouseButton.x >= 5) {
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::METAL, -1, 0, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, -1, 0, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, -1, 0, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
						}
						//Right
						else if (event.mouseButton.y <=330  && event.mouseButton.x <= 125 && event.mouseButton.y >= 290 && event.mouseButton.x >= 85) {
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::METAL, 1, 0, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, 1, 0, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, 1, 0, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
				}
						//LEFT Down
						else if (event.mouseButton.y <=370  && event.mouseButton.x <= 45 && event.mouseButton.y >= 330 && event.mouseButton.x >= 5) {
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::METAL, -1, 1, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, -1, 1, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, -1, 1, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
				}
						//Down
						else if (event.mouseButton.y <=370  && event.mouseButton.x <= 85 && event.mouseButton.y >= 330 && event.mouseButton.x >= 45) {
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::METAL, 0, 1, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, 0, 1, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, 0, 1, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
				}
						//Right Down
						else if (event.mouseButton.y <=370  && event.mouseButton.x <= 125 && event.mouseButton.y >= 330 && event.mouseButton.x >= 85) {
						//move Logic
						if (canmove==true){
							youDied = game.playRound(PlayerMove(PlayerMove::MOVE, PlayerMove::METAL, 1, 1, 0));
					
						canmove=false;
					}
					//shoot logic
						else if (canshoot==true){
								//map[5][5].setTexture(chartexture);
								if(shootplasma==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::PLASMA, 1, 1, 0));
					

									shootplasma=false;
								}
								else if(shootbullet==true){
									youDied = game.playRound(PlayerMove(PlayerMove::SHOOT, PlayerMove::METAL, 1, 1, 0));
					
									shootbullet=false;
								}

								
							canshoot=false;
						}
					

					
					
				    
				}
				std::vector<Player*> players = *(game.getPlayerList());
				bullet.setTexture(bullets[players[0]->getAmmo()]);
				if (youDied==false){
					//clear board and redraw all remaining characters
					for(int i = 0; i < 15; i++){   
				    for(int j = 0; j < 15; j++){ 
				    	map[i][j].setTexture(tiletexture); 
				    }
				}
				if(canmove || canshoot){
				    std::vector<Player*> players = *(game.getPlayerList());
	 					Player* thePlayer = players[0];
 						int x=thePlayer->getXPosition();
 						
 					 	int y=thePlayer->getYPosition();

 						int xvalues[9]={-1,0,1,-1,1,-1,0,1};
						int yvalues[9]={-1,-1,-1,0,0,1,1,1};
						for(int j=0; j<8; j++){

							map[x+(xvalues[j])][y+(yvalues[j])].setTexture(movetotexture);
						}
				}
				
						std::vector<Player*> players = *(game.getPlayerList());
	 					numberOfPlayers=players.size();
	 					int pointlessint=0;
	 					for(int i=0; i<numberOfPlayers; i++){
	 						
	 						Player* thePlayer = players[i];
	 					//for each player we need coordinates
	 						int thePlayerX=thePlayer->getXPosition();
	 					 	int thePlayerY=thePlayer->getYPosition();
	 						int thePlayerType=thePlayer->getPlayerType();
	 						if(thePlayerType==0){
	 							pointlessint+=1;
	 						
	 						}
	 						map[thePlayerX][thePlayerY].setTexture(thePlayerTextures[thePlayerType]);
	 					}
	 				if(pointlessint==0)
	 					youDied=true;

 					if (youDied==true){
 						for(int i = 0; i < 15; i++){   
				    	for(int j = 0; j < 15; j++){ 

				    	map[i][j].setTexture(tiletexture); 
				    }
				}
 						died.setTexture(diedtexture);
 						welcome.setTexture(welcomemessagetexture);
 					}
 				}


				    
				    if (youDied==true){
 						for(int i = 0; i < 15; i++){   
				    	for(int j = 0; j < 15; j++){ 

				    	map[i][j].setTexture(tiletexture); 
				    }
				}
 						died.setTexture(diedtexture);
 						welcome.setTexture(welcomemessagetexture);
 					}
						
						
						
				}
				break;

			default:
				break;
			}
		}
		
		window.clear();

		//**right column*
		window.draw(welcome);
		window.draw(movetable);
		window.draw(bullet);
		window.draw(died);
		window.draw(start);
		window.draw(shootButton);
		window.draw(loadButton);
		window.draw(shieldButton);
		window.draw(moveButton);

		
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
