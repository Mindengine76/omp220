#version 330 core

layout(location = 0) in vec3 vertexPosition;
layout(location = 1) in vec4 vertexFinalPosition;

uniform mat4 modelMatrix;
uniform mat4 viewMatrix;
uniform mat4 projectionMatrix;

out vec4 vertexColoursOut;

uniform float morphBlendFactor=0.0f;



void main(){

	vec3 morphPosition= mix(vertexPosition,vertexFinalPosition.xyz,morphBlendFactor);
	//vec3 morphPosition=vertexFinalPosition.xyz;
	
	mat4 mvpMatrix=projectionMatrix*viewMatrix*modelMatrix;

	vec4 mvpPosition=mvpMatrix*vec4(morphPosition.xyz,1.0f);
	
	vertexColoursOut=vec4(1.0f);

	gl_Position=mvpPosition;
}