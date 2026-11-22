#ifndef GAME
#define GAME

#include <snake.h>
#include <wall.h>
#include <settings.h>

typedef struct game{
    Snake snake;
    int Score;
    Wall *walls;

    Settings settings;
} Game;


void initialize(Game *game);
void update(Game *game);
void draw(Game *game);

#endif