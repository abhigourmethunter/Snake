#include <raylib.h>

// these are to be implemented too (haha these comments are getting out of hand)
int updateGame();
int drawGame();

int main(){

    SetTargetFPS(60);

    InitWindow(500, 600, "Snake");
    
    while (!WindowShouldClose())
    {
        updateGame();

        BeginDrawing();
        ClearBackground(BLACK);
        drawGame();
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}