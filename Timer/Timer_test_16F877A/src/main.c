
#include <wait.h>
#include <timer.h>
#include <config.h>
int main()
{
    TRISB1 = 0;
    wait_init(16);
    while (1)
    {
        RB1 = 1;
        waitMicros(1000);
        RB1 = 0;
        __delay_us(1000);
    }
}
void __interrupt() ISR(void)
{
    timeISR();
}