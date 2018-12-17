#pragma once
#include <iostream>
#include <SDL.h>
#include <GL\glew.h>
#include <SDL_opengl.h>

#include "Window.h"

class Init
{
public:
	SDL_Window* initSDLWindow();
	SDL_Renderer* initSDLRenderer();
	int initSDL();
	SDL_GLContext initContext(SDL_Window* mainWindow);
	bool SetOpenGLAttributes();
	int initeGlew(SDL_Window* mainWindow);

	Init();
	~Init();

private:
	Window mainWindow;
	SDL_Window* mainWindow = nullptr;
	SDL_Renderer* renderer = NULL;
	SDL_GLContext gl_Context = nullptr;









};