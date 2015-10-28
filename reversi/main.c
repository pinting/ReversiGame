#include "reversi.h"

int main(void)
{
	Game game;

	srand((unsigned int)time(NULL));

	game = game_new();
	game_import(&game, CONFIG);
	tui_start(&game);
	game_free(&game);

	return 0;
}