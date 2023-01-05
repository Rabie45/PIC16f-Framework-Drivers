#ifndef _SPI_H
#define _SPI_H
#include <stdint.h>
#include <xc.h>

void SPI_initialize(void);
uint8_t SPI_exchangeByte(uint8_t byte);


#endif
