To run the game, type "make run" into the terminal. This will run the necessary commands to launch the program, as the SFML library is included along with the project rather than being installed on the machine.

Files:
purple.jpeg: Image that is used as the background for the tiles.
*.png: Images for the game to run. These are the visuals for all the sprites that the game creates, including the buttons, the characters, and the text.
Player.hpp: Header file for the Player interface that all the characters inherit from. This contains the virtual functions that the Player classes override, as well as empty implementations (the compiler was throwing errors if I didn't include this).
PlayerMove.hpp and PlayerMove.cpp: This is the implementation used to make the Game able to know which player is doing what. This contains the enums that define the types of move (MOVE, SHOOT, SHIELD, RELOAD) and the types of shield/bullet (METAL, PLASMA, NONE) as well as some variables to hold this information.
Point.hpp and Point.cpp: This holds information about where a location on the board is. This is used to prevent a player from moving to a location another player is in, or from moving to a location another player is moving to.
HumanPlayer, AlienPlayer, and CowboyPlayer: These are the instantiated player types that the various characters are. HumanPlayer is the type that the, well, human player is.
Game.hpp and Game.cpp: This contains the logic for the game, creating the board, instantiating the players, and running the logic for each round.
main.cpp: This is the program compiled into an executable. It creates the window and renders the sprites, while connecting to the game logic from the other files.
Makefile: It's a Makefile. Contains the instructions to run the program in the run target, as the program has to know where the SFML files are. 
