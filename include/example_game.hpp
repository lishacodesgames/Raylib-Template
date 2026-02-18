#pragma once

class Game {
   int x = 400;
   int y = 300;
public:
   void Init();
   void Update();
   void Draw();
   void Shutdown();
};