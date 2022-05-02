#ifndef _UTIL_H
#define _UTIL_H

#include <xc.h>
#include <stdint.h>

#define bitset(var, bitno) ((var) |= 1UL << (bitno))
#define bitclr(var, bitno) ((var) &= ~(1UL << (bitno)))
#define ASSIGNBIT(REG, BITno, VALUE) REG = (REG & ~(1 << BITno)) | (VALUE << BITno)
#define portSet(portNo) (portNo |= 0xFF)
#define portCLR(portNo) (portNo &= 0x00)
#define ASSIGNPORT(REG, VALUE) (REG = ((REG & 0x00) | VALUE))

#endif