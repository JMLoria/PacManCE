#ifndef PACMANCE_PLAYER_H
#define PACMANCE_PLAYER_H

// Integrated C++ Libraries
#include <iostream>

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

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

    //Private functions
    void initTexture();
    void initSprite();

public:

    // Constructor and Destructor
    Player();
    virtual ~Player();

    // Functions

    // Essential Functions
    void update();
    void draw(RenderTarget* target);

};


#endif //PACMANCE_PLAYER_H
