#ifndef _AToD_H
#define _AToD_H
#include <xc.h>
#define _XTAL_FREQ 16000000
#include <stdint.h>
void ADC_Init();
uint16_t analogRead(uint8_t);
#endif