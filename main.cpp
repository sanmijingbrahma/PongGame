#include <iostream>
#include <raylib.h>
using namespace std;


class Ball{
    public:
        float x, y;
        int speed_x, speed_y;
        float radius;
    
    void Draw(){
        // Draw a Circle or a ball
        DrawCircle(x,y,25,WHITE);
    }

    // To update the ball's position per second
    void Update(){
        // moving the ball 
         x+=speed_x;
         y+=speed_y;

        //  making the ball so it won't go outside of the window
        if(y+radius>=GetScreenHeight() || y-radius<=0){
            speed_y*=-1;
        }
        if(x+radius>=GetScreenWidth() || x-radius<=0){
            speed_x*=-1;
        }
    }

};

Ball ball;

int main()
{

    // define the screen size of the game
    const int screen_width = 1280;
    const int screen_height = 800; 

    // Initialize the game window with the defined screen size
    InitWindow(screen_width, screen_height, "Pong Game");

    // set the FPS fo the game
    SetTargetFPS(60);

    // Properties of the Ball
    ball.x = screen_width/2;
    ball.y = screen_height/2;
    ball.radius = 25;
    ball.speed_x =7;
    ball.speed_y = 7;

    // Start the game loop- until ESC and close button is clicked
    while (!WindowShouldClose())
    {

        // star creating game objects ont the game window
        BeginDrawing();
        
            // updating the ball each time
            ball.Update();

            // seting the background color and clearing the prev render
            ClearBackground(BLACK);
            

            ball.Draw();

            // Drawing paddles

            DrawRectangle(10,screen_height/2-60,20,120,WHITE);
            DrawRectangle(screen_width-30,(screen_height/2)-60,20,120,WHITE); 

            // Drawing a line in the center
            DrawLine(screen_width/2,0,screen_width/2,screen_width,WHITE);  

        EndDrawing();
    }

    // for closing the window
    CloseWindow();

    return 0;
}