Chap09_Texture_Mapping - redbook
===============

OpenGL redbook Samples <br/>

Chap09_Texture_Mapping <br/>
- https://www.glprogramming.com/red/chapter09.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>


### checker.c <br/>
This program texture maps a checkerboard image onto
 two rectangles <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_checker.png" width="300" /><br/>

### texgen.c <br/>
This program draws a texture mapped teapot with automatically generated texture coordinates <br/>
The texture is rendered as stripes on the teapot <br/>
Initially, the object is drawn with texture coordinates based upon the object coordinates of the vertex and distance from the plane x = 0 <br/>
drawRed and Green stripetd teapot in Black background <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_texgen.png" width="300" /><br/>

Pressing the 'e' key changes the coordinate generation to eye coordinates of the vertex <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_texgen_eye.png" width="300" /><br/>


Pressing the 's' key changes the plane to a slanted one (x + y + z = 0) <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_texgen_slanted.png" width="300" /><br/>

Pressing the 'o' key switches it back to the object coordinates <br/>
Pressing the 'x' key switches it back to x = 0  <br/>

### texbind.c <br/>
This program demonstrates using glBindTexture() by 
 creating and managing two textures <br/>
draw White checker pattern and Red checker pattern in Black background <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_texbind.png" width="300" /><br/>

### texsub.c <br/>
 *  This program texture maps a checkerboard image onto
 *  two rectangles <br/>
This program clamps the texture, if the texture coordinates fall outside 0.0 and 1.0  <br/>
draw two White checker patterns in Black background <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_texsub.png" width="300" /><br/>


If the s key is pressed, a texture subimage is used to
alter the original texture  <br/>
draw Red and Black small checker pattern on White and Black checker pattern <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_texsub_subimage.png" width="300" /><br/>

If the r key is pressed, the original texture is restored <br/>

### mipmap.c <br/>
This program demonstrates using mipmaps for texture maps <br/>
 To overtly show the effect of mipmaps <br/>
each mipmap reduction level has a solidly colored contrasting texture image  <br/>
 Thus, the quadrilateral which is drawn is drawn with several
different colors  <br/>
draw triangle in Black background <br/>
 with colors Yellow, Magenta, Red, Green, Blue and White <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_mipmap.png" width="300" /><br/>

### texture3d.c <br/>
This program demonstrates using a three-dimensional texture <br/>
It creates a 3D texture and then renders two rectangles
with different texture coordinates <br/>
 to obtain different  "slices" of the 3D texture <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_texture3d.png" width="300" /><br/>

### multitex.c <br/>
This program demonstrates multi textures using glMultiTexCoord2fARB <br/>
default: disable second Texture  <br/>
draw White triangle in Black backgroud  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_multitex_white.png" width="300" /><br/>

command line argment : r, g, b
enable second Texture : color Red, Grren, Blue
draw Red triangle in Black backgroud, when r  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_multitex_red.png" width="300" /><br/>


### combiner.c <br/>
This program renders a variety of quads showing different
effects of texture combiner functions  <br/>
The first row renders an untextured polygon (so you can compare the fragment colors) and then the 2 textures  <br/>
The second row shows several different combiner functions
on a single texture:  replace, modulate, add, add-signed,
and subtract  <br/>
The third row shows the interpolate combiner function
on a single texture with a constant color/alpha value,
varying the amount of interpolation  <br/>
The fourth row uses multitexturing with two textures
 and different combiner functions  <br/>
The fifth row are some combiner experiments:  using the
scaling factor and reversing the order of subtraction
for a combination function  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_combiner.png" width="300" /><br/>

###  shadowmap.c <br/>
draw rotating Red Torus, Blue Cube,  White WireSphere in Black background  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_shdowmap_texture_off.png" width="300" /><br/>

 toggle enable/disable  texture, when type  't' <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_shdowmap_texture_on.png" width="300" /><br/>

change to compareMode, when type  'c' <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_shdowmap_compare.png" width="300" /><br/>

change to funcMode, when type  'f' <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_shdowmap_func.png" width="300" /><br/>

toggle showShadow, when type  's' <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_shdowmap__shadow_on.png" width="300" /><br/>

pause animate, when type  'p' <br/>


### wrap.c  <br/>
This program texture maps a checkerboard image onto two rectangles. <br/>
  This program demonstrates the wrapping modes,  <br/>
if the texture coordinates fall outside 0.0 and 1.0. <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_wrap.png" width="300" /><br/>

Interaction: Pressing the 's' and 'S' keys switch the
wrapping between clamping and repeating for the s parameter.  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_wrap_s.png" width="300" /><br/>

The 't' and 'T' keys control the wrapping for the t parameter. <br/>
 If running this program on OpenGL 1.0, texture objects are
 not used.  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap09_Texture_Mapping/result/screenshot_wrap_t.png" width="300" /><br/>


### texprox.c  <br/>
The brief program illustrates use of texture proxies. <br/>
This program only prints out some messages about whether
certain size textures are supported and then exits.  <br/>

display as below  <br/>
proxyComponents are 32856 <br/>
proxy allocation succeeded <br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

