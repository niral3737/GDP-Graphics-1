
//in from a previous stage(vertex shader)
varying vec3 color;
void main()
{
    gl_FragColor = vec4(color, 1.0);
}