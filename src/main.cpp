#include "raylib.h"
#include "example_game.hpp"

int main() {
   // constexpr is a type of const that tells the compiler "this value is known at compile time"
   constexpr int screenWidth = 800;
   constexpr int screenHeight = 600;

   InitWindow(screenWidth, screenHeight, "Raylib Template");
   SetTargetFPS(60);

   Game game;
   game.Init(); // normally, Init will contain some game variables that need to be initialised before game loop starts

   while(!WindowShouldClose()) {
      game.Update();
      BeginDrawing();

      ClearBackground(RAYWHITE);
      game.Draw();

      EndDrawing();
   }

   game.Shutdown();
   CloseWindow();

   return 0;
}