#include "wait.h"

void wait_init(uint8_t megaHertez)
{
    timerInit(megaHertez);
}

void waitMicros(uint32_t microSeconds)
{
    uint32_t stopTime = micros() + microSeconds;
    while (micros() < stopTime)
    {
    }
}

void waitMillis(uint8_t microSeconds)
{
    uint32_t stopTime = micros() + (microSeconds * 1000);
    while (micros() < (stopTime))
    {
    }
}
