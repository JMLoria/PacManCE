#ifndef PACMANCE_MAINMENUSTATE_H
#define PACMANCE_MAINMENUSTATE_H

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/System.hpp>

using namespace sf;

class MainMenuState {

private:

    // Window target for rendering
    RenderWindow* window;
    Event ev;

    // Options variables
    String options;
    int curSelected;
    String curOption;

    // Graphics
    Font font;
    // Sprite for the Logo
    // 

    // Private functions
    void initVariables();

public:

    // Constructor and Destructor
    MainMenuState(RenderWindow *target);
    virtual ~MainMenuState();

    // Functions
    void checkInputs();
    void changeSelection(int dir);

    // Essential functions
    void update();
    void draw();
    void pollEvents();
};


#endif //PACMANCE_MAINMENUSTATE_H
