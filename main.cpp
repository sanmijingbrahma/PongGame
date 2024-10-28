#include <iostream>
#include <raylib.h>
using namespace std;

int main()
{

    // define the screen size of the game
    const int screen_width = 1280;
    const int screen_height = 800; 

    // Initialize the game window with the defined screen size
    InitWindow(screen_width, screen_height, "Pong Game");

    // set the FPS fo the game
    SetTargetFPS(60);

    // Start the game loop- until ESC and close button is clicked
    while (!WindowShouldClose())
    {

        // star creating game objects ont the game window
        BeginDrawing();

            // Draw a Circle or a ball
            DrawCircle(screen_width/2,screen_height/2,25,WHITE); 

            // Drawing paddles

            DrawRectangle(10,screen_height/2-60,20,120,WHITE);
            DrawRectangle(screen_width-20,(screen_height/2)-60,20,120,WHITE);   

        EndDrawing();
    }

    // for closing the window
    CloseWindow();

    return 0;
}