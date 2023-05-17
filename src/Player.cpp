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
    if(!this->textureSheet.loadFromFile("/home/franco/pac-man/PacManCE/assets/images/pacman.png")){

        std::cout << "ERROR::PLAYER::INITTEXTURE:: Could not load sprite" << std::endl;
    }
}

void Player::initSprite(int x, int y){

    this->sprite.setTexture(this->textureSheet);
    this->sprite.setTextureRect(IntRect(0, 0, 16, 16));

    this->sprite.setPosition(x, y);
    this->sprite.setScale(3.f, 3.f);
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

Player::Player(int x, int y){

    // Debugging stuff
    // this->initShape(x, y);

    // sets up the sprites of the character
    this->initTexture();
    this->initSprite(x, y);
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

    target->draw(this->sprite);
}
