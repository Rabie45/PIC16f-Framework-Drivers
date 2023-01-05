#include <xc.h>
#include <AToD.h>
#include <config.h>

float convertAnalog(uint8_t AN0RES);

void main()
{
    ADC_Init();
    while (1)
    {
        TRISB7 = 0;
        uint8_t val = analogRead(1);
        float value = convertAnalog(val);
        if (value > 30.0)
        {
            RB7 = 1;
        }
        else
        {
            RB7 = 0;
        }
    }
}
float convertAnalog(uint8_t AN0RES)
{
    float Temperature;
    float Voltage = AN0RES * 0.0048828;
    Temperature = Voltage / 0.01;
    return Temperature;
}