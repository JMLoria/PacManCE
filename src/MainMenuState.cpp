#include "MainMenuState.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void MainMenuState::initVariables(){
    
    // Changing the window depending on where you are
    this->window->setTitle("CE-Man - Main Menu");

    // Menu logic variables
    this->curSelected = 0;
    // this->options = ["play", "credits"];
    this->curOption = options[this->curSelected];

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief
/// @param target
MainMenuState::MainMenuState(RenderWindow *target){

    this->window = target;
    this->initVariables();
}

/// @brief 
MainMenuState::~MainMenuState(){

    delete this->window;
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void MainMenuState::checkInputs(){

}

/// @brief 
/// @param dir 
void MainMenuState::changeSelection(int dir){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
void MainMenuState::update(){

    this->pollEvents();
}

/// @brief 
void MainMenuState::draw(){

    // Clears the previous frame
    this->window->clear(Color(0xFFAA5555));

    // Displays the frame in the screen
    this->window->display();
}

/// @brief 
void MainMenuState::pollEvents(){

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
