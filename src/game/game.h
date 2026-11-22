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


void initializeGame(Game *game);
void updateGame(Game *game);
void drawGame(Game *game);

#endif