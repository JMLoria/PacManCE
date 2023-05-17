#include "Player.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Initializes the player's texture sheet
void Player::initTexture(){

    // Loading texture from file
    if(!this->textureSheet.loadFromFile("/home/skg/PacManCE/assets/images/pacman.png")){

        std::cout << "ERROR::PLAYER::INITTEXTURE:: Could not load sprite" << std::endl;
    }
}

/// @brief Configures the sprite for convenience
/// @param x X position for Sprite
/// @param y Y position for Sprite
void Player::initSprite(int x, int y){

    this->sprite.setTexture(this->textureSheet);
    this->sprite.setTextureRect(IntRect(16, 0, 16, 16));

    this->sprite.setPosition(x, y);
    this->sprite.setScale(3.f, 3.f);
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Class constructor for the player
/// @param x X position for Object
/// @param y Y position for Object
Player::Player(int x, int y){

    // Initializing values
    this->movementSpeed = 5.f;

    // sets up the sprites of the character
    this->initTexture();
    this->initSprite(x, y);
}

/// @brief Class destructor
Player::~Player(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    ACCESSORS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Accessor to the player's sprite, let's you get its values
/// @return the player sprite attribute
Sprite& Player::getSprite(){

    return this->sprite;
}


/// @brief Accessor for the player's velocity vector
/// @return the player's velocity vector
Vector2f Player::getVelocity() {

    return this->velocity;
}

/// @brief Changes the current velocity vector
/// @param x X value for Vector
/// @param y Y Value for Vector
void Player::setVelocity(int x, int y) {

    this->velocity = Vector2f(x, y);
    // std::cout << "This is the new velocity: (" << x << ", " << y << ")" << std::endl;
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Updates the player's movement
void Player::updateMovement(){

    // Making the logic for applying movement speed
    this->velocity.x *= this->movementSpeed;
    this->velocity.y *= this->movementSpeed;

    // Applying the movement
    this->sprite.move(this->velocity);
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Updates the objects values every frame
void Player::update(){

    // Running functions amirite
    updateMovement();
    // updateAnimation();
}

/// @brief Renders the object itself in the window
/// @param target Render window reference
void Player::draw(RenderTarget *target){

    target->draw(this->sprite);
}