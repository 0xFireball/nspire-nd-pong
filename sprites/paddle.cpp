
#include "paddle.h"

void Paddle::update(float dt) {
    bool up = Reg::game->keys->pressed(SDLK_UP);
    bool down = Reg::game->keys->pressed(SDLK_DOWN);

    if (up && down) {
        up = down = false;
    }
    if (up) {
        this->y -= this->MOVEMENT_SPEED * dt;
    }
    if (down) {
        this->y += this->MOVEMENT_SPEED * dt;
    }

    NSprite::update(dt);
}
