#ifndef PACMANCE_PLAYSTATE_H
#define PACMANCE_PLAYSTATE_H

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>

// Data structures
#include "LinkedList.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

// Gameplay classes
#include "Player.h"
//#include <Enemy.h>
#include "Tiles.h"

// Namespaces for convenience sake
using namespace sf;

class PlayState {

private:

    // SFML Rendering
    RenderWindow *window;
    String* pageName;
    Event ev;

    // Resources
    Font font;
    Text UI;

    // Variables for level generation
    int curLevel;
    int gridSize;
    int curLayout[30][26]; // Stores level data
    std::vector<Tiles> walls;

    // Inputs
    bool pressUp;
    bool pressDown;
    bool pressLeft;
    bool pressRight;

    // Player and some other variables
    Player* player;
    int curScore;
    
    // Enemies separated because easier to deal with
    //Enemy enemy1;
    //Enemy enemy2;
    //Enemy enemy3;
    //Enemy enemy4;

    // Private Functions
    void initVariables(RenderWindow *target, String *pageName);
    void initFonts();
    void createLevelMap();

public: 

    // Constructor and Destructor
    PlayState(RenderWindow *target, String *pageName, int* curLevel);
    virtual ~PlayState();

    // Functions
    void checkInput();
    void updateLevelCollisions();
    void updateEnemyCollisions();
    void updatePlayerMovement();
    void updateEnemiesMovement();
    void updateText();

    // Essential Functions
    void update();
    void draw();
    void pollEvents();

};


#endif //PACMANCE_PLAYSTATE_H
