#ifndef PACMANCE_TILES_H
#define PACMANCE_TILES_H

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

// Namespaces for convenience sake
using namespace sf;

class Tiles {

private:

    // Textures amirite
    Texture texture;
    Sprite sprite;
    int ID;

    // Private Functions
    void initTexture();
    void initSprite();

public:

    // Constructor and Destructor
    Tiles(int ID = 0);
    virtual ~Tiles();

    // Accessors
    Sprite getSprite();

    // Essential Function
    void render(RenderTarget* target);

};


#endif //PACMANCE_TILES_H
