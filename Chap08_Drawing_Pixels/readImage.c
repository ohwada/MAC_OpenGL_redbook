/**
 * OpenGL Sample
 * 2020-03-01 K.OHWADA
 * original : https://github.com/Soledad89/OpenGL_PG3e
 */

// changlog
// chang to run on macOS

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
 * readImage.c
 *  A helper function to read the binary images included with this
 *  program distribution.
 */

#include <stdio.h>
#include <stdlib.h>

//#include <GL/gl.h>

// macOS
#include <OpenGL/OpenGL.h>


/**
 * readImage
 */
GLubyte*
readImage( const char* filename, GLsizei* width, GLsizei *height )
{

    GLubyte*  pixels;

    FILE* infile = fopen( filename, "rb" );

    if ( !infile ) {
	    fprintf( stderr, "Unable to open file '%s'\n", filename );
	    return NULL;
    }

// change from integer to byte array
// because cannot read the correct value on MAC
   // fread( width, sizeof( GLsizei ), 1, infile );
    //fread( height, sizeof( GLsizei ), 1, infile );

    unsigned char header[8];
    fread( header, 8, 1, infile );

    size_t size_width = 256*header[2] + header[3];
    size_t size_height = 256*header[6] + header[7];

    printf("width= %zu \n", size_width);
    printf("height= %zu \n", size_height);

    size_t bufsize = 3 * size_width * size_height;

    pixels = (GLubyte *) malloc( bufsize );
    if ( !pixels ) {
	    fprintf( stderr, "Unable to malloc() bytes for pixels\n" );
	    return NULL;
    }

    fread( pixels, bufsize, 1, infile );
    
    fclose( infile );

    // set return param
    *width = size_width;
    *height = size_height;

    return pixels;
}
