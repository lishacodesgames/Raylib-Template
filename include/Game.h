#pragma once

class Game {
   int x = 400;
   int y = 300;

   void HandleEvents();
   void Draw();
public:
   void Init();
   void Run();
};