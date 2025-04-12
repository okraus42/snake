#include "../include/defines.h"
#include <stdlib.h>
#include <strings.h>
#include <stdio.h> //debug printf

void	place_foods(t_game *game)
{
	uint32_t free = 0U;

	for (uint32_t y = 0U; y < BOARD_HEIGHT; y++)
	{
		for (uint32_t x = 0U; x < BOARD_WIDTH; x++)
		{
			if (game->board[y][x] == 0U)
				free++;
		}
	}
	for (uint32_t f = 0; f < FOODS; f++)
	{
		if (game->food[f].is_placed == false && free != 0U)
		{
			uint32_t	p = 0U;
			uint32_t	r = rand() % free;
			for (uint32_t y = 0U; y < BOARD_HEIGHT; y++)
			{
				for (uint32_t x = 0U; x < BOARD_WIDTH; x++)
				{
					if (game->board[y][x] == 0U)
						p++;
					if (p == r)
					{
						game->food[f].is_placed = true;
						game->food[f].y = y;
						game->food[f].x = x;
					}
				}
			}
		}
	}
}

void	fill_board(t_game *game)
{
	bzero(game->board, BOARD_HEIGHT * BOARD_WIDTH * sizeof(uint8_t));
	for (uint32_t p = 0; p < PLAYERS; p++)
	{
		for (uint32_t s = 0; s < game->snake[p].len; s++)
		{
			game->board[game->snake[p].segment[s].y][game->snake[p].segment[s].x] |= p + 1;
		}
	}
	for (uint32_t f = 0; f < FOODS; f++)
	{
		if (game->food[f].is_placed)
			game->board[game->food[f].y][game->food[f].x] |= FOOD;
	}
	//fill with food as well
}

void init_game(t_game *game) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_DisplayID display = SDL_GetPrimaryDisplay();
    const SDL_DisplayMode *mode = SDL_GetCurrentDisplayMode(display);
	bzero(game, sizeof(t_game));
    game->screen_w = mode->w;
    game->screen_h = mode->h;

    game->window = SDL_CreateWindow("snake", game->screen_w, game->screen_h, SDL_WINDOW_FULLSCREEN);
    game->renderer = SDL_CreateRenderer(game->window, NULL);


	game->screen = malloc(game->screen_w * game->screen_h * sizeof(uint32_t));
	game->texture = SDL_CreateTexture(
		game->renderer,
		SDL_PIXELFORMAT_ARGB8888, //why?
		SDL_TEXTUREACCESS_STREAMING,
		game->screen_w,
		game->screen_h
	);
	game->offset_y = (game->screen_h - BOARD_HEIGHT * SQUARE_SIZE) / 2;
	game->offset_x = (game->screen_w - BOARD_WIDTH * SQUARE_SIZE) / 2;
	game->snake[0].dir = RIGHT;
	game->snake[0].len = 4U;
	for (uint32_t i = 0U; i < game->snake[0].len; i++)
	{
		game->snake[0].segment[i].x = 15 - i;
		game->snake[0].segment[i].y = 15;
	}
	fill_board(game);
	place_foods(game);
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

//render head
//hide tail (optional)
//render and generate food
//make it nicer with one pixel gaps but connected later

void	render_food(t_game *game)
{
	for (uint32_t f = 0U; f < FOODS; f++)
	{
		if (game->food[f].is_placed == false)
			continue ;
		uint32_t	start_y = game->food[f].y * SQUARE_SIZE + 1;
		uint32_t	start_x = game->food[f].x * SQUARE_SIZE + 1;
		uint32_t	end_x = (game->food[f].x * SQUARE_SIZE) + SQUARE_SIZE - 1;
		uint32_t	end_y = (game->food[f].y * SQUARE_SIZE) + SQUARE_SIZE - 1;

		for (uint32_t y = start_y; y < end_y; y++)
		{
			for (uint32_t x = start_x; x < end_x; x++)
			{
				if ((y + x) & 1)
					game->screen[((y + game->offset_y) * game->screen_w + x + game->offset_x)] |= 0xFFFFFFFFU; //use food colour here
			}
		}
	}
}

