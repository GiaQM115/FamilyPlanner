/**
 * controls window graphics for program
 */

#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <stdio.h>
#include "planner.h"

const int HEIGHT = 480;
const int WIDTH = 640;

SDL_Window* window = NULL;
SDL_Surface* surface = NULL;

// name:	drawMain
void drawMain(char* fam) {
	
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("Error: %s\n",SDL_GetError());
	}
	
	window = SDL_CreateWindow(fam, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

	if(window == NULL) {
		printf("Error: %s\n", SDL_GetError());
	}
	else {
		surface = SDL_GetWindowSurface(window);
		SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF));
		SDL_UpdateWindowSurface(window);
	}

	SDL_Delay(5000);

	return;
}
