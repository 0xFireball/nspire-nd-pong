
#pragma once

#include "../deps.h"

#include "../sprites/ball.h"

class GameState : public NState {
  private:
    Ball *ball;

  public:
    virtual void create();
    virtual void update(float dt);
};
