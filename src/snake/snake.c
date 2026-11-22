#include <snake.h>


void initializeSnake(Snake *s){
    // hardcoded for now
    s->direction = LEFT;
    initializeLocationObject(&s->location);
}
void setDirection(Snake* s, Direction dir){
    s->direction = dir;
}

void moveSnake(Snake *s, Direction dir){
    Point newHead = s->location.head;
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
    updateSnakeLocation(&s->location, newHead);
}