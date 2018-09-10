uniform mat4 MVP;

attribute vec3 vCol; //xyz
attribute vec3 vPos; //rgb

// this is going out to the next shader
varying vec3 color;

void main()
{
    gl_Position = MVP * vec4(vPos, 1.0);
    color = vCol;
}