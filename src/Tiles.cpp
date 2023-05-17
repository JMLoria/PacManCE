#include "Tiles.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void Tiles::initTexture() {

    IntRect IDRect;

    if(this->ID < 8 && this->ID >= 0){

        IDRect = IntRect(0, this->ID, 8, 8);
    }
    else if(this->ID < 16 && this->ID >= 8){

        IDRect = IntRect(0, this->ID - 8, 8, 8);
    }
    else if(this->ID < 24 && this->ID >= 16){

        IDRect = IntRect(0, this->ID - 16, 8, 8);
    }
    else if(this->ID < 32 && this->ID >= 24){

        IDRect = IntRect(0, this->ID - 24, 8, 8);
    }
    else if(this->ID < 40 && this->ID >= 32){

        IDRect = IntRect(0, this->ID - 32, 8, 8);
    }
    else if(this->ID < 48 && this->ID >= 40){

        IDRect = IntRect(0, this->ID - 40, 8, 8);
    }
    else if(this->ID < 56 && this->ID >= 48){

        IDRect = IntRect(0, this->ID - 48, 8, 8);
    }
    else if(this->ID < 64 && this->ID >= 56){

        IDRect = IntRect(0, this->ID - 56, 8, 8);
    }

    // Loads the actual file
    this->texture.loadFromFile("/home/skg/PacManCE/assets/images/tiles.png", IDRect);
}

void Tiles::initSprite() {

    // Setting the texture and its scale
    this->sprite.setTexture(this->texture);
    this->sprite.setScale(6.f, 6.f);
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

Tiles::Tiles(int ID) {

    // Setting up tile ID
    this->ID = ID;

    // Initializer functions
    this->initSprite();
    this->initTexture();
}

Tiles::~Tiles() {

    return;
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    ACCESSORS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

Sprite Tiles::getSprite() {

    return this->sprite;
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void Tiles::render(RenderTarget* target) {

    target->draw(this->sprite);
}