#include "init.h"
#include "window.h"

Init::Init() 
{
	initSDL();
}

Init::~Init()
{
}


int Init::initSDL()
{
	if (SDL_Init(SDL_INIT_VIDEO) > 0)
	{
		std::cout << "Cannot initLISE sdl" << SDL_GetError() << std::endl;
		return -1;
	}

	return 0;
}

SDL_Window * Init::initSDLWindow()
{
	mainWindow = SDL_CreateWindow(window.WindowTitle, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, window.screenWidth, window.screenHeight, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
	if (mainWindow = nullptr)
	{
		std::cout << "Cannot open window" << SDL_GetError() << std::endl;
		SDL_Quit();
		return nullptr;
	}
	return mainWindow;
}


SDL_Renderer * Init::initSDLRenderer()
{
	renderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE);
	if (renderer == NULL)
	{
		std::cout << "Cannot initalise renderer" << SDL_GetError << std::endl;
		SDL_Quit();
		return nullptr;

	}
	return renderer;
}

SDL_GLContext Init::initContext(SDL_Window* mainWindow)
{
	SDL_GLContext GL_Context = SDL_GL_CreateContext(mainWindow);
	if (GL_Context == nullptr)
	{
		std::cout << "Context init failed, shit happens" << std::endl;
		SDL_DestroyWindow(mainWindow);
		SDL_Quit();

		return nullptr;

	}
	return GL_Context;
}


//conditions for video cards
bool Init::SetOpenGLAttributes()
{
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	return true;


}

int Init::initeGlew(SDL_Window*mainWindow)
{
	glewExperimental = GL_TRUE;
	GLenum BigMistake = glewInit();

	if(BigMistake != GLEW_OK)
	{
		std::cout << "Glew not initialised....Eroorrorrrr: " << glewGetErrorString(BigMistake) << std::endl;

		SDL_DestroyWindow(mainWindow);
		SDL_Quit();
		return -1;
	}
	return 0;

}

