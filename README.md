# UART4-SSI2-Intercommunication

-Boards used:-
  1) TM4C129XNCZAD 
  2) (X2)TM4C123GH6PM
  
In this project I implemented Touch Widget on TM4C129XNCZAD QVGA LCD and prompted for RGB Lights touch after taking the data it is transfered 
from TM4C129XNCZAD(UART5TX PH7) to TM4C123GH6PM(UART4RX PC4) using UART and recieved buffer is placed in 1ms SystickISR to get the data at proper intervals further the data is transfered using  SSI2_TX(PB7) and recived on the TM4C123GH6PM other board using SSI2_RX(PB6) and LEDS are turned on this board with command given on the first board.
This project shows the implementation of Touch Screen and creating Widget on it using TI Drivers, SysTickISR,UART, SSI communication. 
