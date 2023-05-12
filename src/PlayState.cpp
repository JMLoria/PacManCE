#include "PlayState.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief
void PlayState::initVariables(RenderWindow *target, String *pageName){

    // Setting up the values
    this->window = target;
    this->pageName = pageName;

}

void PlayState::initTextures(){

    //This is how you load textures
    //
    // this->textures["{file_name}"] = new sf::Texture;
    // this->textures["{file_name}"]->loadFromFile("path");
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
/// @param target 
/// @param pageName 
PlayState::PlayState(RenderWindow *target, String *pageName){

    this->initVariables(target, pageName);
    this->initTextures();
}

/// @brief 
PlayState::~PlayState(){

    delete this->pageName;
    delete this->window;
    
    // Delete textures
    for(auto &i : this->textures){

        delete i.second;
    }
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void PlayState::updateLevelCollisions(){

}

/// @brief 
void PlayState::updateEnemyCollisions(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void PlayState::update(){

    this->pollEvents();
}

/// @brief 
void PlayState::draw(){

    // Clears the previous frame
    this->window->clear(Color(0x5555AA));

    // Displays the frame in the window
    this->window->display();

}

/// @brief 
void PlayState::pollEvents(){

    while (this->window->pollEvent(this->ev)){

        switch(this->ev.type){

            case Event::Closed:
                this->window->close();
                break;

            case Event::KeyPressed:
                if (this->ev.key.code == Keyboard::Escape){
                    this->window->close();
                }

                if (this->ev.key.code == Keyboard::Enter || this->ev.key.code == Keyboard::Space){
                    String* reference = this->pageName;
                    *reference = "credits";
                }

                break;
        }
    }
}
