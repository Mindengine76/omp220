#pragma once
#include <iostream>
#include <SDL.h>
#include <GL\glew.h>
#include <SDL_opengl.h>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm\glm.hpp>
#include <glm\gtx\transform.hpp>
#include <glm\gtc\type_ptr.hpp>

#include "Window.h"
#include "init.h"

#include "Shaders.h"
#include "Vertex.h"
#include "Texture.h"
#include "Model.h"
#include "Mesh.h"
#include "Light.h"
#include "Timer.h"

using namespace glm;

class GameMorph
 {

  public:
	GameMorph();
	~GameMorph();

	void gameLoop();
	void initGame(); 


 private:
	 SDL_Renderer* renderer = NULL;
	 SDL_Window* mainWindow = nullptr;
	 SDL_GLContext gl_Context = nullptr;
	 bool gameRunning = true;

	 Window window;
	 //initialise init;




};
