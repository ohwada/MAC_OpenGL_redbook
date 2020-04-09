Chap04_Color - redbook
===============

OpenGL redbook Samples <br/>

Chap04_Color <br/>
- https://www.glprogramming.com/red/chapter04.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### smooth.c <br/>
This program demonstrates smooth shading  <br/>
A smooth shaded polygon is drawn in a 2-D projection  <br/>
draw a triangle which vertex colors are Red / green / Blue  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap01_Introduction/result/screenshot_smooth.png" width="300" /><br/>


### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

