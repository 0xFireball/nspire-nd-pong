
#pragma once

#include "../deps.h"

#include "../sprites/ball.h"
#include "../sprites/paddle.h"

class GameState : public NState {
  private:
    Ball *ball;
    Paddle *player;

  public:
    virtual void create();
    virtual void update(float dt);
};
