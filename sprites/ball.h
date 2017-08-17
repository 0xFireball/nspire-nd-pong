
#pragma once

#include "../deps.h"
#include "../reg.h"

class Ball : public NSprite {
  private:
    static const int MOVEMENT_SPEED = 80;
    Vec2 _vel;

  public:
    Ball(int x, int y) : NSprite(x, y), _vel(Vec2(this->MOVEMENT_SPEED)) {
        loadGraphic("ball.bmp.tns");
    }
    virtual void update(float dt);
};
