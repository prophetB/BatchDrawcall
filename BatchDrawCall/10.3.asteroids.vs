#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 2) in vec2 aTexCoords;
layout (location = 3) in mat4 aInstanceMatrix;

out vec2 TexCoords;

uniform mat4 projection;
uniform mat4 view;
uniform mat4 model;
void main()
{
    TexCoords = aTexCoords;
    //普通渲染
    gl_Position =projection * view *model* vec4(aPos, 1.0f); 
    //实例和间接渲染
   // gl_Position =projection * view * aInstanceMatrix* vec4(aPos, 1.0f); 
}