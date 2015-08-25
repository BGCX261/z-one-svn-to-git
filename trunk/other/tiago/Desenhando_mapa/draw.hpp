#ifndef DRAW_HPP
#define DRAW_HPP

#include "SDL/SDL.h"
#include "map.hpp"


void drawMap(Map map, SDL_Surface* screen);
void drawImg(SDL_Surface* img, SDL_Surface* screen, int x, int y);

#endif