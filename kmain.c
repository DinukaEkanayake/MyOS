#include "Drivers/framebuffer.h"








//main function
void kmain()
{

	fb_write_cell(0, 'A', FB_RED, FB_DARK_GREY);
	fb_move_cursor(500);

}


   
