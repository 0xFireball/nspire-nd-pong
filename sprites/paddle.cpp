
#include "paddle.h"

void Paddle::update(float dt) {
    std::vector<int> upKeys { SDLK_UP, SDLK_8 };
    bool up = Reg::game->keys->anyPressed(upKeys);
    std::vector<int> downKeys { SDLK_DOWN, SDLK_2 };
    bool down = Reg::game->keys->anyPressed(downKeys);
    std::vector<int> leftKeys { SDLK_LEFT, SDLK_4 };
    bool left = Reg::game->keys->anyPressed(leftKeys);
    std::vector<int> rightKeys { SDLK_RIGHT, SDLK_6 };
    bool right = Reg::game->keys->anyPressed(rightKeys);

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
