#include "../include/defines.h"
#include <stdlib.h>
#include <strings.h>

void init_game(t_game *game) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_DisplayID display = SDL_GetPrimaryDisplay();
    const SDL_DisplayMode *mode = SDL_GetCurrentDisplayMode(display);
	bzero(game, sizeof(t_game));
    game->screen_w = mode->w;
    game->screen_h = mode->h;

    game->window = SDL_CreateWindow("snake", game->screen_w, game->screen_h, SDL_WINDOW_FULLSCREEN);
    game->renderer = SDL_CreateRenderer(game->window, NULL);

    // game->square.w = SQUARE_SIZE;
    // game->square.h = SQUARE_SIZE;
    game->square.x = 10;
    game->square.y = 15;
	game->screen = malloc(game->screen_w * game->screen_h * sizeof(uint32_t));
	game->texture = SDL_CreateTexture(
		game->renderer,
		SDL_PIXELFORMAT_ARGB8888, //why?
		SDL_TEXTUREACCESS_STREAMING,
		game->screen_w,
		game->screen_h
	);

	game->snake[0].dir = RIGHT;
	game->snake[0].segment[0].x = 300;
	game->snake[0].segment[0].y = 300;
}

void handle_input(t_game *game, int *running) {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_EVENT_QUIT) {
            *running = 0;
        } else if (e.type == SDL_EVENT_KEY_DOWN) {
            switch (e.key.key) {
                case SDLK_ESCAPE: *running = 0; break;
                case SDLK_UP: game->snake[0].last_key = SDLK_UP; break;
                case SDLK_DOWN: game->snake[0].last_key = SDLK_DOWN; break;
                case SDLK_LEFT: game->snake[0].last_key = SDLK_LEFT; break;
                case SDLK_RIGHT: game->snake[0].last_key = SDLK_RIGHT; break;
            }
        }
    }
}

void	render_snake(t_game *game)
{
	for (uint32_t y = 0U; y < game->screen_h; y++)
	{
		for (uint32_t x = 0U; x < game->screen_w; x++)
		{
			if (x > (game->snake[0].segment[0].x * SQUARE_SIZE) && x <= (game->snake[0].segment[0].x * SQUARE_SIZE) + SQUARE_SIZE
				&& y > (game->snake[0].segment[0].y * SQUARE_SIZE) && y <= (game->snake[0].segment[0].y * SQUARE_SIZE) + SQUARE_SIZE)
				game->screen[y * game->screen_w + x] = 0xFF0000FFU;
			else
				game->screen[y * game->screen_w + x] = 0x0U;
		}
	}
}

void render(t_game *game) {
    // SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 255);
	render_snake(game);
	SDL_UpdateTexture(game->texture, NULL, game->screen, game->screen_w * sizeof(uint32_t));
    SDL_RenderClear(game->renderer); // really needed

	SDL_RenderTexture(game->renderer, game->texture, NULL, NULL);
    // SDL_SetRenderDrawColor(game->renderer, 0, 0, 255, 255);
    // SDL_FRect frect = {
    //     .x = (float)game->square.x,
    //     .y = (float)game->square.y,
    //     .w = (float)game->square.w,
    //     .h = (float)game->square.h
    // };
    // SDL_RenderFillRect(game->renderer, &frect);

    SDL_RenderPresent(game->renderer);
}

void cleanup(t_game *game) {
    // Destroy renderer and window
    if (game->renderer) {
        SDL_DestroyRenderer(game->renderer);
    }
    if (game->window) {
        SDL_DestroyWindow(game->window);
    }
	if (game->texture) {
        SDL_DestroyTexture(game->texture);
    }
	free(game->screen);
    
    // Quit SDL subsystems
    SDL_Quit();
}

void move_snake(t_game *game)
{
	uint32_t	y = game->snake[0].segment[0].y;
	uint32_t	x = game->snake[0].segment[0].x;
	switch (game->snake[0].last_key) {
		case SDLK_UP:
			if (game->snake[0].dir & HORIZONTAL)
				game->snake[0].dir = UP;
			break;
		case SDLK_DOWN:
			if (game->snake[0].dir & HORIZONTAL)
				game->snake[0].dir = DOWN;
			break;
		case SDLK_LEFT:
			if (game->snake[0].dir & VERTICAL)
				game->snake[0].dir = LEFT;
			break;
		case SDLK_RIGHT:
			if (game->snake[0].dir & VERTICAL)
				game->snake[0].dir = RIGHT;
			break;
		default:
			break;
	}

	switch (game->snake[0].dir) {
		case UP: y = (y - 1) & (BOARD_WIDTH - 1); break;
		case DOWN: y = (y + 1) & (BOARD_WIDTH - 1); break;
		case LEFT: x = (x - 1) & (BOARD_WIDTH - 1); break;
		case RIGHT: x = (x + 1) & (BOARD_WIDTH - 1); break;
		default: break;
	}
	game->snake[0].segment[0].y = y;
	game->snake[0].segment[0].x = x;
}