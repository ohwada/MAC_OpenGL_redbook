/**
 * OpenGL Sample
 * 2020-03-01 K.OHWADA
 */


#include <stdlib.h>
#include <stdio.h>

// macOS
#include <OpenGL/OpenGL.h>

#include <gtk/gtk.h>

extern GLubyte*  readImage(const char*, GLsizei*, GLsizei* );


/**
 * reverse UpsideDown
 */
unsigned char* reverseUpsideDown(unsigned char *src, int width, int height)
{

    size_t bufsize = 3 * width * height;
    unsigned char *buff = (unsigned char *)malloc( bufsize );

    for(int y = 0;  y<height; y++)
    {
        for(int x = 0; x<width; x++)
        {
            int col     = x;
            int row     = height - y - 1;
            int src_index   = (row * width + col) * 3;
            int index_rev  = (row * width + (width - col)) * 3;
            int buf_index = bufsize - index_rev;
            buff[buf_index + 0] = src[src_index + 0]; // R
            buff[buf_index + 1] = src[src_index + 1]; // G
            buff[buf_index + 2] = src[src_index + 2]; // B
        }
    }

    return buff;
}


/**
 * main
 */
int main(int argc, char** argv)
{

    const int WIN_WIDTH = 500;
    const int WIN_HEIGHT = 500;
    const char* FILE_NAME = "Data/leeds.bin";
    const char* WIN_TITLE = "test readImage";

    printf("%s \n", WIN_TITLE);

    GLsizei width;
    GLsizei height;
    GLubyte  * pixels = readImage(FILE_NAME, &width, &height);    
    if ( !pixels ) {
	    fprintf( stderr, "Unable to open file '%s' \n", FILE_NAME );
	    return 1;
    }

    printf("readImage: %s ( %d x %d ) \n", FILE_NAME, width, height);


// change the origin of image to the upper left
// according to the coordinates of GTK
// because the origin of the image is the lower left,
// according to OPenGL coordinates
    unsigned char* data = reverseUpsideDown((unsigned char *)pixels, width, height);


// open window
	gtk_init (&argc, &argv);

	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), WIN_TITLE);
    gtk_window_set_default_size(GTK_WINDOW(window), WIN_WIDTH, WIN_HEIGHT);
	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);


// create pixbuf
    GdkPixbuf *pixbuf = gdk_pixbuf_new_from_data(
            (guchar  *)data, 
            GDK_COLORSPACE_RGB, 
            FALSE, 
            8, 
            width, 
            height, 
            (3*width), 
            NULL, 
            NULL);

	if (!pixbuf )
	{
	    fprintf( stderr, "gdk_pixbuf_new_from_data Faild \n" );
        return 1;
	}

// create image
    GtkWidget* gtk_image = gtk_image_new_from_pixbuf (pixbuf);
	if (!gtk_image)
	{
	    fprintf( stderr, "gtk_image_new_from_pixbuf Faild \n" );
        return 1;
	}

// show Image
	gtk_container_add (GTK_CONTAINER (window), gtk_image);
	gtk_widget_show_all (window);	
	gtk_main ();

    return 0;
}

