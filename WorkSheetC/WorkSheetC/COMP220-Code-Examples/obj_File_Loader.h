#pragma once
#include <iostream>
#include <SDL.h>
#include <GL\glew.h>
#include <SDL_opengl.h>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm\glm.hpp>
#include <glm\gtx\transform.hpp>
#include <glm\gtc\type_ptr.hpp>

#include <vector>

class obj_File_Loader
{

public:

	obj_File_Loader();
	~obj_File_Loader();

	bool load_Obj(const char * objFileName, std::vector<glm::vec3 > & out_vertices, std::vector < glm::vec2 > & out_uvs,std::vector < glm::vec3 > & out_normals);


	 
};

