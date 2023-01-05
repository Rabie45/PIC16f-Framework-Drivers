/*
Project Discription: 5rduino framework
Author: Abdallah rabie
https://github.com/Rabie45
*/
#pragma config FOSC = INTOSC  // Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF     // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = ON     // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON     // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF       // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config CPD = OFF      // Data Memory Code Protection (Data memory code protection is disabled)
#pragma config BOREN = OFF    // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = OFF     // Internal/External Switchover (Internal/External Switchover mode is disabled)
#pragma config FCMEN = ON     // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)
#define _XTAL_FREQ 16000000

#include <xc.h>
#include <wait.h>
#include <timer.h>

#include <stdint.h>
int main()
{
    wait_init(16);
    OSCCON = 0b01111010;
    TRISB = 0x00;
    RB7 = 1;

    while (1)
    {
        RB7 = 1;
        __delay_ms(1000);
        RB7 = 0;
        waitMillis(1000);
    }
}
void __interrupt() ISR(void)
{
    timeISR();
}
