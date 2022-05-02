#include <Pins.h>

void portSetup(uint8_t portNo, uint8_t IO)
{
    switch (portNo)
    {
    case PORT_A:
        if (IO == OUTPUT)
        {
            portCLR(TRISA);
        }
        else
            portSet(TRISA);

        break;
    case PORT_B:
        if (IO == OUTPUT)
        {
            portCLR(TRISB);
        }
        else
            portSet(TRISB);
        break;

    case PORT_C:
        if (IO == OUTPUT)
        {
            portCLR(TRISC);
        }
        else
            portSet(TRISC);

        break;
    case PORT_D:
        if (IO == OUTPUT)
        {
            portCLR(TRISD);
        }
        else
            portSet(TRISD);
        break;
    default:
        break;
    }
}
void digitalPortWrite(uint8_t portNo, uint8_t HL)
{
    switch (portNo)
    {
    case PORT_A:
        ASSIGNPORT(PORTA, HL);
        break;
    case PORT_B:
        ASSIGNPORT(PORTB, HL);
        break;
    case PORT_C:
        ASSIGNPORT(PORTC, HL);
        break;
    case PORT_D:
        ASSIGNPORT(PORTD, HL);
        break;

    default:
        break;
    }
}

void pinSetup(uint8_t portNo, uint8_t pinNo, uint8_t IO)
{
    switch (portNo)
    {
    case PORT_A:
        if (IO == OUTPUT)
        {
            bitclr(TRISA, pinNo);
        }
        else
            bitset(TRISA, pinNo);
    case PORT_B:
        if (IO == OUTPUT)
        {
            bitclr(TRISB, pinNo);
        }
        else
            bitset(TRISB, pinNo);
    case PORT_C:
        if (IO == OUTPUT)
        {
            bitclr(TRISC, pinNo);
        }
        else
            bitset(TRISC, pinNo);
    case PORT_D:
        if (IO == OUTPUT)
        {
            bitclr(TRISD, pinNo);
        }
        else
            bitset(TRISD, pinNo);
    }
}
void digitalPinWrite(uint8_t portNo, uint8_t pinNo, uint8_t HL)
{
    switch (portNo)
    {
    case PORT_A:
        ASSIGNBIT(PORTA, pinNo, HL);
        break;
    case PORT_B:
        ASSIGNBIT(PORTB, pinNo, HL);

        break;
    case PORT_C:
        ASSIGNBIT(PORTC, pinNo, HL);

        break;
    case PORT_D:
        ASSIGNBIT(PORTD, pinNo, HL);
        break;
    default:
        break;
    }
}
