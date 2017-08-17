
#include "gamestate.h"

void GameState::create() {
    // add sprite
    // TODO

    this->setClearColor(NColor(84, 84, 84));

    this->ball = new Ball(20, 20);
    this->add(this->ball);

    NState::create();
}

void GameState::update(float dt) {
    // bool up = this->game->keys->pressed(SDLK_UP);
    // bool down = this->game->keys->pressed(SDLK_DOWN);
    // bool left = this->game->keys->pressed(SDLK_LEFT);
    // bool right = this->game->keys->pressed(SDLK_RIGHT);

    // if (up && down) {
    //     up = down = false;
    // }
    // if (left && right) {
    //     left = right = false;
    // }
    // if (up) {
    //     this->ball->y--;
    // }
    // if (down) {
    //     this->ball->y++;
    // }
    // if (left) {
    //     this->ball->x--;
    // }
    // if (right) {
    //     this->ball->x++;
    // }

    NState::update(dt);
}