void	render_snake_segment(t_game *game, uint32_t snake, uint32_t segment)
{
	printf("%u, %u %u %u\n", snake, segment, game->snake[snake].segment[segment].x, game->snake[snake].segment[segment].y);
	uint32_t	start_y = game->snake[snake].segment[segment].y * SQUARE_SIZE + 1;
	uint32_t	start_x = game->snake[snake].segment[segment].x * SQUARE_SIZE + 1;
	uint32_t	end_x = (game->snake[snake].segment[segment].x * SQUARE_SIZE) + SQUARE_SIZE - 1;
	uint32_t	end_y = (game->snake[snake].segment[segment].y * SQUARE_SIZE) + SQUARE_SIZE - 1;

	if ((segment > 0U
			&& game->snake[snake].segment[segment - 1].x == game->snake[snake].segment[segment].x - 1)
		|| (segment < game->snake[snake].len - 1
			&& game->snake[snake].segment[segment + 1].x == game->snake[snake].segment[segment].x - 1))
		--start_x;
	if ((segment > 0U
			&& game->snake[snake].segment[segment - 1].x == game->snake[snake].segment[segment].x + 1)
		|| (segment < game->snake[snake].len - 1
				&& game->snake[snake].segment[segment + 1].x == game->snake[snake].segment[segment].x + 1))
		++end_x;
	if ((segment > 0U
			&& game->snake[snake].segment[segment - 1].y == game->snake[snake].segment[segment].y - 1)
		|| (segment < game->snake[snake].len - 1
			&& game->snake[snake].segment[segment + 1].y == game->snake[snake].segment[segment].y - 1))
		--start_y;
	if ((segment > 0U
			&& game->snake[snake].segment[segment - 1].y == game->snake[snake].segment[segment].y + 1)
		|| (segment < game->snake[snake].len - 1
				&& game->snake[snake].segment[segment + 1].y == game->snake[snake].segment[segment].y + 1))
		++end_y;
	for (uint32_t y = start_y; y < end_y; y++)
	{
		for (uint32_t x = start_x; x < end_x; x++)
		{
			game->screen[((y + game->offset_y) * game->screen_w + x + game->offset_x)] |= 0xFF0000FFU; //use snake colour here
		}
	}
}

void	clear_screen(t_game *game)
{
	for (uint32_t y = 0U; y < game->screen_h; y++)
	{
		for (uint32_t x = 0U; x < game->screen_w; x++)
		{
			game->screen[y * game->screen_w + x] = 0xFF111111U;
		}
	}
	for (uint32_t y = game->offset_y; y < game->screen_h - game->offset_y; y++)
	{
		for (uint32_t x = game->offset_x; x < game->screen_w - game->offset_x; x++)
		{
			game->screen[y * game->screen_w + x] = 0x0U;
		}
	}
}

void	render_snake(t_game *game, int snake)
{
	for (uint32_t i = 0U; i < game->snake[snake].len; i++)
	{
		render_snake_segment(game, snake, i);
	}
}

void	render_snake_head(t_game *game, int snake)
{
	render_snake_segment(game, snake, 0);
}

// void	hide_snake_tail(t_game *game, int snake)
// {
// 	if (game->snake[snake].has_eaten)
// 		game->snake[snake].has_eaten = false;
// 	else
// 	{
		
// 	}
// }

void render(t_game *game) {
    // SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 255);
	clear_screen(game);
	render_snake(game, 0U);
	render_food(game);
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
	for (uint32_t i = game->snake[0].len; i > 0U; i--)
	{
		game->snake[0].segment[i].y = game->snake[0].segment[i - 1].y;
		game->snake[0].segment[i].x = game->snake[0].segment[i - 1].x;
	}
	game->snake[0].segment[0].y = y;
	game->snake[0].segment[0].x = x;
}