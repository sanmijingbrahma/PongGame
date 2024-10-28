#include <iostream>
#include <raylib.h>
using namespace std;

int main()
{
    const int screen_width = 1280;
    const int screen_height = 800; 
    InitWindow(screen_width, screen_height, "Pong Game");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

            DrawCircle(screen_width/2,screen_height/2,40,WHITE);        

        EndDrawing();
    }
    CloseWindow();

    return 0;
}