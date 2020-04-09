Chap12_Evaluators - redbook
===============

OpenGL redbook Samples <br/>

Chap12_Evaluators <br/>
https://www.glprogramming.com/red/chapter12.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### bezcurve.c <br/>		
This program uses evaluators to draw a Bezier curve <br/>	
draw White Bezier curve, Yellow controll points in Black background  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_bezcurve.png" width="300" /><br/>

### bezmesh.c <br/>	
This program renders a lighted, filled Bezier surface, <br/>
using two-dimensional evaluators <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_bezmesh.png" width="300" /><br/>

### bezsurf.c <br/>	
This program renders a wireframe Bezier surface, <br/>
using two-dimensional evaluators  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_bezsurf.png" width="300" /><br/>

### surface.c <br/>
This program draws a NURBS( Non-Uniform Rational B-Spline) surface in the shape of a symmetrical hill  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_surface.png" width="300" /><br/>

The 'c' keyboard key allows you to toggle the visibility of the control points themselves <br/>
 Note that some of the control points are hidden by the  
surface itself <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_surface_control.png" width="300" /><br/>

### surfpoints.c <br/>
This program is a modification of the earlier surface.c program.   <br/> 
The vertex data are not directly rendered,  <br/>
but are instead passed to the callback function  <br/>
The values of the tessellated vertices are printed  out there <br/>
print as bellow <br/>
glBegin(GL_TRIANGLE_FAN) <br/>
glNormal3f (0.000, 0.597, 0.802) <br/>
glVertex3f (-2.455, 3.000, -3.000) <br/>

This program draws a NURBS surface in the shape of a symmetrical hill <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_surfpoints.png" width="300" /><br/>

The 'c' keyboard key allows you to toggle the visibility of the control points themselves  <br/>
Note that some of the control points are hidden by the surface itself  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_surfpoints_control.png" width="300" /><br/>

### trim.c <br/>
This program draws a NURBS surface in the shape of a symmetrical hill, <br/>
using both a NURBS curve and pwl(piecewise linear) curve to trim part of the surface <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_trim.png" width="300" /><br/>

### texturesurf.c <br/>
This program uses evaluators to generate a curved surface and automatically generated texture coordinates  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap12_Evaluators/result/screenshot_texturesurf.png" width="300" /><br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

