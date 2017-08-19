
#include "ball.h"

void Ball::update(float dt) {
    this->setPosition(this->getPosition() + this->vel * dt);

    // bounce off walls
    Vec2 pos = this->getPosition();
    if (pos.getX() < 0) {
        // ball went out of player bounds
        // this->x = 0;
        // this->vel.setX(-this->vel.getX());
        // respawn the ball
        this->respawn();
    }
    if (pos.getX() + this->width > Reg::game->width) {
        // TODO: give player a point
        // respawn the ball, normally
        // but for now, bounce
        this->x = Reg::game->width - this->width;
        this->vel.setX(-this->vel.getX());
    }
    if (pos.getY() < 0) {
        // reflect y-vel
        this->y = 0;
        this->vel.setY(-this->vel.getY());
    }
    if (pos.getY() + this->width > Reg::game->height) {
        // reflect y-vel
        this->y = Reg::game->height - this->width;
        this->vel.setY(-this->vel.getY());
    }

    this->animation.play("blink");

    NSprite::update(dt);
}

void Ball::paddleHit(float left) {
    this->vel.setX(-this->vel.getX());
    this->x = left;
}

void Ball::respawn() {
    this->x = Reg::game->width / 2;
    this->y = Reg::game->height / 2;
}
