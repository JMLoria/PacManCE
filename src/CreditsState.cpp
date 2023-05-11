#include "CreditsState.h"

void CreditsState::initVariables(){

    // Changing the window depending on where you are
    this->window->setTitle("CE-Man - Credits!");
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief
/// @param target
CreditsState::CreditsState(RenderWindow *target){

    this->window = target;
    this->initVariables();
}

/// @brief 
CreditsState::~CreditsState(){

    delete this->window;
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void CreditsState::checkInputs(){

}

/// @brief 
/// @param dir 
void CreditsState::changeSelection(int dir){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void CreditsState::update(){

    this->pollEvents();
}

/// @brief 
void CreditsState::draw(){

    // Clears the previous frame
    this->window->clear(Color(0xFF55AA55));

    // Displays the frame in the screen
    this->window->display();
}

/// @brief 
void CreditsState::pollEvents(){

    while (this->window->pollEvent(this->ev)){

        switch(this->ev.type){

            case Event::Closed:
                this->window->close();
                break;

            case Event::KeyPressed:
                if (this->ev.key.code == Keyboard::Escape){
                    this->window->close();
                }

                break;

        }
    }
}
