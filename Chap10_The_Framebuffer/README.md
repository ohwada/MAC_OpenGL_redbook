Chap10_The_Framebuffer - redbook
===============

OpenGL redbook Samples <br/>

Chap10_The_Framebuffer <br/>
- https://www.glprogramming.com/red/chapter10.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### stencil.c <br/>
 This program demonstrates use of the stencil buffer for masking nonrectangular regions  <br/>
Whenever the window is redrawn <br/>
a value of 1 is drawn into a diamond-shaped region in the stencil buffer <br/>
Elsewhere in the stencil buffer, the value is 0 <br/>
Then a Blue Sphere is drawn where the stencil value is 1 <br/>
and Yellow Torus are drawn where the stencil value is not 1 <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap10_The_Framebuffer/result/screenshot_stencil.png" width="300" /><br/>

### accanti.c <br/>
Use the accumulation buffer to do full-scene antialiasing
on a scene with orthographic parallel projection  <br/>
draw Yellow Torus, Teal Cube, Purple Sphere, Brown Octahedron in Black background <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap10_The_Framebuffer/result/screensht_accanti.png" width="300" /><br/>

### accpersp.c <br/>
Use the accumulation buffer to do full-scene antialiasing
on a scene with perspective projection  <br/>
using the special routines accFrustum() and accPerspective() <br/>
draw Yellow Torus, Teal Cube, Purple Sphere, Brown Octahedron in Black background <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap10_The_Framebuffer/result/screenshot_accpersp.png" width="300" /><br/>

### dof.c <br/>
This program demonstrates use of the accumulation buffer to
create an out-of-focus depth-of-field effect  <br/>
The teapots are drawn several times into the accumulation buffer  <br/>
The viewing volume is jittered, except at the focal point, where
the viewing volume is at the same position, each time <br/>
In this case, the gold teapot remains in focus  <br/>
draw ruby, gold, silver, emerald, and cyan teapots in Black background   <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap10_The_Framebuffer/result/screenshot_dof.png" width="300" /><br/>


### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

