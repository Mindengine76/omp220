#version 330 core

// look at main. cpp for the vertex attribute pointer

uniform vec3 changeLocation;
layout(location = 0) in vec3 vertexPos;

void main(){

//swizzle used here

gl_Position= vec4(vertexPos, 1.0);

}