#version 330 core

// look at main. cpp for the vertex attribute pointer

uniform vec3 changeLocation;
uniform mat4 modelMatrix;
uniform mat4 ViewMatrix;
uniform mat4 ProjectionMatrix;


layout(location = 0) in vec3 vertexPos;

void main()
{

mat4 MVPMatrix = ProjectionMatrix* ViewMatrix* modelMatrix; 



vec4 mvpPosition = MVPMatrix*vec4(vertexPos, 1.0f);

//gl_Position = vec4(vertexPos, 1.0f);

gl_Position= mvpPosition; 

}



