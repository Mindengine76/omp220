#include<iostream>
#include<SDL.h>
#include<SDL_opengl.h>
#include<iostream>
#include"Init.h"

using namespace std;

class Init::Init
{

};

Init::~Init()
{

};

int Init::Init_SDL()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "SDL error", SDL_GetError(), NULL);
		SDL_Quit();
		return 1;

	}
};

