
#include <memory>

#include "deps.h"
#include "reg.h"

#include "states/gamestate.h"

int main(int argc, char **argv) {
    std::shared_ptr<NGame> game(new NGame());

    game->platform_init(argc, argv);

    // Initialize NGame at max screen size, 60FPS target
    game->init(0, 0, 60);
    Reg::game = game;
    game->switch_state(new GameState());
    game->start();

    return 0;
}
