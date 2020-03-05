#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int main()
{
    redLED = 1;
    greenLED = 1;

    while(true) {
        for (int i = 1; i <= 6; i++) {
            redLED = !redLED;
            wait(0.2f);
        }
        for (int i = 1; i <= 4; i++) {
            greenLED = !greenLED;
            wait(0.2f);
        }
    }
}