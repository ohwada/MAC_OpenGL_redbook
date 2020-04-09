Chap13_Selection - redbook
===============

OpenGL redbook Samples <br/>

Chap13_Selection <br/>
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

### select.c <br/>
This is an illustration of the selection mode and name stack,  <br/>
which detects whether objects which collide 
 with a viewing volume.   <br/>
First, four triangles and a rectangular box representing a viewing volume are drawn  (drawScene routine)  <br/>
The Green triangle and Yellow triangles appear to lie within the viewing volume,  <br/>
but  the Red triangle appears to lie outside it  <br/>
Then the  selection mode is entered (selectObjects routine)  <br/>
Drawing to the screen ceases  <br/>
 To see if any collisions  occur, the four triangles are called  <br/>
In this example,  the Green triangle causes one hit with the name 1, <br/>
and  the Yellow triangles cause one hit with the name 3  <br/>

display as below <br/>
hits = 2 <br/>
 number of names for hit = 1 <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap13_Selection/result/screenshot_select.png" width="300" /><br/>

### picksquare.c <br/>
Use of multiple names and picking are demonstrated <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap13_Selection/result/screenshot_picksquare.png" width="300" /><br/>

A 3x3 grid of squares is drawn.  When the left mouse button is pressed, <br/>
all squares under the cursor position  have their color changed. <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap13_Selection/result/screenshot_picksquare_mouse.png" width="300" /><br/>

### pickdepth.c <br/>
Picking is demonstrated in this program.   <br/>
In rendering mode, three overlapping rectangles are drawn.  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap13_Selection/result/screenshot_pickdepth.png" width="300" /><br/>

When the left mouse button is pressed, selection mode is entered with the picking matrix.   <br/>
Rectangles which are drawn under the cursor position are "picked."   <br/>
Pay special attention to the depth  value range, which is returned. <br/>

display as below, when click Yellow rectangle <br/>
hits = 3 <br/>
 number of names for hit = 1 <br/>
  z1 is 0.333333; z2 is 0.333333 <br/>
   the name is 1  <br/>
 number of names for hit = 1 <br/>
 
### feedback.c <br/>
 This program demonstrates use of OpenGL feedback.   <br/>
First, a lighting environment is set up and a few lines are drawn. <br/>
Then feedback mode is entered, and the same lines are drawn.  <br/>
 The results in the feedback buffer are printed. <br/>

display as below <br/>
GL_LINE_RESET_TOKEN <br/>
  60.00 60.00 0.00 0.84 0.84 0.84 1.00 <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap13_Selection/result/screenshot_feedback.png" width="300" /><br/>


### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

