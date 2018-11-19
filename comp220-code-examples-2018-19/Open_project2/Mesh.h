#pragma once


#include<assimp\Importer.hpp>
#include<assimp\scene.h>
#include<assimp\postprocess.h>


#include<string>
#include "GL/glew.h"
#include<SDL_opengl.h>

#include<vector>
#include"vertex.h"



class Mesh 
{

public: 

	Mesh();
	~Mesh();

	void copyMeshData(std::vector<Vertex>& verticies, std::vector<unsigned int>& indices);
	void init();
	void Destroy();
	void render();
	

private: 

	GLuint m_VBO; //vertex buffer object
	GLuint m_EBO;// vertex element buffer object
	GLuint m_VAO;//vertex array object
	
	unsigned int m_NumberofVerts;
	unsigned int m_NumberOfIndidces;

	

};



