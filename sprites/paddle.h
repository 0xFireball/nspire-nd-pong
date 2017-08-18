
#pragma once

#include "../deps.h"
#include "../reg.h"

class Paddle : public NSprite {
  private:
    static const int MOVEMENT_SPEED = 120;

  public:
    Paddle(int x, int y) : NSprite(x, y) { loadGraphic("paddle.bmp.tns"); }
    virtual void update(float dt);
};
