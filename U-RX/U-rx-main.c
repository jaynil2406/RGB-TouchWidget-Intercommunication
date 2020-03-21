#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tm4c123gh6pm.h"
#include "uart0.h"
#include "SPI_TXinit.h"
#include "ledpb.h"


/**
 * main.c
 */

void sysTickISR()
{
    char ch;
    ch = getcUart0();
    SSI2_DR_R  =0;
    SSI2_DR_R = ch;
       if(ch == 'G')
       {  RED_LED=0;BLUE_LED=0; GREEN_LED=1;ch=0;}
       else if(ch=='R')
       {  GREEN_LED=0; BLUE_LED=0; RED_LED=1;ch=0;}

       else if(ch=='B')
           { GREEN_LED=0;  RED_LED=0; BLUE_LED=1;ch=0;}
}
void main(void)
{

    SSIinit();
       initUart0();
        initHw();
        sysTIMERINIT();
    while(1)
    {

    }

}
