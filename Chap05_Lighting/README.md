Chap05_Lighting - redbook
===============

OpenGL redbook Samples <br/>

Chap05_Lighting <br/>
- https://www.glprogramming.com/red/chapter05.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### light.c <br/>
This program demonstrates the use of the OpenGL lighting model  <br/>
A sphere is drawn using a grey material characteristic  <br/>
A single light source illuminates the object  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_light.png" width="300" /><br/>


### movelight.c <br/>
This program demonstrates when to issue lighting and
transformation commands to render a model with a light
which is moved by a modeling transformation (rotate or
translate) <br/>
The light position is reset after the modeling
transformation is called  <br/>
The eye position does not change  <br/>
A sphere is drawn using a grey material characteristic  <br/>
A single light source illuminates the object  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_movelight.png" width="300" /><br/>

 Interaction:  pressing the left mouse button alters
the modeling transformation (x rotation) by 30 degrees  <br/>
The scene is then redrawn with the light in a new position  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_movelight_mouse.png" width="300" /><br/>


### material.c <br/>
This program demonstrates the use of the GL lighting model  <br/>
Several objects are drawn using different material characteristics  <br/>
A single light source illuminates the objects  <br/>

Draw twelve spheres in 3 rows with 4 columns  <br/>
The spheres in the first row have materials with no ambient reflection  <br/>
The second row has materials with significant ambient reflection  <br/>
The third row has materials with colored ambient reflection  <br/>
The first column has materials with blue, diffuse reflection only  <br/>
The second column has blue diffuse reflection, as well as specular reflection with a low shininess exponent   <br/>
The third column has blue diffuse reflection, as well as specular reflection with a high shininess exponent (a more concentrated highlight)   <br/>
The fourth column has materials which also include an emissive component   <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_material.png" width="300" /><br/>

### colormat.c <br/>
draw a sphere using a grey material characteristic <br/>
After initialization, the program will be in ColorMaterial mode  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_colormat.png" width="300" /><br/>

Interaction:  pressing the mouse buttons will change the diffuse reflection values <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_colormat_mouse.png" width="300" /><br/>

### scene.c <br/>
This program demonstrates the use of the GL lighting model.  <br/>
 Objects are drawn using a grey material characteristic.  <br/>
 A single light source illuminates the objects. <br/>
draw Gray Cone, Gray Torus, GraySpher inBlack background  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_scene.png" width="300" /><br/>

### teapots.c  <br/>
 This program demonstrates lots of material properties.  <br/
 A single light source illuminates the objects.  <br/

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap05_Lighting/result/screenshot_teapots.png" width="300" /><br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

