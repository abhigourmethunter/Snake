#include <snake_location.h>


void initializeLocationObject(SnakeLocation *locObj){
    locObj = (SnakeLocation*)malloc(sizeof(SnakeLocation));
    locObj->capacity = 100;
    
    locObj->corners = (Point*)malloc(sizeof(Point) * locObj->capacity);
    
    // hardcoded initialized start position of snake
    locObj->head = (Point){10,10};
    locObj->tail = (Point){11,10};
}

void addCorner(SnakeLocation *locObj, Point corner){
    locObj->corners[locObj->n++] = corner;
}

// private helpers -----
void removeLastCorner(SnakeLocation *locObj){
    locObj->n--;
}

Point lastCorner(SnakeLocation *locObj){
    return locObj->corners[locObj->n-1];
}
// ---------------------

void updateSnakeLocation(SnakeLocation *locObj, Point newHead){
    locObj->head = newHead;
     
    if(locObj->tail.x == lastCorner(locObj).x){
        if(locObj->tail.y == lastCorner(locObj).y){
            // tail has reached corner, remove it
            removeLastCorner(locObj);
        }
        
        // move tail towards the last corner in y
        locObj->tail.y += (locObj->tail.y < lastCorner(locObj).y)? 1 : -1;
    }
    else {
        // y must be equal

        locObj->tail.x += (locObj->tail.x < lastCorner(locObj).x)? 1 : -1;
    }
}