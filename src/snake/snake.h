#ifndef SNAKE
#define SNAKE

#include <direction.h>
#include <snake_location.h>

// -----------------------------

#define SNAKE_THICKNESS 10

typedef struct snake{
    Direction direction;
    SnakeLocation *location;
} Snake;


// -----------------------------

void initializeSnake(Snake *s);
void setDirection(Snake *s, Direction dir);
void moveSnake(Snake *s, Direction dir);

#endif