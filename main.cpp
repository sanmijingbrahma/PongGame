#include <iostream>
#include <raylib.h>
using namespace std;

int main()
{
    const int screen_width = 1280;
    const int screen_height = 800; 
    InitWindow(screen_width, screen_height, "Pong Game");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        

        
        EndDrawing();
    }
    CloseWindow();

    return 0;
}