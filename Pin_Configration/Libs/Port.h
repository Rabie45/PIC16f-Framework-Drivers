#ifndef _PORT_H
#define _PORT_H
#include <xc.h>

#define PORTA (*(volatile uint8_t *)(0x05))
#define TRISA (*(volatile uint8_t *)(0x85))

#define PORTB (*(volatile uint8_t *)(0x06))
#define TRISB (*(volatile uint8_t *)(0x86))

#define PORTC (*(volatile uint8_t *)(0x07))
#define TRISC (*(volatile uint8_t *)(0x87))

#define PORTD (*(volatile uint8_t *)(0x08))
#define TRISD (*(volatile uint8_t *)(0x88))

#endif