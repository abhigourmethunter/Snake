#ifndef SNAKE_LOC
#define SNAKE_LOC

#include <point.h>

// -----------------------------

typedef struct snakeLocation{
    
    Point head;
    Point tail;
    
    // capacity of corners array
    int capacity;
    // number of corners
    int n;
    // all corners in order
    Point *corners;

}SnakeLocation;

// -----------------------------

void initializeLocationObject(SnakeLocation *locObj);
void addCorner(SnakeLocation *locObj, Point corner);
void updateSnakeLocation(SnakeLocation *locObj, Point newHead);

#endif