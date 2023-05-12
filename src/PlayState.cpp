#include "PlayState.h"

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                PRIVATE FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void PlayState::initVariables(RenderWindow *target, String *pageName){

    // Setting up the values
    this->window = target;
    this->pageName = pageName;

    // Setting the default values
    this->pressLeft = false;
    this->pressDown = false;
    this->pressUp = false;
    this->pressRight = false;

    this->player = new Player(50, 50);

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

PlayState::PlayState(RenderWindow *target, String *pageName){

    this->initVariables(target, pageName);
    this->initTextures();
}

PlayState::~PlayState(){

    delete this->pageName;
    delete this->window;
    delete this->player;

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

void PlayState::checkInput(){

    // Vertical input
    if(Keyboard::isKeyPressed(sf::Keyboard::W) || Keyboard::isKeyPressed(sf::Keyboard::Up)){

        this->pressDown = false;
        this->pressUp = true;
        this->pressRight = false;
        this->pressLeft = false;
    }
    else if(Keyboard::isKeyPressed(sf::Keyboard::S) || Keyboard::isKeyPressed(sf::Keyboard::Down)){

        this->pressUp = false;
        this->pressDown = true;
        this->pressRight = false;
        this->pressLeft = false;
    }

    // Horizontal input
    if(Keyboard::isKeyPressed(sf::Keyboard::A) || Keyboard::isKeyPressed(sf::Keyboard::Left)){

        this->pressDown = false;
        this->pressUp = false;
        this->pressRight = false;
        this->pressLeft = true;
    }
    else if(Keyboard::isKeyPressed(sf::Keyboard::D) || Keyboard::isKeyPressed(sf::Keyboard::Right)){

        this->pressDown = false;
        this->pressUp = false;
        this->pressLeft = false;
        this->pressRight = true;
    }

}

void PlayState::updateLevelCollisions(){

}

void PlayState::updateEnemyCollisions(){

}

void PlayState::updatePlayerMovement(){

    if (this->pressUp){

        std::cout << "Pressing Up" << std::endl;
        this->player->rect.move(0, -5);
    }

    if (this->pressDown){

        std::cout << "Pressing Down" << std::endl;
        this->player->rect.move(0, 5);
    }

    if (this->pressLeft){

        std::cout << "Pressing Left" << std::endl;
        this->player->rect.move(-5, 0);
    }

    if (this->pressRight){

        std::cout << "Pressing Right" << std::endl;
        this->player->rect.move(5, 0);
    }


}

void PlayState::updateEnemiesMovement(){

}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                ESSENTIAL FUNCTIONS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

void PlayState::update(){

    // Window stuff
    this->pollEvents();

    // Game logic functions
    this->checkInput();
    this->updatePlayerMovement();

}

void PlayState::draw(){

    // Clears the previous frame
    this->window->clear();

    this->player->draw(this->window);

    // Displays the frame in the window
    this->window->display();

}

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
                    *reference = "main-menu";
                }

                break;
        }
    }
}
