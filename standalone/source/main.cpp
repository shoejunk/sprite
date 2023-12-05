import stk.sprite;

import lunar_rescue.game;

using namespace lunar_rescue;
using namespace stk;

int main()
{
	c_game game{ 1280, 720, "Game" };
	c_rocket const& rocket = game.state().rocket();
	game.sprites().make_sprite("r"_h, "data/rocket.png", 0.f, 0.f);
	game.sprites().make_sprite("r2"_h, "data/rocket.png", 200.f, 0.f);
	game.run();
	return 0;
}
