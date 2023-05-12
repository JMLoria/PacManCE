#include "Player.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void Player::initTexture(){

    // Loading texture from file
    if(this->texture.loadFromFile("file name")){

        std::cout << "ERROR::PLAYER::INITTEXTURE:: Could not load sprite" << std::endl;
    }
}

/// @brief 
void Player::initSprite(){

    this->sprite.setTexture(this->texture);
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
Player::Player(){

    // sets up the sprites of the character
    this->initTexture();
    this->initSprite();
}

/// @brief 
Player::~Player(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void Player::update()
{
}

/// @brief 
/// @param target 
void Player::draw(RenderTarget *target)
{
}
