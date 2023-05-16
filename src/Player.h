#ifndef PACMANCE_PLAYER_H
#define PACMANCE_PLAYER_H

// Integrated C++ Libraries
#include <iostream>

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

// Namespaces for convenience sake
using namespace sf;

// Player animation states
enum PLAYERSTATES {

    RIGHT = 0,
    LEFT,
    UP,
    DOWN
};

// The class itself
class Player {

private:

    // Sprites and Textures
    Sprite sprite;
    Texture textureSheet;

    // Player Attributes
    Vector2f velocity;
    const float movementSpeed;

    // Animations
    Clock animationTimer;

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
    void initSprite(int x, int y);

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
