#include "../include/defines.h"

int main(void)
{
	t_game game;
	uint32_t last_move_time;
	int	   running = 1;

	init_game(&game);

	while (running)
	{
		handle_input(&game, &running);
		uint32_t current_time = SDL_GetTicks();
		if (current_time - last_move_time >= STARTING_SPEED)  // 1000 ms = 1 second
		{
			move_snake(&game); // Call your function
			last_move_time = current_time;
		}
		render(&game);
		SDL_Delay(16); // ~60 FPS
	}

	cleanup(&game);
	return 0;
}
