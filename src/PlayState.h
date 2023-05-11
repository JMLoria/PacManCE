#ifndef PACMANCE_PLAYSTATE_H
#define PACMANCE_PLAYSTATE_H

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/System.hpp>

using namespace sf;

class PlayState {

private:

public: 

    // Constructor and Destructor
    PlayState(RenderWindow *target);
    virtual ~PlayState();

    // Functions
    void checkInput();
    void updateLevelCollisions();
    void updateEnemyCollisions();

    // Essential Functions
    void update();
    void draw();
    void pollEvents();

};


#endif //PACMANCE_PLAYSTATE_H
