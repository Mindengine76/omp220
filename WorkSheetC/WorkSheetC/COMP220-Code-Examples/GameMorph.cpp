#include "GameMorph.h"


GameMorph::GameMorph()
{

}

GameMorph::~GameMorph()
{

}

GameMorph::initGame()
{

}

void GameMorph::gameLoop()
{

}

void GameMorph::initGame()
{
	bool inDevelopMode = false;

	//Initalise random seed
	std::srand(time(NULL));

	//Initialise times
	float lastTime = 0;
	float tickTime = 0;
	float deltaTime = 0;

	//Initalise the SDL components
	mainWindow = Init.initSDLWindow();
	renderer = init.initSDLRenderer();

	//Initalise OpenGL 
	init.SetOpenGLAttributes();
	gl_Context = init.initContext(mainWindow);
	init.initGlew(mainWindow);
}