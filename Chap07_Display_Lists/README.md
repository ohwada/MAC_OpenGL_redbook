Chap07_Display_Lists - redbook
===============

OpenGL redbook Samples <br/>

Chap07_Display_Lists <br/>
- https://www.glprogramming.com/red/chapter07.html


### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

 ### list.c <br/>
 This program demonstrates how to make and execute a 
 display list  <br/>
Note that attributes, such as current color and matrix, are changed <br/>
draw Red triangles and lines in Black background  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap07_Display_Lists/result/screenshot_list.png" width="300" /><br/>

 ### stroke.c  <br/>
This program demonstrates some characters of a 
 *  stroke (vector) font  <br/>
The characters are represented by display lists  <br/>
which are given numbers which correspond to the ASCII values of the characters  <br/>
Use of glCallLists() is demonstrated  <br/>

draw White chars in Black background   <br/>
with stroke font as below　<br/>
"A SPARE SERAPE APPEARS AS"  <br/>
 "APES PREPARE RARE PEPPERS"  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap07_Display_Lists/result/screenshot_stroke.png" width="300" /><br/>

 ### torus.c  <br/>
 This program demonstrates the creation of a display list   <br/>
draw White torus in Balck background   <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap07_Display_Lists/result/screenshot_torus.png" width="300" /><br/>

rotate around X-axis, when type 'x' <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap07_Display_Lists/result/screenshot_torus_x.png" width="300" /><br/>

rotate around Y-axis, when type 'y' <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap07_Display_Lists/result/screenshot_torus_y.png" width="300" /><br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

