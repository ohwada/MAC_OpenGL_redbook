Chap02_State_Management - redbook
===============

OpenGL redbook Samples <br/>

Chap02_State_Management <br/>
- https://www.glprogramming.com/red/chapter02.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### lines.c <br/>
 *  This program demonstrates geometric primitives and
 *  their attributes <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap02_State_Managemen/result/screenshot_lines.png" width="300" /><br/>

### polys.c <br/>
This program demonstrates polygon stippling <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap02_State_Managemen/result/screenshot_polys.png" width="300" /><br/>

### varray.c <br/>
This program demonstrates vertex arrays <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap02_State_Managemen/result/screen_varray.png" width="300" /><br/>


switch between glVertexPointer and glInterleavedArrays <br/>
when press mouse right button <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap02_State_Managemen/result/screen_varray_mouse.png" width="300" /><br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

