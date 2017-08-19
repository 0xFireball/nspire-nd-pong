
#pragma once

#include "../deps.h"

#include "../sprites/ball.h"
#include "../sprites/paddle.h"

class GameState : public NState {
  private:
    std::shared_ptr<Ball> ball;
    std::shared_ptr<Paddle> player;
    std::unique_ptr<NCollision> collision;

  public:

    virtual void create();
    virtual void update(float dt);
};
