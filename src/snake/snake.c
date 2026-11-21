#include <stdbool.h> 
#include <snake.h>


void initializeSnake(Snake *s){
    // hardcoded for now
    s->direction = LEFT;
    initializeLocationObject(s->location);
}
void setDirection(Snake* s, Direction dir){
    s->direction = dir;
}

void moveSnake(Snake *s, Direction dir){
    Point newHead = s->location->head;
    switch(dir){
        case UP:
        newHead.y--;
        break;
        case RIGHT:
        newHead.x++;
        break;
        case DOWN:
        newHead.y++;
        break;
        case LEFT:
        newHead.x--;
        break;
    }   
    updateSnakeLocation(s->location, newHead);
}

// private helper for collideSnake()
bool isCollinear(Point a, Point b, Point p){
    if (a.x == b.x == p.x){
        if ((a.y <= p.y <= b.y) || (a.y >= p.y >= b.y)){
            return true;
        }
    }

    else if (a.y == b.y == p.y){        
        if ((a.x <= p.x <= b.x) || (a.x >= p.x >= b.x)){
            return true;
        }
    }
        
    return false;
}

// can be optimized but this is a generalized function for both snake death and food placement
bool onSnake(Snake *s, Point p){
    int n = len(s->location->corners);
    
    if (isCollinear(s->location->head, s->location->corners[0], p)){
        return true;
    }

    for(int i = 0; i < n - 1; i++){
        if (isCollinear(s->location->corners[i], s->location->corners[i+1], p)){
            return true;
        }
    }

    if (isCollinear(s->location->corners[n-1], s->location->tail, p)){
        return true;
    }

    return false;
}

bool biteSnake(Snake *s){
    if (onSnake(s, s->location->head)){
        return true;
    }

    return false;
}