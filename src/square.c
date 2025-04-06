#include "../include/defines.h"

void init_game(t_game *game) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_DisplayID display = SDL_GetPrimaryDisplay();
    const SDL_DisplayMode *mode = SDL_GetCurrentDisplayMode(display);

    game->screen_w = mode->w;
    game->screen_h = mode->h;

    game->window = SDL_CreateWindow("snake", game->screen_w, game->screen_h, SDL_WINDOW_FULLSCREEN);
    game->renderer = SDL_CreateRenderer(game->window, NULL);

    game->square.w = SQUARE_SIZE;
    game->square.h = SQUARE_SIZE;
    game->square.x = (game->screen_w - SQUARE_SIZE) / 2;
    game->square.y = (game->screen_h - SQUARE_SIZE) / 2;
}

void handle_input(t_game *game, int *running) {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_EVENT_QUIT) {
            *running = 0;
        } else if (e.type == SDL_EVENT_KEY_DOWN) {
            switch (e.key.key) {
                case SDLK_ESCAPE: *running = 0; break;
                case SDLK_UP: game->square.y -= SQUARE_SPEED; break;
                case SDLK_DOWN: game->square.y += SQUARE_SPEED; break;
                case SDLK_LEFT: game->square.x -= SQUARE_SPEED; break;
                case SDLK_RIGHT: game->square.x += SQUARE_SPEED; break;
            }
        }
    }
}

void render(t_game *game) {
    SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 255);
    SDL_RenderClear(game->renderer);

    SDL_SetRenderDrawColor(game->renderer, 0, 0, 255, 255);
    SDL_FRect frect = {
        .x = (float)game->square.x,
        .y = (float)game->square.y,
        .w = (float)game->square.w,
        .h = (float)game->square.h
    };
    SDL_RenderFillRect(game->renderer, &frect);

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
    
    // Quit SDL subsystems
    SDL_Quit();
}
