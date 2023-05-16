#ifndef PACMANCE_ENEMY_H
#define PACMANCE_ENEMY_H

// Integrated C++ Libraries
#include <iostream>

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

// Namespaces for convenience sake
using namespace sf;

class Enemy {

private:

    // Sprites and Textures
    Sprite sprite;
    Texture textureSheet;

    // Animation Flags
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
    Enemy(int x, int y);
    virtual ~Enemy();

    // Essential Functions
    void update();
    void draw(RenderTarget* target);

};


#endif //PACMANCE_ENEMY_H
