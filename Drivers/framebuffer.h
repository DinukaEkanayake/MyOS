    #define FB_RED     4
    #define FB_DARK_GREY 8


    void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg);
    void fb_move_cursor(unsigned short pos);
