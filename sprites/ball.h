
#pragma once

#include "../deps.h"
#include "../reg.h"

class Ball : public NSprite {
  private:
    static const int MOVEMENT_SPEED = 80;

  public:
    Vec2 vel;

    Ball(int x, int y) : NSprite(x, y), vel(Vec2(this->MOVEMENT_SPEED)) {
        loadGraphic("ball.bmp.tns", 16, 16);
        std::vector<int> blink_frames{0, 1};
        this->animation.add("blink", blink_frames, 2);
    }

    virtual void update(float dt);

    void paddleHit(float left);
    void respawn();
};
