#ifndef PACMANCE_PLAYSTATE_H
#define PACMANCE_PLAYSTATE_H

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>

// Data structures

// Gameplay classes
#include <Player.h>
//#include <Enemy.h>
//#include <Tile.h>

using namespace sf;

class PlayState {

private:

    // SFML Rendering
    RenderWindow *window;
    String* pageName;
    Event ev;

    // Resources
    Font font;
    std::map<String, Texture*> textures;

    // Variables for level generation
    int curLevel[50][50]; // Stores level data
    // not yet, i need a vector or smth // Stores sprites

    // Player and some other variables
    //Player player;
    int curScore;
    
    // Enemies separated because easier to deal with
    //Enemy enemy1;
    //Enemy enemy2;
    //Enemy enemy3;
    //Enemy enemy4;

    // Private Functions
    void initVariables(RenderWindow *target, String *pageName);
    void initTextures();

public: 

    // Constructor and Destructor
    PlayState(RenderWindow *target, String *pageName);
    virtual ~PlayState();

    // Functions
    void updateLevelCollisions();
    void updateEnemyCollisions();

    // Essential Functions
    void update();
    void draw();
    void pollEvents();

};


#endif //PACMANCE_PLAYSTATE_H
