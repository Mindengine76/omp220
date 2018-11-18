#include"Mesh.h"




Mesh::Mesh() 

{
	m_VBO = 0;
	m_EBO = 0;
	m_VAO = 0;

	m_NumberofVerts =0;
	m_NumberOfIndidces;

}

Mesh::~Mesh()
{
	Destroy();
}

void Mesh::copyMeshData(std::vector<Vertex>& verticies, std::vector<unsigned int>& indices)
{

	glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
	glBufferData(GL_ARRAY_BUFFER, verticies.size()*sizeof(Vertex), verticies.data(), GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size()*sizeof(unsigned int), verticies.data(), GL_STATIC_DRAW);


	glBindVertexArray(m_VAO);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(
		0,                 
		3,                  
		GL_FLOAT,          
		GL_FALSE,           
		sizeof(Vertex),                  // stride
		(void*)0           
	);



	glEnableVertexAttribArray(1);
	glVertexAttribPointer(
		1,
		4,
		GL_FLOAT,
		GL_FALSE,
		sizeof(Vertex),                  // stride
		(void*)(3 * sizeof(float))
	);


	glEnableVertexAttribArray(2);
	glVertexAttribPointer(
		2,
		2,
		GL_FLOAT,
		GL_FALSE,
		sizeof(Vertex),
		(void*)(7 * sizeof(float))
	);


	m_NumberofVerts = verticies.size(); 
	m_NumberOfIndidces = indices.size();

}


void Mesh::init()
{
	//Vertex array Object
	glGenVertexArrays(1, &m_VAO);
	glBindVertexArray(m_VAO);

	//vertex buffer object
	glGenBuffers(1, &m_VBO);
	glBindBuffer(GL_ARRAY_BUFFER, m_VBO);

	//element buffer object
	glGenBuffers(1, &m_EBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_EBO);


}

void Mesh::Destroy()
{
	glDeleteVertexArrays(1, &m_VAO);
	glDeleteBuffers(1, &m_VBO); 
	glDeleteBuffers(1, &m_EBO);
}

void Mesh::render()

{
	  glBindVertexArray(m_VAO);
	  glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
	  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_EBO);
	
	glDrawElements(GL_TRIANGLES, m_NumberOfIndidces, GL_UNSIGNED_INT, (void*)0);

}
