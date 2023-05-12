#ifndef PACMANCE_MAINMENUSTATE_H
#define PACMANCE_MAINMENUSTATE_H

#include <iostream>

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
    String* pageName;
    Event ev;

    // Graphics and preparation
    Font font;
    std::map<String, Texture*> textures;

    // Private functions
    void initTextures();
    void initVariables(RenderWindow *target, String *pageName);

public:

    // Constructor and Destructor
    MainMenuState(RenderWindow *target, String *pageName);
    virtual ~MainMenuState();

    // Functions
    void checkInputs();

    // Essential functions
    void update();
    void draw();
    void pollEvents();
};


#endif //PACMANCE_MAINMENUSTATE_H
