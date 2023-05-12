#include "MainMenuState.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
/// @param target 
/// @param pageName 
void MainMenuState::initVariables(RenderWindow *target, String *pageName){
    
    // Setting up the values
    this->window = target;
    this->pageName = pageName;

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief 
/// @param target 
/// @param pageName 
MainMenuState::MainMenuState(RenderWindow *target, String *pageName){

    this->initVariables(target, pageName);
}

/// @brief 
MainMenuState::~MainMenuState(){

    delete this->pageName;
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

                if (this->ev.key.code == Keyboard::Enter || this->ev.key.code == Keyboard::Space){
                        
                        std::cout << "Changing state!" << std::endl;
                        String* reference = this->pageName;
                        *reference = "play-state";
                    }

                break;
        }
    }
}
