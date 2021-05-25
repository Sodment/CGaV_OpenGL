#version 330
layout (location = 0) in vec2 aPos;
layout (location = 1) in vec2 aTexCoords;

out vec2 TexCoords;
uniform float Time;
uniform  float speed;

void main()
{
    float strength = 0.05;
    vec2 pos = vec2(aTexCoords.x + (speed *sin(Time) * strength), aTexCoords.y + (speed* cos(Time) * strength));        
    TexCoords = pos;
    gl_Position = vec4(aPos.x, aPos.y, 0.0, 1.0); 
}  