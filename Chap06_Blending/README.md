Chap06_Blending - redbook
===============

OpenGL redbook Samples <br/>

Chap06_Blending <br/>
- http://www.glprogramming.com/red/chapter06.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### aargb.c <br/>
This program draws shows how to draw anti-aliased lines  <br/>
It draws two diagonal lines to form an X <br/>
Green and Blue <br/>
 
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_aargb.png" width="300" /><br/>

when 'r' is typed in the window, 
the lines are rotated in opposite directions  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_aargb_rotate.png" width="300" /><br/>


### alpha.c <br/>
 This program draws several overlapping filled polygons <br/>
to demonstrate the effect order has on alpha blending results <br/>
draw two triangles, Yellow and Teal( Greenish Blue) <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_alpha.png" width="300" /><br/>

Use the 't' key to toggle the order of drawing polygons <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_alpha_toggle.png" width="300" /><br/>

### alpha3D.c <br/>
This program demonstrates how to intermix opaque and
alpha blended polygons in the same scene, by using 
glDepthMask  <br/>
draw Yellow Sphere and Blue Cube  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_alpha3D.png" width="300" /><br/>

Press the 'a' key to animate moving the transparent object through the opaque object  <br/>
Press  the 'r' key to reset the scene <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_alpha3D_animate.png" width="300" /><br/>

###  fog.c <br/>
This program draws 5 red spheres, each at a different 
 z distance from the eye, in different types of fog  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_fog.png" width="300" /><br/>

Pressing the f key chooses between 3 types of fog <br/> 
exponential, exponential squared, and linear <br/>
In this program   there is a fixed density value, as well as fixed start and end values for the linear fog  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_fog_fkey.png" width="300" /><br/>

### polyoff.c <br/>
 This program demonstrates polygon offset to draw a shaded
polygon  <br/>
and its wireframe counterpart without ugly visual
artifacts ("stitching")  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_polyoff.png" width="300" /><br/>

spin sphere when press mouse button  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_polyoff_mouse.png" width="300" /><br/>

change distance with glTranslatef , when type 't'  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_polyoff_tdist.png" width="300" /><br/>

change polyfactor with glPolygonOffset , when type 'f'  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_polyoff_polyfactor.png" width="300" /><br/>

change polyunits with glPolygonOffset , when type 'u'  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_polyoff_polyunits.png" width="300" /><br/>



### blendeqn.c <br/>
Demonstrate the different blending functions available with the
OpenGL imaging subset  <br/>
This program demonstrates use of the glBlendEquation() call  <br/>
draw White rectangle in Yellow backgroud <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_blendeqn.png" width="300" /><br/>



The following keys change the selected blend equation function:
- key 'a'  ->  GL_FUNC_ADD <br/>
- key's'  ->  GL_FUNC_SUBTRACT <br/>
-  key 'r'  ->  GL_FUNC_REVERSE_SUBTRACT <br/>
- key 'm'  ->  GL_MIN <br/>
- key 'x'  ->  GL_MAX <br/>

key 'a'  ->  GL_FUNC_ADD <br/>
draw White rectangle in Yellow backgroud <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_blendeqn_add.png" width="300" /><br/>

key's'  ->  GL_FUNC_SUBTRACT <br/>
draw Blue rectangle in Yellow backgroud <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_blendeqn_subtract.png" width="300" /><br/>

key 'r'  ->  GL_FUNC_REVERSE_SUBTRACT <br/>
draw Yellow rectangle in Yellow backgroud <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_blendeqn_reverse_subtract.png" width="300" /><br/>

key 'm'  ->  GL_MIN <br/>
draw Black rectangle in Yellow backgroud <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_blendeqn_min.png" width="300" /><br/>

key 'x'  ->  GL_MAX <br/>
draw White rectangle in Yellow backgroud <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_blendeqn_max.png" width="300" /><br/>

### multisamp.c <br/>
This program draws shows how to use multisampling <br/>
to draw anti-aliased geometric primitives The same display list <br/>
a pinwheel of triangles and lines of varying widths, is rendered twice <br/>
Multisampling is enabled when the left side is drawn   <br/>
Multisampling is disabled when the right side is drawn  <br/>
draw Teal pinwheel of triangles in Orange and Black checker background <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_multisamp.png" width="300" /><br/>

change to Black background, when type 'b' <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_multisamp_background.png" width="300" /><br/>

### fogcoord.c <br/>
This program demonstrates the use of explicit fog coordinates  <br/>
You can press the keyboard and change 
the fog coordinate value at any vertex  <br/>
You can also switch between using explicit fog coordinates  <br/>
and the default fog generation mode  <br/>

draw Orange triangle in darkcyan backgroud <br/>
and darkcyan fog  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_fogcoord.png" width="300" /><br/>


Pressing the 'f' and 'b' keys move the viewer forward and backwards   <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_fogcoord_foreground.png" width="300" /><br/>


Pressing 'c' initiates the default fog generation   <br/>
Pressing capital 'C' restores explicit fog coordinates   <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_fogcoord_default.png" width="300" /><br/>

 Pressing '1', '2', '3', '8', '9', and '0' add or subtract from the fog coordinate values at one of the three vertices of the triangle  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_fogcoord_1.png" width="300" /><br/>


### aapoly.c <br/>
This program draws filled polygons with antialiased  edges.   <br/>
The special GL_SRC_ALPHA_SATURATE blending function is used. <br/>
 Pressing the 't' key turns the antialiasing on and off. <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap06_Blending/result/screenshot_aapoly.png" width="300" /><br/>

### Note 
removed the following two codes <br/>
because latest macOS does not support index color  <br/>
- aaindex.c <br/>
- fogindex.c <br/>


### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

