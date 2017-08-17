#include "deps.h"

class GameState : public NState {
  private:
    NSprite *ball;

  public:
    virtual void create();
    virtual void update(float dt);
};
