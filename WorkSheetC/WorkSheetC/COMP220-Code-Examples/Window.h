#pragma once
#include <SDL.h>
#include <iostream>



class Window
{
	Window();
	~Window();

public:

	int windowWidth;
	int windowHeight;
	bool IsFullScreen(); 
	
	std::string WindowTitle; 

};