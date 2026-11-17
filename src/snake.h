#ifndef SNAKE
#define SNAKE

#include <point.h>
#include <direction.h>

// structures etc.

typedef struct snake{
    // 'N' 'E' 'S' 'W'; Would've used an enum but that would waste like 3 bytes 
    // because it would use int and I can only enfore the underlying type from C23 onwards
    Direction direction;

    Point pointsCovered[];

    // dynamic array OR just a massive massive array of all of the snake's coordinates
    // probably a dynamic array, would be fun to implement too tbh haha

    // there is definitely a better way, since we know the snake is just a bunch of straight lines
    // we can definitely just make it a more efficient datatype like 
    // storing start and end points of lines maybe? hmm that would actually work I think

} Snake;


// functions below this

char setDirection(Snake* s, char dir);

#endif