/**
 * OpenGL Sample
 * 2020-03-01 K.OHWADA
 * original : https://github.com/Soledad89/OpenGL_PG3e
 */

// change log
// add Interaction: type 'c' enable colormatrix


/*
 * Copyright (c) 1993-2003, Silicon Graphics, Inc.
 * All Rights Reserved
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose and without fee is hereby granted, provided that the above
 * copyright notice appear in all copies and that both the copyright
 * notice and this permission notice appear in supporting documentation,
 * and that the name of Silicon Graphics, Inc. not be used in
 * advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.
 *
 * THE MATERIAL EMBODIED ON THIS SOFTWARE IS PROVIDED TO YOU "AS-IS" AND
 * WITHOUT WARRANTY OF ANY KIND, EXPRESS, IMPLIED OR OTHERWISE,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY OR
 * FITNESS FOR A PARTICULAR PURPOSE.  IN NO EVENT SHALL SILICON
 * GRAPHICS, INC.  BE LIABLE TO YOU OR ANYONE ELSE FOR ANY DIRECT,
 * SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND,
 * OR ANY DAMAGES WHATSOEVER, INCLUDING WITHOUT LIMITATION, LOSS OF
 * PROFIT, LOSS OF USE, SAVINGS OR REVENUE, OR THE CLAIMS OF THIRD
 * PARTIES, WHETHER OR NOT SILICON GRAPHICS, INC.  HAS BEEN ADVISED OF
 * THE POSSIBILITY OF SUCH LOSS, HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE POSSESSION, USE
 * OR PERFORMANCE OF THIS SOFTWARE.
 *
 * US Government Users Restricted Rights 
 * Use, duplication, or disclosure by the Government is subject to
 * restrictions set forth in FAR 52.227.19(c)(2) or subparagraph
 * (c)(1)(ii) of the Rights in Technical Data and Computer Software
 * clause at DFARS 252.227-7013 and/or in similar or successor clauses
 * in the FAR or the DOD or NASA FAR Supplement.  Unpublished - rights
 * reserved under the copyright laws of the United States.
 *
 * Contractor/manufacturer is:
 *	Silicon Graphics, Inc.
 *	1500 Crittenden Lane
 *	Mountain View, CA  94043
 *	United State of America
 *
 * OpenGL(R) is a registered trademark of Silicon Graphics, Inc.
 */

/*
 *  colormatix.c
 *  This program uses the color matrix to exchange the color channels of
 *  an image.
 *
 *    Red   -> Green
 *    Green -> Blue
 *    Blue  -> Red
 *
 */
//#include <GL/glut.h>

// macOS
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>

#include <stdlib.h>
#include <stdio.h>

extern GLubyte*  readImage(const char*, GLsizei*, GLsizei* );

GLubyte  *pixels;
GLsizei   width, height;
int isColorMatrix = 0;

GLfloat  matrix[16] = {
      0.0, 1.0, 0.0, 0.0,
      0.0, 0.0, 1.0, 0.0,
      1.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.0
};

/**
 * init
 */
void init(void)
{
   GLfloat  m[16] = {
      0.0, 1.0, 0.0, 0.0,
      0.0, 0.0, 1.0, 0.0,
      1.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.0
   };

   glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
   glClearColor (0.0, 0.0, 0.0, 0.0); // Black

   glMatrixMode( GL_COLOR );
   //glLoadMatrixf( m );
   glMatrixMode( GL_MODELVIEW );

}


/**
 * display
 */
void display(void)
{
   glClear(GL_COLOR_BUFFER_BIT);

    if(isColorMatrix){
        glLoadMatrixf(  matrix );
    }
   glRasterPos2i( 1, 1 );
   glDrawPixels(width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels );
   glFlush();
}


/**
 * reshape
 */
void reshape(int w, int h)
{
   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho (0, w, 0, h, -1.0, 1.0);
   glMatrixMode(GL_MODELVIEW);
}


/**
 * keyboard
 */
void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 'c':
        isColorMatrix = true;
         glutPostRedisplay();
        break;

      case 27: // Escape Key
         exit(0);
   }
}

/*  Main Loop
 *  Open window with initial window size, title bar, 
 *  RGBA display mode, and handle input events.
 */
int main(int argc, char** argv)
{

    const char* filename = "Data/leeds.bin";
   pixels = readImage(filename, &width, &height);    
    if ( !pixels ) {
	    fprintf( stderr, "Unable to open file '%s' \n", filename );
	    return 1;
    }

    printf("readImage: %s ( %d x %d ) \n", filename, width, height);

   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(width, height);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("colormatix");
   init();
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}
