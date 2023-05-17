#include "Tiles.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void Tiles::initTexture() {

    // Loads the actual file
    if(!this->texture.loadFromFile("/home/skg/PacManCE/assets/images/tiles.png")) {
        std::cout << "Tile texture did not load\n";
    }
}

void Tiles::initSprite(int x, int y) {

    IntRect IDRect;

    if(this->ID < 8 && this->ID >= 0){

        IDRect = IntRect(this->ID, 0, 8, 8);
    }
    else if(this->ID < 16 && this->ID >= 8){

        IDRect = IntRect(this->ID - 8, 8, 8, 8);
    }
    else if(this->ID < 24 && this->ID >= 16){

        IDRect = IntRect(this->ID - 8 * 2, 8 * 2, 8, 8);
    }
    else if(this->ID < 32 && this->ID >= 24){

        IDRect = IntRect(this->ID - 8 * 3, 8 * 3, 8, 8);
    }
    else if(this->ID < 40 && this->ID >= 32){

        IDRect = IntRect(this->ID - 8 * 4, 8 * 4, 8, 8);
    }
    else if(this->ID < 48 && this->ID >= 40){

        IDRect = IntRect(this->ID - 8 * 5, 8 * 5, 8, 8);
    }
    else if(this->ID < 56 && this->ID >= 48){

        IDRect = IntRect(this->ID - 8 * 6, 8 * 6, 8, 8);
    }
    else if(this->ID < 64 && this->ID >= 56){

        IDRect = IntRect(this->ID - 8 * 7, 8 * 7, 8, 8);
    }

    // Setting the texture and its scale
    this->sprite.setTexture(this->texture);
    this->sprite.setTextureRect(IDRect);
    this->sprite.setScale(6.f, 6.f);

    // Setting position
    this->sprite.setPosition(x, y);
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

Tiles::Tiles(int x, int y, int ID) {

    // Setting up tile ID
    this->ID = ID;

    // Initializer functions
    this->initTexture();
    this->initSprite(x, y);

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