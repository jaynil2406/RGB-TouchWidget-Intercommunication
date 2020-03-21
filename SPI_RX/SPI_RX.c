#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "SPI_RXinit.h"
#include "tm4c123gh6pm.h"
#include "ledpb.h"


void sysTickISR()
{
    int RX=0;
    SSI2_DR_R =0;
          RX = SSI2_DR_R;
          if(RX=='G'){ RED_LED=0;BLUE_LED=0; GREEN_LED=1;}

          else if(RX=='R')
          {    GREEN_LED=0; BLUE_LED=0; RED_LED=1;  }

          else if(RX=='B')
          {  GREEN_LED=0;  RED_LED=0; BLUE_LED=1;}

}
int main(void)
{

   initHw();
   SSIinit();
   sysTIMERINIT();
   while(1)
   {
   }


}
