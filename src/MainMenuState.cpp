#include "MainMenuState.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

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

void MainMenuState::checkInputs(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void MainMenuState::update(){

    this->pollEvents();
}

void MainMenuState::draw(){

    // Clears the previous frame
    this->window->clear(Color(0xFFAA5555));

    // Displays the frame in the screen
    this->window->display();
}

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
