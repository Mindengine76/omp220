#version 330 core

// look at main. cpp for the vertex attribute pointer

uniform vec3 changeLocation;
uniform mat4 modelMatrix;

layout(location = 0) in vec3 vertexPos;

void main(){

gl_Position= modelMatrix*vec4(vertexPos, 1.5f);

}



