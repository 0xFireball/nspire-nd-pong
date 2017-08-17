
#include "ball.h"

void Ball::update(float dt) {
    this->setPosition(this->getPosition() + this->_vel * dt);

    // bounce off walls
    Vec2 pos = this->getPosition();
    if (pos.getX() < 0) {
        // TODO: give opponent a point
        // respawn the ball, normally
        // but for now, bounce
        this->_vel.setX(-this->_vel.getX());
    }
    if (pos.getX() + this->width > Reg::game->width) {
        // TODO: give opponent a point
        // respawn the ball, normally
        // but for now, bounce
        this->_vel.setX(-this->_vel.getX());
    }

    NSprite::update(dt);
}
