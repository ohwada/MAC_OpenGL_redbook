Chap11_Tessellators - redbook
===============

OpenGL redbook Samples <br/>

Chap11_Tessellators <br/>
- https://www.glprogramming.com/red/chapter11.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### tess.c <br/>
This program demonstrates polygon tessellation  <br/>
Two tesselated objects are drawn  <br/>
The first is a Rectangle with a triangular hole  <br/>
The second is a smooth shaded, self-intersecting Star  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap11_Tessellators/result/screenshot_tess.png" width="300" /><br/>

### quadric.c <br/>
 This program demonstrates the use of some of the gluQuadric*
routines  <br/>
Quadric objects are created with some quadric
properties and the callback routine to handle errors  <br/>
Note that the cylinder has no top or bottom and the circle
 has a hole in it  <br/>
draw White Sphere, White Cylinder, Yellow Quadric, and Cyan Quadric in Black background <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap11_Tessellators/result/screenshot_quadric.png" width="300" /><br/>

### tesswind.c <br/>
This program demonstrates the winding rule polygon 
tessellation property  <br/>
Four tessellated objects are drawn,  <br/>
each with very different contours  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap11_Tessellators/result/screenshot_tesswind.png" width="300" /><br/>

When the w key is pressed,  
the objects are drawn with a different winding rule  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap11_Tessellators/result/screenshot_tesswind_winding.png" width="300" /><br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

