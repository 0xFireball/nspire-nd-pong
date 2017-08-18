
#include "paddle.h"

void Paddle::update(float dt) {
    bool up = Reg::game->keys->pressed(SDLK_UP);
    bool down = Reg::game->keys->pressed(SDLK_DOWN);
    bool left = Reg::game->keys->pressed(SDLK_LEFT);
    bool right = Reg::game->keys->pressed(SDLK_RIGHT);

    if (up && down) {
        up = down = false;
    }
    if (left && right) {
        left = right = false;
    }
    if (up) {
        this->y -= this->MOVEMENT_SPEED * dt;
    }
    if (down) {
        this->y += this->MOVEMENT_SPEED * dt;
    }
    if (left) {
        this->angle = 30;
    } else if (right) {
        this->angle = -30;
    } else {
        this->angle = 0;
    }

    if (this->y + this->height / 2 < 0) { this->y = -this->height / 2; }
    if (this->y + this->height / 2 > Reg::game->height) { this->y = Reg::game->height - this->height / 2; }

    NSprite::update(dt);
}
