#include "AToD.h"
#if _16F1828
void ADC_Init()
{
    ADCON0 = 0b00000001; // Turn ADC ON, Select AN0 Channel, ADC Clock = Fosc/8
    ADCON1 = 0b11010000; // All 8 Channels Are Analog, Result is "Right-Justified"
                         // ADC Clock = Fosc/8
}
uint16_t analogRead(uint8_t ANC)
{
    if (ANC < 0 || ANC > 7) // Check Channel Number Validity
    {
        return 0;
    }
    ADCON0 &= 0b00000011; // Clear The Channel Selection Bits
    ADCON0 |= ANC << 2;   // Select The Required Channel (ANC)
                          // Wait The Aquisition Time
    __delay_us(5);        // The Minimum Tacq = 20us, So That should be enough
    GO_nDONE = 1;         // Start A/D Conversion
    while (ADCON0bits.GO_nDONE)
        ;                            // Polling GO_DONE Bit
                                     // Provides Delay Until Conversion Is Complete
    return ((ADRESH << 8) + ADRESL); // Return The Right-Justified 10-Bit Result
}
#elif _16F877A
void ADC_Init()
{
    ADCON0 = 0x41;  // Turn ADC ON, Select AN0 Channel, ADC Clock = Fosc/8
    ADCON1 = 0x80;  // All 8 Channels Are Analog, Result is "Right-Justified"
                    // ADC Clock = Fosc/8
}
uint16_t analogRead(uint8_t ANC)
{
    if(ANC<0 || ANC>7)    // Check Channel Number Validity
    { return 0;}
    ADCON0 &= 0b11000101; // Clear The Channel Selection Bits
    ADCON0 |= ANC<<3;     // Select The Required Channel (ANC)
                          // Wait The Aquisition Time
    __delay_us(30);       // The Minimum Tacq = 20us, So That should be enough
    GO_DONE = 1;          // Start A/D Conversion
    while(ADCON0bits.GO_DONE); // Polling GO_DONE Bit
                               // Provides Delay Until Conversion Is Complete
    return ((ADRESH << 8) + ADRESL); // Return The Right-Justified 10-Bit Result
}

#endif