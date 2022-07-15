#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

#define SW_GPIO_SIZE 11               // Number of switches
#define LED_GPIO_SIZE 9              // Number of switch LEDs
#define ENC_GPIO_SIZE 2               // Number of encoders
#define ENC_PPR 256                   // Encoder PPR
#define MOUSE_SENS 1   
#define ENC_DEBOUNCE 0               // Mouse sensitivity multiplier
#define ENC_PULSE 256       // 4 pulses per PPR
#define REACTIVE_TIMEOUT_MAX 1000000  // HID to reactive timeout in us
#define WS2812B_LED_SIZE 32           // Number of WS2812B LEDs
#define WS2812B_LED_ZONES 8           // Number of WS2812B LED Zones
#define WS2812B_LEDS_PER_ZONE 4

#ifdef PICO_GAME_CONTROLLER_C

const uint8_t SW_KEYCODE[] = {HID_KEY_S, HID_KEY_D, HID_KEY_F, HID_KEY_SPACE,
                              HID_KEY_J, HID_KEY_K, HID_KEY_L, HID_KEY_B,
                              HID_KEY_1,};


const uint8_t SW_GPIO[] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
};
const uint8_t LED_GPIO[] = {
    11, 12, 13, 14, 15, 16, 17, 18, 19
};
const uint8_t ENC_GPIO[] = {20, 26};      // L_ENC(0, 1); R_ENC(2, 3)
const bool ENC_REV[] = {true, true};  // Reverse Encoders
const uint8_t WS2812B_GPIO = 22;

#endif

extern bool joy_mode_check;

#endif
