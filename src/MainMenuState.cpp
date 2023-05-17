#include "MainMenuState.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Initializes the variables the class to run properly
/// @param target the renderWindow reference
/// @param pageName the game menu controller string
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

/// @brief Class constructor
/// @param target Render Window reference
/// @param pageName game menu controller string
MainMenuState::MainMenuState(RenderWindow *target, String *pageName){

    this->initVariables(target, pageName);
}

MainMenuState::~MainMenuState(){

    delete this->pageName;
    delete this->window;
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                    FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Checks the different inputs made by the user
void MainMenuState::checkInputs(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/// @brief Updates the different values per frame
void MainMenuState::update(){

    this->pollEvents();
}

/// @brief Renders the entire menu
void MainMenuState::draw(){

    // Clears the previous frame
    this->window->clear(Color(0xFFAA5555));

    // Displays the frame in the screen
    this->window->display();
}

/// @brief Polling events so that you can change scenes and exit the game
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
