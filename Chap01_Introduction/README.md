Chap01_Introduction - redbook
===============

OpenGL redbook Samples <br/>

Chap01_Introduction <br/>
- https://www.glprogramming.com/red/chapter01.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### hello.c <br/>
This is a simple, introductory OpenGL program <br/>
display a white rectangle on a black background <br/>
quit this program when enter ESC key <br/>

display as below <br/>
OpenGL Vender: Intel Inc. <br/>
OpenGL Renderer: Intel(R) HD Graphics 6000  <br/>
OpenGL Version: 2.1 INTEL-14.4.23  <br/>
GLUT Version: 5  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap01_Introduction/result/screebshot_hello.png" width="300" /><br/>


### double.c <br/>
This is a simple double buffered program <br/>
Pressing the left mouse button rotates the rectangle <br/>
Pressing the middle mouse button stops the rotation  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap01_Introduction/result/screenshot_double.png" width="300" /><br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

