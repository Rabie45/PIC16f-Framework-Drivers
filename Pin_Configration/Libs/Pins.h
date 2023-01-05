#ifndef _PINS_H
#define _PINS_H

#include <xc.h>
#include <stdint.h>
#include <util.h>
#include <Port.h>
#include <configrations.h>
void portSetup(uint8_t portNo, uint8_t IO);        // IO input OR ourput port
void digitalPortWrite(uint8_t portNo, uint8_t HL); // HL high oR LOW port

void pinSetup(uint8_t portNo, uint8_t pinN0, uint8_t IO);        // IO input OR ourput pin
void digitalPinWrite(uint8_t portNo, uint8_t pinNo, uint8_t HL); // HL high oR LOW pin

#endif