#include "Player.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void Player::initTexture(){

    // Loading texture from file
    if(!this->textureSheet.loadFromFile("/home/skg/PacManCE/assets/images/pacman.png")){

        std::cout << "ERROR::PLAYER::INITTEXTURE:: Could not load sprite" << std::endl;
    }
}

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

Player::Player(int x, int y){

    // Initializing values
    this->movementSpeed = 5.f;

    // sets up the sprites of the character
    this->initTexture();
    this->initSprite(x, y);
}

Player::~Player(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    ACCESSORS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

Sprite& Player::getSprite(){

    return this->sprite;
}

Vector2f Player::getVelocity() {

    return this->velocity;
}

Vector2f Player::setVelocity(int x, int y) {

    this->velocity = Vector2f(x, y);
    // std::cout << "This is the new velocity: (" << x << ", " << y << ")" << std::endl;
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

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

void Player::update(){

    // Running functions amirite
    updateMovement();
    // updateAnimation();
}

void Player::draw(RenderTarget *target){

    target->draw(this->sprite);
}