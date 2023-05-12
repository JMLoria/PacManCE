#ifndef PACMANCE_GAMEOVERSTATE_H
#define PACMANCE_GAMEOVERSTATE_H

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>

// Namespaces for convenience sake
using namespace sf;

class GameOverState {

private:

    // Window variables
    RenderWindow* window;
    String* pageName;
    int* curLevel; 

    // Private functions
    void initializeValues(RenderWindow* target, String* pageName, int* curLevel);

public:

    // Constructor and Destructor
    GameOverState(RenderWindow* target, String* pageName, int* curLevel);
    virtual ~GameOverState();

    // Functions

    // Essential Functions
    void update();
    void draw();

};

#endif //PACMANCE_GAMEOVERSTATE_H