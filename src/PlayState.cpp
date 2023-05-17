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
    this->gridSize = 16 * 3;
    this->curScore = 0;

    // Setting the default values
    this->pressLeft = false;
    this->pressDown = false;
    this->pressUp = false;
    this->pressRight = false;

    this->player = new Player(50, 50);

}

void PlayState::initFonts(){

    this->font.loadFromFile("/home/skg/PacManCE/assets/fonts/DlxFont.ttf");

    // UI setup
    this->UI.setFont(this->font);
    this->UI.setCharacterSize(15);
    this->UI.setStyle(Text::Bold);

    // Sets the string
    this->UI.setString("Current Level: " + (sf::String) std::to_string(this->curLevel) + "\nScore: " + (sf::String) std::to_string(this->curScore));

}

void PlayState::createLevelMap() {

    // Reading said CSV
    std::string dir = "/home/skg/PacManCE/assets/data/level"+ std::to_string(this->curLevel) + ".csv";

    std::vector<std::string> row;
    std::string line, word;

    std::ifstream file;
    file.open(dir);

    if(!file.fail()) {

        std::cout << dir << " was opened\n";
        while (getline(file, line)) {
            row.clear();

            std::stringstream str(line);

            while (getline(str, word, ','))
                row.push_back(word);
            this->curLayout.push_back(row);
        }
    }
    else
        std::cout<<"Could not open the file: "<< dir << "\n";

    for(int i=0;i<this->curLayout.size();i++)
    {
        for(int j=0;j<this->curLayout[i].size();j++)
        {
            std::cout<<this->curLayout[i][j]<<" ";
        }
        std::cout<<"\n";
    }

    for(int i=0;i<this->curLayout.size();i++)
    {
        for(int j=0;j<this->curLayout[i].size();j++)
        {
            if (std::stoi(this->curLayout[i][j]) != -1)
            {
                Tiles tile(this->gridSize * j, this->gridSize * i, std::stoi(this->curLayout[i][j]));
                this->walls.push_back(tile);
            }
        }
    }
}

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            CONSTRUCTOR AND DESTRUCTOR
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

PlayState::PlayState(RenderWindow *target, String *pageName, int* curLevel){

    // Initializing some values
    this->curLevel = *curLevel;

    // Initializing values and textures
    this->initVariables(target, pageName);
    this->createLevelMap();
    this->initFonts();
}

PlayState::~PlayState(){

    delete this->pageName;
    delete this->window;
    delete this->player;

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

    //Collision
    for (auto &wall : this->walls)
    {
        FloatRect playerBounds = this->player->getSprite().getGlobalBounds();
        FloatRect nextPos;
        FloatRect wallBounds = wall.getSprite().getGlobalBounds();

        nextPos = playerBounds;
        nextPos.left += this->player->getVelocity().x * 5;
        nextPos.top += this->player->getVelocity().y * 5;

        if (wallBounds.intersects(nextPos))
        {
            //Bottom collision
            if (playerBounds.top < wallBounds.top
                && playerBounds.top + playerBounds.height < wallBounds.top + wallBounds.height
                && playerBounds.left < wallBounds.left + wallBounds.width
                && playerBounds.left + playerBounds.width > wallBounds.left
                    )
            {
                this->player->setVelocity(this->player->getVelocity().x, 0.f);
                this->player->getSprite().setPosition(playerBounds.left, wallBounds.top - playerBounds.height);
            }

                //Top collision
            else if (playerBounds.top > wallBounds.top
                     && playerBounds.top + playerBounds.height > wallBounds.top + wallBounds.height
                     && playerBounds.left < wallBounds.left + wallBounds.width
                     && playerBounds.left + playerBounds.width > wallBounds.left
                    )
            {
                this->player->setVelocity(this->player->getVelocity().x, 0.f);
                this->player->getSprite().setPosition(playerBounds.left, wallBounds.top + wallBounds.height);
            }

            //Right collision
            if (playerBounds.left < wallBounds.left
                && playerBounds.left + playerBounds.width < wallBounds.left + wallBounds.width
                && playerBounds.top < wallBounds.top + wallBounds.height
                && playerBounds.top + playerBounds.height > wallBounds.top
                    )
            {
                this->player->setVelocity(0.f, this->player->getVelocity().y);
                this->player->getSprite().setPosition(wallBounds.left - playerBounds.width, playerBounds.top);
            }

                //Left collision
            else if (playerBounds.left > wallBounds.left
                     && playerBounds.left + playerBounds.width > wallBounds.left + wallBounds.width
                     && playerBounds.top < wallBounds.top + wallBounds.height
                     && playerBounds.top + playerBounds.height > wallBounds.top
                    )
            {
                this->player->setVelocity(0.f, this->player->getVelocity().y);
                this->player->getSprite().setPosition(wallBounds.left + wallBounds.width, playerBounds.top);
            }
        }
    }

}

void PlayState::updateEnemyCollisions(){

}

void PlayState::updatePlayerMovement(){

    if (this->pressUp){

        // this->player->getSprite().move(0, -5);
        this->player->setVelocity(0, -1);
    }

    if (this->pressDown){

        // this->player->getSprite().move(0, 5);
        this->player->setVelocity(0, 1);
    }

    if (this->pressLeft){

        // this->player->getSprite().move(-5, 0);
        this->player->setVelocity(-1, 0);
    }

    if (this->pressRight) {

        // this->player->getSprite().move(5, 0);
        this->player->setVelocity(1, 0);
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
    this->updateLevelCollisions();
    this->updatePlayerMovement();

    // Updating Entities
    this->player->update();

}

void PlayState::draw(){

    // Clears the previous frame
    this->window->clear();

    // Rendering walls and stuff
    for (auto& i : walls){

        i.render(this->window);
    }

    // Rendering the player
    this->player->draw(this->window);

    // UI cuz i'm lazy to do camera work
    this->window->draw(this->UI);

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
