#include "spi_master.h"

#ifdef _16F877A

void SPI_initialize()
{
    SSPEN = 1;
    SSPSTAT = 0b01000000; //pg 74/234
    TRISC5 = 0;
    TRISC4 = 1;
    TRISC3 = 0;
    SSPCON = (SSPCON & 0xf0) | 0b0010;
}

uint8_t SPI_exchangeByte(uint8_t byte)
{

    SSPBUF = byte;
    while (SSPIF == 0); // wait for the byte to be sent
    SSPIF = 0;
    return SSPBUF;
}

#else
#error The spi_master library doesn't support the current chip!
#endif