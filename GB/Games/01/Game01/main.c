#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>
#include "tilet.h"


void main(void){

    set_bkg_data(0, 1, Tile);
    init_bkg(0);

    SHOW_BKG;
    DISPLAY_ON;





    // Loop forever
    while(1) {


		// Game main loop processing goes here


		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}

