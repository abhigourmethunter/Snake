#include <raylib.h>
#include <game.h>


int main(){

    SetTargetFPS(60);

    Game game;
    initializeGame(&game);

    InitWindow(500, 600, "Snake");
    
    while (!WindowShouldClose())
    {
        updateGame(&game);

        BeginDrawing();
            ClearBackground(BLACK);
            drawGame(&game);
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}