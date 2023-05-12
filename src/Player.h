#ifndef PACMANCE_PLAYER_H
#define PACMANCE_PLAYER_H

// Integrated C++ Libraries
#include <iostream>

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

// Namespaces for convenience sake
using namespace sf;

class Player {

private:

    // Sprites and Textures
    Sprite sprite;
    Texture textureSheet;

    // Animations

    // Movement
    bool isMovingLeft;
    bool isMovingDown;
    bool isMovingUp;
    bool isMovingRight;

    // Logic

    // Debug function
    void initShape(int x, int y);

    //Private functions
    void initTexture();
    void initSprite();

public:

    // Debug stuff
    CircleShape rect;

    // Constructor and Destructor
    Player(int x, int y);
    virtual ~Player();


    // Essential Functions
    void update();
    void draw(RenderTarget* target);

};


#endif //PACMANCE_PLAYER_H
