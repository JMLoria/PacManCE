// Integrated C++ Libs
#include <iostream>

// SFML Libs
#include <SFML/Window.hpp>

// All the game's states
#include "MainMenuState.h"
#include "PlayState.h"
#include "GameOverState.h"

// Namespaces for convenience sake
//using namespace std;
using namespace sf;

/*
   <~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~>

    Here is where we run our program :3
    
   <~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~>
*/
int main() {

    // Here is the actual window
    RenderWindow window(VideoMode(1280, 720), "CE-Man", Style::Close | Style::Titlebar);
    
    // Window settings
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(false);

    // State controllers
    String pageName = "main-menu";
    int curLevel = 1;
    bool inMainMenu = false;
    bool inPlayState = false;
    bool inGameOver = false;

    // The different game states :)
    MainMenuState mainMenu(&window, &pageName);
    PlayState game(&window, &pageName);
    GameOverState gameOver(&window, &pageName);

/*
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                   GAME LOOP
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
    while (window.isOpen()){

        /*
            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                          MAIN MENU CODE
            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        */
        if (pageName == "main-menu"){

            if (!inMainMenu){

                // Previous States
                inPlayState = false;

                // Current State
                inMainMenu = true;
                mainMenu = *new MainMenuState(&window, &pageName);
            }

            mainMenu.update();
            mainMenu.draw();
        }

        /*
            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                         PLAY STATE CODE
            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        */
        if (pageName == "play-state"){

            if (!inPlayState){

                // Previous States
                inMainMenu = false;

                // Current State
                inPlayState = true;
                game = *new PlayState(&window, &pageName);
            }

            game.update();
            game.draw();
        }
    }
}
