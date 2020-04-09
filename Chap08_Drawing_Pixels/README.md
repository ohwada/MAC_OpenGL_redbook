Chap08_Drawing_Pixels - redbook
===============

OpenGL redbook Samples <br/>

Chap08_Drawing_Pixels <br/>
- https://www.glprogramming.com/red/chapter08.html

### build asample code 
requires  <br/>
- macOS  OpenGL framework <br/>
- macOS  GLUT framework <br/>
https://developer.apple.com/library/archive/documentation/GraphicsImaging/Conceptual/OpenGL-MacProgGuide/opengl_intro/opengl_intro.html <br/>

% gcc sample.c  -framework OpenGL  -framework GLUT <br/>

display following warnings when build <br/>
but don't mind <br/>
warning: 'glClear' is deprecated: first deprecated in macOS 10.14 <br/>

### drawf.c  <br/>
Draws the bitmapped letter F on the screen (several times) <br/>
This demonstrates use of the glBitmap() call  <br/>
draw White chars 'F' in black background   <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_drawf.png" width="300" /><br/>


### font.c  <br/>
Draws some text in a bitmapped font   <br/>
Uses glBitmap() and other pixel routines   <br/>
Also demonstrates use of display lists   <br/>
draw White text in black background as below <br/>
"THE QUICK BROWN FOX JUMPS" <br/>
("OVER A LAZY DOG" <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_font.png" width="300" /><br/>

### image.c <br/>
This program demonstrates drawing pixels  <br/>
and shows the effect of  <br/>
glDrawPixels(), glCopyPixels(), and glPixelZoom()  <br/>
draw White ckecker pattrn in Black background  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_image.png" width="300" /><br/>


Interaction: moving the mouse while pressing the mouse button
will copy the image in the lower-left corner of the window to the mouse position,  <br/>
using the current pixel zoom factors  <br/>
There is no attempt to prevent you from drawing over the original image  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_image_mouse.png" width="300" /><br/>

If you press the 'r' key,  <br/>
the original image and zoom factors are reset  <br/>
If you press the 'z' or 'Z' keys,  <br/>
you change the zoom factors  <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_image_zoom.png" width="300" /><br/>

###  colortable.c <br/>
Invert a passed block of pixels  <br/>
This program illustrates the use of the glColorTable() function  <br/>

build sample code  <br/>
% gcc colortable.c readImage.c -framework OpenGL  -framework GLUT <br/>

display image pixels reading from File   <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_colortable.png" width="300" /><br/>

Invert a passed block of pixels, when type 'c'  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_colortable_invert.png" width="300" /><br/>

###  convolution.c <br/>
Use various 2D convolutions filters to find edges in an image <br/>
display binary scale image  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_convolution.png" width="300" /><br/>

display convolution filtered image, when type 'c'  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_convolution_vertical.png" width="300" /><br/>

display horizontal filtered image, when type 'h'  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_convolution__horizontal.png" width="300" /><br/>

display laplacian filtered image, when type 'l'  <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_convolution__laplacian.png" width="300" /><br/>

### colormatrix.c <br/>
This program uses the color matrix to exchange the color channels of an image <br/>
display image pixels reading from File   <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_colormatrix.png" width="300" /><br/>

display color exchanged image, when type 'c'  <br/>
Red   -> Green   <br/>
Green -> Blue   <br/>
Blue  -> Red   <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_colormatrix_enable.png" width="300" /><br/>

###  histogram.c <br/>
Compute the histogram of the image  <br/>
This program illustrates the use of the glHistogram() function  <br/>
display image pixels reading from File   <br/>
and display the R G B histograms over the image <br/>

<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_histogram.png" width="300" /><br/>

###  minmax.c <br/>
Determine the minimum and maximum values of a group of pixels  <br/>
This demonstrates use of the glMinmax() call  <br/>
display image pixels reading from File   <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_minmax.png" width="300" /><br/>

display as below  <br/>
readImage: Data/leeds.bin ( 599 x 401 )  <br/>
 Red   : min = 0   max = 232 <br/>
 Green : min = 0   max = 244 <br/>
 Blue  : min = 0   max = 245 <br/>


###  test_readImage.c <br/>
read image pixels from File   <br/>
display in GTK window   <br/>

build sample code  <br/>
- require gtk <br/>
https://github.com/ohwada/MAC_cpp_Samples/tree/master/GTK

% gcc test_readImage.c readImage.c `pkg-config --cflags --libs gtk+-2.0` <br/>
<image src="https://raw.githubusercontent.com/ohwada/MAC_OpenGL_redbook/master/Chap08_Drawing_Pixels/result/screenshot_test_readimage.png" width="300" /><br/>

### Reference <br/>
- https://www.opengl.org/archives/resources/code/samples/redbook/

