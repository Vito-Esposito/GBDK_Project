#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>


void main(void){

    uint8_t Pulsante;

    printf("Premi un pulsante:");

    // Loop forever
    while(1) {

            Pulsante= joypad();

            if(Pulsante == J_A)
                printf("A");
            if(Pulsante == J_B)
                printf("B");
            if(Pulsante == J_START)
                printf("START");
            if(Pulsante == J_SELECT)
                printf("SELECT");
            if(Pulsante == J_UP)
                printf("UP");
            if(Pulsante == J_DOWN)
                printf("DOWN");
            if(Pulsante == J_LEFT)
                printf("LEFT");
            if(Pulsante == J_RIGHT)
                printf("RIGHT");

            printf("\n");

            while(Pulsante == joypad());

		// Game main loop processing goes here


		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}

