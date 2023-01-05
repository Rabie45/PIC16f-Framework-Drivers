/*
Author: Abdallah rabie
https://github.com/Rabie45
Module: -
*/
#include <xc.h>
#include <stdint.h>
#include <spi_master.h>

#pragma config FOSC = HS  // Oscillator Selection bits (XT3 oscillator)
#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = ON // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF  // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF  // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF  // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF   // Flash Program Memory Code Protection bit (Code protection off)
#define _XTAL_FREQ 16000000

int main()
{
    uint8_t data = 0x60;
    TRISC0 = 1;
    TRISC1 = 0;
    RC1 = 1;

    SPI_initialize();
    while (1)
    {
        if (RC0 == 1)
        {
            data++;
            SPI_exchangeByte(data);
            __delay_ms(1000);
        }
    }
}
