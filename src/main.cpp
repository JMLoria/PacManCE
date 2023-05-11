// Integrated C++ Libs
#include <iostream>

// All of the game's states
#include "MainMenuState.h"
#include "CreditsState.h"
#include "PlayState.h"

// Namespaces for convenience sake
using namespace std;
using namespace sf;

/*
   <~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~>

    Here is where we run our program :3
    
   <~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~>
*/
int main() {

    // Here is the actual window
    RenderWindow window(VideoMode(1280, 720), "CE-Man", Style::Close | Style::Titlebar);
    window.setFramerateLimit(60);
    string pageName = "main-menu";

    // The different game states :)
    MainMenuState mainMenu(&window, &pageName);
    CreditsState credits(&window, &pageName);
    PlayState game(&window, &pageName);
    // GameOverState gameOver(&window, &pageName);

    // Game loop :3
    while (window.isOpen()){

        // Checking which page we're in (would use a switch case, but it doesn't let me)
        if (pageName == "main-menu"){

            mainMenu.update();
            mainMenu.draw();
        }

        if (pageName == "credits"){

            credits.update();
            credits.draw();
        }

        if (pageName == "play-state"){


            game.update();
            game.draw();
        }

        if (pageName == "game-over"){


        }

    }

}
