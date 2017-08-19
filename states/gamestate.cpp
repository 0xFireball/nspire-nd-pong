
#include "gamestate.h"

void GameState::create() {
    // add sprite
    // TODO

    this->setClearColor(NColor(0, 0, 0));

    this->collision = std::make_unique<NCollision>(
        Rect(0, 0, this->game->width, this->game->height));

    this->player = std::make_shared<Paddle>(-20, this->game->height / 2);
    this->add(this->player);

    this->ball = std::make_shared<Ball>(20, 20);
    this->add(this->ball);

    NState::create();
}

void GameState::update(float dt) {
    if (this->collision->overlap(this->ball, this->player)) {
        this->ball->paddleHit(this->player->x + this->player->offset.getX() +
                              this->player->width);
    }

    bool esc = this->game->keys->pressed(SDLK_ESCAPE);
    if (esc) {
        this->game->quit();
    }

    NState::update(dt);
}
