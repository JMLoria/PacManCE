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
    float movementSpeed;

    // Animations
    Clock animationTimer;

    // Movement
    bool isMovingLeft;
    bool isMovingDown;
    bool isMovingUp;
    bool isMovingRight;

    //Private functions
    void initTexture();
    void initSprite(int x, int y);

public:

    // Constructor and Destructor
    Player(int x, int y);
    virtual ~Player();

    // Accessors
    Sprite& getSprite();
    Vector2f getVelocity();
    Vector2f setVelocity(int x, int y);

    // Essential Functions
    void update();
    void draw(RenderTarget* target);

    // Functions
    void updateMovement();
    void updateAnimation();

};


#endif //PACMANCE_PLAYER_H
