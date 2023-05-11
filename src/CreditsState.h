#ifndef PACMANCE_CREDITSSTATE_H
#define PACMANCE_CREDITSSTATE_H

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/System.hpp>

using namespace sf;

class CreditsState {

private:

    RenderWindow* window;
    Event ev;

    // Private Functions
    void initVariables();

public:

    // Constructor and Destructor
    CreditsState(RenderWindow *target);
    virtual ~CreditsState();

    // Functions
    void checkInputs();
    void changeSelection(int dir);

    // Essential functions
    void update();
    void draw();
    void pollEvents();
};


#endif //PACMANCE_CREDITSSTATE_H
