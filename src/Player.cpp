#include "Player.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void Player::initShape(int x, int y){

    this->rect.setRadius(15);
    this->rect.setFillColor(Color::Yellow);

    this->rect.setPosition(x, y);
}

void Player::initTexture(){

    // Loading texture from file
    if(this->textureSheet.loadFromFile("file name")){

        std::cout << "ERROR::PLAYER::INITTEXTURE:: Could not load sprite" << std::endl;
    }
}

void Player::initSprite(){

    this->sprite.setTexture(this->textureSheet);
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

Player::Player(int x, int y){

    // Debugging stuff
    this->initShape(x, y);

    // sets up the sprites of the character
    this->initTexture();
    this->initSprite();
}

Player::~Player(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void Player::update()
{
}

void Player::draw(RenderTarget *target){

    target->draw(this->rect);
}
