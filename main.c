/*
Project Discription: 5rduino framework
Author: Abdallah rabie
https://github.com/Rabie45
*/

#define _XTAL_FREQ 16000000
#include <xc.h>
#include <Pins.h>
int main()
{
    pinSetup(PORT_B, 2, OUTPUT);
    pinSetup(PORT_C, 2, OUTPUT);


    while (1)
    {
        digitalPinWrite(PORT_B, 2, 1);
        digitalPinWrite(PORT_C, 2, 1);

        __delay_ms(1000);
        digitalPinWrite(PORT_B, 2, 0);
        digitalPinWrite(PORT_C, 2, 0);


        __delay_ms(1000);
    }
}