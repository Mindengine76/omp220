#include "Window.h"

Window::Window()
{
	windowWidth = 600;
	windowHeight= 400;

	WindowTitle="My MainWindow";
}

Window::~Window()
{

}

bool Window::IsFullScreen()
{
	return IsFullScreen; 
}



