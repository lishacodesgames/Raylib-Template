#include "example_game.hpp"
#include "raylib.h"

void Game::Init() {
   // initialisation logic
}

void Game::Update() {
   if(IsKeyDown(KEY_RIGHT))
      x += 4;
   if(IsKeyDown(KEY_LEFT))
      x -= 4;
   if(IsKeyDown(KEY_UP))
      y -= 4;
   if(IsKeyDown(KEY_DOWN))
      y += 4;
}

void Game::Draw() {
   DrawCircle(x, y, 25, PINK);
}

void Game::Shutdown() {
   // cleanup if needed
}