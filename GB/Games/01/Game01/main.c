#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>


void main(void){

    printf("Ciao :)");

    // Loop forever
    while(1) {






		// Game main loop processing goes here


		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}
