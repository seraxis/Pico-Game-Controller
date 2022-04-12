#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

#define SW_GPIO_SIZE 9                // Number of switches
#define ENC_GPIO_SIZE 2               // Number of encoders
#define ENC_PPR 24                    // Encoder PPR
#define MOUSE_SENS 5                  // Mouse sensitivity multiplier
#define ENC_DEBOUNCE true             // Encoder Debouncing
#define SW_DEBOUNCE_TIME_US 4000      // Switch debounce delay in us
#define ENC_PULSE (ENC_PPR * 4)       // 4 pulses per PPR
#define REACTIVE_TIMEOUT_MAX 1000000  // HID to reactive timeout in us
#define WS2812B_LED_SIZE 32           // Number of WS2812B LEDs
#define WS2812B_LED_ZONES 1           // Number of WS2812B LED Zones
#define WS2812B_BRIGHTNESS 0.5        // Brightness adjustment

#ifdef PICO_GAME_CONTROLLER_C

typedef struct {
  uint8_t r, g, b;
} RGB_t;

const RGB_t COLOR_BLACK = {0, 0, 0};

const RGB_t SW_LABEL_COLORS[] = {
    {255, 255, 255},  // START
    {255, 255, 255},  // BT-A
    {255, 255, 255},  // BT-B
    {255, 255, 255},  // BT-C
    {255, 255, 255},  // BT-D
    {255, 255, 255},  // FX-L
    {255, 255, 255},  // FX-R
};

const RGB_t SW_COLORS[] = {
    {0, 0, 255},      // START
    {255, 255, 255},  // BT-A
    {255, 255, 255},  // BT-B
    {255, 255, 255},  // BT-C
    {255, 255, 255},  // BT-D
    {255, 0, 0},      // FX-L
    {255, 0, 0},      // FX-R
};

// MODIFY KEYBINDS HERE, MAKE SURE LENGTHS MATCH SW_GPIO_SIZE
const uint8_t SW_KEYCODE[] = {
    HID_KEY_D, HID_KEY_F, HID_KEY_J, HID_KEY_K, HID_KEY_C,
    HID_KEY_M, HID_KEY_A, HID_KEY_B, HID_KEY_1,
};
const uint8_t SW_GPIO[] = {
    29, 3, 4, 5, 17, 12, 0, 8, 1,
};

const uint8_t ENC_GPIO[] = {27, 6};     // L_ENC(0, 1); R_ENC(2, 3)
const bool ENC_REV[] = {false, false};  // Reverse Encoders
const uint8_t WS2812B_GPIO = 2;

#endif

extern bool joy_mode_check;

#endif