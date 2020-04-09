Chap03_Viewing - redbook
===============

OpenGL redbook Samples <br/>

Chap03_Viewing <br/>
- https://www.glprogramming.com/red/chapter03.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### cube.c <br/>
This program demonstrates a single modeling transformation <br/>
glScalef() and a single viewing transformation, gluLookAt() <br/>
A wireframe cube is rendered <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_cube.png" width="300" /><br/>

### model.c <br/>
This program demonstrates modeling transformations <br/>
display one solid line triangle<br/>
and three rotated wavy line triangles <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_model.png" width="300" /><br/>

### clip.c <br/>
This program demonstrates arbitrary clipping planes <br/>
display clipping WireSphere  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_clip.png" width="300" /><br/>

### robot.c <br/>
This program shows how to composite modeling transformations <br/>
 to draw translated and rotated hierarchical models  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_robot.png" width="300" /><br/>

Interaction:  pressing the s and e keys (shoulder and elbow) <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_robot_shoulder.png" width="300" /><br/>

### clip.c <br/>
This program demonstrates arbitrary clipping planes <br/>
display clipping WireSphere  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_clip.png" width="300" /><br/>

### planet.c <br/>
This program shows how to composite modeling transformations <br/>
to draw translated and rotated models  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_planet.png" width="300" /><br/>

Interaction:  pressing the d and y keys (day and year) <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap03_Viewing/result/screenshot_planet_year.png" width="300" /><br/>

### unproject.c <br/>
(1) display Black screen  <br/>

(2) when the left mouse button is pressed,  <br/>
this program reads the mouse position and determines two 3D points  <br/>
the screen remains black  <br/>
display as below  <br/>
Coordinates at cursor are ( 295,  213)  <br/>
World coords at z=0.0 are (0.074558, -0.061304, -1.000000)  <br/>
World coords at z=1.0 are (7.455837, -6.130355, -99.999894)  <br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

