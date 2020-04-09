/**
 * OpenGL Sample
 * 2020-03-01 K.OHWADA
 * original : https://github.com/Soledad89/OpenGL_PG3e
 */


// change log 
// (1)add glDisable(GL_TEXTURE_2D)
// because the screen is black and display nothing
// (2) add command line argment : r, g, b
//  enable second Texture : color Red, Grren, Blue

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

/*  multitex.c
 */
//#include <GL/glut.h>

// macOS
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>

#include <stdlib.h>
#include <stdio.h>

#ifdef GL_VERSION_1_2

static GLubyte texels0[32][32][4];
static GLubyte texels1[16][16][4]; // Red
static GLubyte texels2[16][16][4]; // Green
static GLubyte texels3[16][16][4]; // Blue

int isMultiTex = 0;
int isTex1 = 0;
int isTex2 = 0;
int isTex3 = 0;

/**
 * makeCheckImages
 */
void makeCheckImages(void)
{
   int i, j;
    
// texels0
   for (i = 0; i < 32; i++) {
      for (j = 0; j < 32; j++) {
        // White
         texels0[i][j][0] = (GLubyte) i;
         texels0[i][j][1] = (GLubyte) j;
         texels0[i][j][2] = (GLubyte) (i*j)/255;
         texels0[i][j][3] = (GLubyte) 255;
      }
   }

// texels1
   for (i = 0; i < 16; i++) {
      for (j = 0; j < 16; j++) {

        // Red
        texels1[i][j][0] = (GLubyte) 255;
        texels1[i][j][1] = (GLubyte) i;
        texels1[i][j][2] = (GLubyte) j;
         texels1[i][j][3] = (GLubyte) 255;

        // Green
        texels2[i][j][0] = (GLubyte) i;
        texels2[i][j][1] = (GLubyte) 255;
        texels2[i][j][2] = (GLubyte) j;
         texels2[i][j][3] = (GLubyte) 255;

        // Blue
        texels3[i][j][0] = (GLubyte) i;
        texels3[i][j][1] = (GLubyte) j;
        texels3[i][j][2] = (GLubyte) 255;
         texels3[i][j][3] = (GLubyte) 255;
      }
   }
}


/**
 * init
 */
void init(void)
{    
   GLuint texNames[2];

   glClearColor (0.0, 0.0, 0.0, 0.0); // Black
   glShadeModel(GL_FLAT);
   glEnable(GL_DEPTH_TEST);

   makeCheckImages();
   glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

   glGenTextures(2, texNames);
   glBindTexture(GL_TEXTURE_2D, texNames[0]);
   glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 32, 32, 0, GL_RGBA, 
		GL_UNSIGNED_BYTE, texels0);
   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, 
                   GL_NEAREST);
   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, 
                   GL_NEAREST);
   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

   glBindTexture(GL_TEXTURE_2D, texNames[1]);

   //glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 16, 16, 0, GL_RGBA, 
		//GL_UNSIGNED_BYTE, texels1);

    GLubyte * data;
    if(isTex1){
        data = texels1;
    }else if(isTex2){
        data = texels2;
    }else if(isTex3){
        data = texels3;
    }

    if(isMultiTex){
   glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 16, 16, 0, GL_RGBA, 
		GL_UNSIGNED_BYTE, data);
    }

   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
   /*  Use the two texture objects to define two texture units
    *  for use in multitexturing  */
   glActiveTextureARB (GL_TEXTURE0_ARB);
   glEnable(GL_TEXTURE_2D);
   glBindTexture(GL_TEXTURE_2D, texNames[0]);
   glTexEnvi (GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

// disable Texture
// before the second glActiveTextureARB　　
//https://community.khronos.org/t/problem-of-opengl-extention/42751
   glDisable(GL_TEXTURE_2D);

   glMatrixMode (GL_TEXTURE);
      glLoadIdentity();
      glTranslatef(0.5f, 0.5f, 0.0f);
      glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
      glTranslatef(-0.5f, -0.5f, 0.0f);
   glMatrixMode (GL_MODELVIEW);
   glActiveTextureARB (GL_TEXTURE1_ARB);
   glEnable(GL_TEXTURE_2D);

    if(isMultiTex){
        glBindTexture(GL_TEXTURE_2D, texNames[1]);
    }

   glTexEnvi (GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
}




/**
 * display
 */
void display(void)
{
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // triangle
   glBegin(GL_TRIANGLES);
   glMultiTexCoord2fARB (GL_TEXTURE0_ARB, 0.0, 0.0);
   glMultiTexCoord2fARB (GL_TEXTURE1_ARB, 1.0, 0.0);
   glVertex2f(0.0, 0.0);
   glMultiTexCoord2fARB (GL_TEXTURE0_ARB, 0.5, 1.0);
   glMultiTexCoord2fARB (GL_TEXTURE1_ARB, 0.5, 0.0);
   glVertex2f(50.0, 100.0);
   glMultiTexCoord2fARB (GL_TEXTURE0_ARB, 1.0, 0.0);
   glMultiTexCoord2fARB (GL_TEXTURE1_ARB, 1.0, 1.0);
   glVertex2f(100.0, 0.0);
   glEnd();
   glFlush();
}


/**
 *  reshape
 */
void reshape(int w, int h)
{
   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   if (w <= h)
      gluOrtho2D(0.0, 100.0, 0.0, 100.0 * (GLdouble)h/(GLdouble)w);
   else
      gluOrtho2D(0.0, 100.0 * (GLdouble)w/(GLdouble)h, 0.0, 100.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}


/**
 * keyboard
 */
void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 27: // Escape Key
         exit(0);
         break;
   }
}


/**
 *  main
 */
int main(int argc, char** argv)
{
    
// command line argment : r, g, b
//  enable second Texture : color Red, Grren, Blue
    if(argc == 2) {
        char *argv1 = argv[1];
        if( strlen(argv1) > 0) {
            if( argv1[0] == 'r') {
                isMultiTex = 1;
                isTex1 = 1;
            }else if( argv1[0] == 'g') {
                isMultiTex = 1;
                isTex2 = 1;
            }else if( argv1[0] == 'b') {
                isMultiTex = 1;
                isTex3 = 1;
            }
        }
    }


   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize(250, 250);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("multitex");
   init();
   glutReshapeFunc(reshape);
   glutDisplayFunc(display);
   glutKeyboardFunc (keyboard);
   glutMainLoop();
   return 0; 
}
#else
// NOT GL_VERSION_1_2
int main(int argc, char** argv)
{
    fprintf (stderr, "This program demonstrates a feature which is not in OpenGL Version 1.0 or 1.1.\n");
    fprintf (stderr, "If your implementation of OpenGL Version 1.0 has the right extensions,\n");
    fprintf (stderr, "you may be able to modify this program to make it run.\n");
    return 0;
}
#endif

