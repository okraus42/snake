#include "../include/defines.h"

int main(void)
{
	t_game game;
	int	   running = 1;

	init_game(&game);

	while (running)
	{
		handle_input(&game, &running);
		render(&game);
		SDL_Delay(16); // ~60 FPS
	}

	cleanup(&game);
	return 0;
}
