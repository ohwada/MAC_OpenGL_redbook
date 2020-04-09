OpenGL redbook
===============

OpenGL redbook Samples <br/>

OpenGL Programming Guide (redbook) <br/>
- https://www.glprogramming.com/red/index.html

change the following sample codes to work on macOS <br/>
Code samples for the OpenGL v1.1 Programming Guide (Redbook) <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/ <br/>

### System Environment
confirmed the operation of the program in the following System Environment   <br/>

macOS Version : 10.15.3 (Catalna)  <br/>
Xcode Version : 11.4 <br/>
gcc Version : Apple clang version 11.0.3  <br/>
OpenGL Renderer : Intel(R) HD Graphics 6000 <br/>
OpenGL Version : 2.1 INTEL-14.4.23 <br/>
GLUT Version : 5 <br/>

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

Note: <br/>
- https://pc.watch.impress.co.jp/docs/news/1125772.html

### Note 
removed the following two codes <br/>
because latest macOS does not support index color  <br/>
- aaindex.c <br/>
- fogindex.c <br/>

### Reference <br/>
- https://www.glprogramming.com/red/index.html
- https://www.opengl.org/archives/resources/code/samples/redbook/

