// This library defines a set of prebuilt animations to use in the clock.
// A feature is planned so animations can bei put within the message. 
// Also it is planned to let users define their own animations within a message.

#include <Arduino.h>

#define IMG_WIFI_FULL 0
#define IMG_WIFI_MEDIUM 1
#define IMG_WIFI_LOW 2
#define IMG_WIFI_NONE 3
#define IMG_HEART_SMALL 4
#define IMG_HEART_BIG 5
#define IMG_ENV_FLIP_1  6
#define IMG_ENV_FLIP_2  7
#define IMG_ENV_FLIP_3  8
#define IMG_ENV_FLIP_4  9
#define IMG_ENV_FLIP_5  10
#define IMG_ENV_FLIP_6  11
#define IMG_ENV_FLIP_7  12
#define IMG_ENV_FLIP_8  13
#define IMG_ENV_FLIP_9  14
#define IMG_ENV_FLIP_10 15
#define IMG_POWERON_1 16
#define IMG_POWERON_2 17
#define IMG_POWERON_3 18
#define IMG_POWERON_4 19
#define IMG_POWERON_5 20
#define IMG_POWERON_6 21
#define IMG_POWERON_7 22
#define IMG_REBOOT_0 23
#define IMG_REBOOT_1 24
#define IMG_REBOOT_2 25
#define IMG_REBOOT_3 26
#define IMG_CLOCK_0 27
#define IMG_CLOCK_1 28
#define IMG_CLOCK_2 29
#define IMG_CLOCK_3 30
#define IMG_CLOCK_4 31
#define IMG_CLOCK_5 32
#define IMG_CLOCK_6 33
#define IMG_CLOCK_7 34
#define IMG_CLOCK_8 35
#define IMG_CLOCK_9 36
#define IMG_CLOCK_10  37
#define IMG_CLOCK_11  38
#define IMG_CLOCK_12  39
#define IMG_CLOCK_13  40
#define IMG_CLOCK_14  41
#define IMG_CLOCK_15  42
#define IMG_CLOCK_16  43
#define IMG_CLOCK_17  44
#define IMG_CLOCK_18  45
#define IMG_CLOCK_19  46
#define IMG_CLOCK_20  47
#define IMG_CLOCK_21  48
#define IMG_CLOCK_22  49
#define IMG_CLOCK_23  50
#define IMG_CLOCK_24  51
#define IMG_CLOCK_25  52
#define IMG_CLOCK_26  53
#define IMG_CLOCK_27  54
#define IMG_BLANK  55

#define ANI_WIFI 0
#define ANI_HEART 1
#define ANI_ENVELOPE 2
#define ANI_POWERON 3
#define ANI_CLOCK 4

const word ani_start[] PROGMEM = {
  // ANI_WIFI
  0,
  // ANI_HEART
  6,
  // ANI_ENVELOPE
  14,
  // ANI_POWERON
  29,
  // ANI_CLOCK
  40,
  // END
  68
};

const byte ani_speed[] PROGMEM = {
  // WIFI
  200,
  // HEART
  150,
  // ENVELOPE
  100,
  // POWERON
  50,
  // CLOCK
  50,
  // END
  0
};

const byte ani_frames[] PROGMEM = {
// 0 - WIFI
 IMG_WIFI_FULL,
 IMG_WIFI_MEDIUM,
 IMG_WIFI_LOW,
 IMG_WIFI_NONE,
 IMG_WIFI_LOW,
 IMG_WIFI_MEDIUM,
// 6 - HEART 
 IMG_HEART_SMALL,
 IMG_HEART_SMALL,
 IMG_HEART_SMALL,
 IMG_HEART_SMALL,
 IMG_HEART_BIG,
 IMG_HEART_SMALL,
 IMG_HEART_BIG,
 IMG_HEART_SMALL,
// 14 - ENVELOPE
 IMG_ENV_FLIP_1,
 IMG_ENV_FLIP_2,
 IMG_ENV_FLIP_3,
 IMG_ENV_FLIP_4,
 IMG_ENV_FLIP_5,
 IMG_ENV_FLIP_6,
 IMG_ENV_FLIP_7,
 IMG_ENV_FLIP_8,
 IMG_ENV_FLIP_7,
 IMG_ENV_FLIP_9,
 IMG_ENV_FLIP_4,
 IMG_ENV_FLIP_5,
 IMG_ENV_FLIP_10,
 IMG_ENV_FLIP_2,
 IMG_ENV_FLIP_1,
// 29 - POWERON
 IMG_POWERON_1,
 IMG_POWERON_1,
 IMG_POWERON_1,
 IMG_POWERON_2,
 IMG_POWERON_2,
 IMG_POWERON_3,
 IMG_POWERON_3,
 IMG_POWERON_4,
 IMG_POWERON_5,
 IMG_POWERON_6,
 IMG_POWERON_7,
// 40 - CLOCK
 IMG_CLOCK_0,   
 IMG_CLOCK_1,   
 IMG_CLOCK_2,   
 IMG_CLOCK_3,   
 IMG_CLOCK_4,   
 IMG_CLOCK_5,   
 IMG_CLOCK_6,   
 IMG_CLOCK_7,   
 IMG_CLOCK_8,   
 IMG_CLOCK_9,   
 IMG_CLOCK_10,   
 IMG_CLOCK_11,   
 IMG_CLOCK_12,   
 IMG_CLOCK_13,   
 IMG_CLOCK_14,   
 IMG_CLOCK_15,   
 IMG_CLOCK_16,   
 IMG_CLOCK_17,   
 IMG_CLOCK_18,   
 IMG_CLOCK_19,   
 IMG_CLOCK_20,   
 IMG_CLOCK_21,   
 IMG_CLOCK_22,   
 IMG_CLOCK_23,   
 IMG_CLOCK_24,   
 IMG_CLOCK_25,   
 IMG_CLOCK_26,   
 IMG_CLOCK_27,  
// 68 - 
// END
 0 
};


const byte ani_images[][8] PROGMEM = {
{ // 0 IMG_WIFI_FULL
  B11010101,
  B11010101,
  B00010101,
  B11100101,
  B00001001,
  B11110010,
  B00000100,
  B11111000
},{ // 1 IMG_WIFI_MEDIUM
  B11010100,
  B11010100,
  B00010100,
  B11100100,
  B00001000,
  B11110000,
  B00000000,
  B00000000
},{ // 2 IMG_WIFI_LOW
  B11010000,
  B11010000,
  B00010000,
  B11100000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
},{ // 3 IMG_WIFI_NONE
  B11000000,
  B11000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
},{ // 4 IMG_HEART_SMALL
  B00000000,
  B00001100,
  B00111110,
  B01111100,
  B01111100,
  B00111110,
  B00001100,
  B00000000
},{ // 5 IMG_HEART_BIG
  B00001110,
  B00111111,
  B01111111,
  B11111110,
  B11111110,
  B01111111,
  B00111111,
  B00001110
},{ // 6 IMG_ENV_FLIP_1
  B01111110,
  B01000110,
  B01001010,
  B01010010,
  B01010010,
  B01001010,
  B01000110,
  B01111110
},{ // 7 IMG_ENV_FLIP_2
  B00000000,
  B01111110,
  B01001110,
  B01010010,
  B01010010,
  B01001110,
  B01111110,
  B00000000
},{ // 8 IMG_ENV_FLIP_3
  B00000000,
  B00000000,
  B11111111,
  B01011110,
  B01011110,
  B00111100,
  B00000000,
  B00000000
},{ // 9 IMG_ENV_FLIP_4
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B00111100,
  B00000000,
  B00000000,
  B00000000
},{ // 10 IMG_ENV_FLIP_5
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B11111111,
  B00000000,
  B00000000,
  B00000000
},{ // 11 IMG_ENV_FLIP_6
  B00000000,
  B00000000,
  B00111100,
  B01000010,
  B01000010,
  B11111111,
  B00000000,
  B00000000
},{ // 12 IMG_ENV_FLIP_7
  B00000000,
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01111110,
  B00000000
},{ // 13 IMG_ENV_FLIP_8
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01111110
},{ // 14 IMG_ENV_FLIP_9
  B00000000,
  B00000000,
  B11111111,
  B01000010,
  B01000010,
  B00111100,
  B00000000,
  B00000000
},{ // 15 IMG_ENV_FLIP_10
  B00000000,
  B00000000,
  B00111100,
  B01001110,
  B01001110,
  B11111111,
  B00000000,
  B00000000
},{ // 16 IMG_POWERON_1
  B00000000,
  B00000000,
  B00000000,
  B00010000,
  B00010000,
  B00000000,
  B00000000,
  B00000000
},{ // 17 IMG_POWERON_2
  B00000000,
  B00000000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00000000,
  B00000000
},{ // 18 IMG_POWERON_3
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000
},{ // 19 IMG_POWERON_4
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000
},{ // 20 IMG_POWERON_5
  B00111100,
  B00100100,
  B00100100,
  B00100100,
  B00100100,
  B00100100,
  B00100100,
  B00111100
},{ // 21 IMG_POWERON_6
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01111110
},{ // 22 IMG_POWERON_7
  B11111111,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B11111111
},{ // 23 IMG_REBOOT_0
  B00000000,
  B00000000,
  B00000000,
  B00011101,
  B00011101,
  B00000000,
  B00000000,
  B00000000
},{ // 24 IMG_REBOOT_1
  B11000000,
  B11000000,
  B00000000,
  B00011101,
  B00011101,
  B00000000,
  B00000000,
  B00000000
},{ // 25 IMG_REBOOT_2
  B11000000,
  B11000000,
  B00000000,
  B11011101,
  B11011101,
  B00000000,
  B00000000,
  B00000000
},{ // 26 IMG_REBOOT_3
  B11000000,
  B11000000,
  B00000000,
  B11011101,
  B11011101,
  B00000000,
  B11000000,
  B11000000
},{ // 27 IMG_CLOCK_0
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011111,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_1
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011100,
  B00011011,
  B00011000,
  B00000000
},{ // IMG_CLOCK_2
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011110,
  B00011001,
  B00000000
},{ // IMG_CLOCK_3
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011100,
  B00011010,
  B00000001
},{ // IMG_CLOCK_4
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011100,
  B00011100,
  B00000010
},{ // IMG_CLOCK_5
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00011100,
  B00000100
},{ // IMG_CLOCK_6
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B00001000
},{ // IMG_CLOCK_7
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B00010000
},{ // IMG_CLOCK_8
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00111000,
  B00100000
},{ // IMG_CLOCK_9
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00111000,
  B00111000,
  B01000000
},{ // 37 IMG_CLOCK_10
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00111000,
  B01011000,
  B10000000
},{ // IMG_CLOCK_11
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00111000,
  B11011000,
  B00000000
},{ // IMG_CLOCK_12
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111000,
  B11011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_13
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_14
  B00000000,
  B00000000,
  B00000000,
  B11110000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_15
  B00000000,
  B00000000,
  B11000000,
  B00110000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_16
  B00000000,
  B10000000,
  B01100000,
  B00010000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_17
  B10000000,
  B01000000,
  B00100000,
  B00010000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_18
  B01000000,
  B00100000,
  B00100000,
  B00010000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_19
  B00100000,
  B00100000,
  B00010000,
  B00010000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // 47 IMG_CLOCK_20
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_21
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_22
  B00000100,
  B00000100,
  B00001000,
  B00001000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_23
  B00000010,
  B00000100,
  B00000100,
  B00001000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_24
  B00000001,
  B00000010,
  B00000100,
  B00001000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_25
  B00000000,
  B00000001,
  B00000110,
  B00001000,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // IMG_CLOCK_26
  B00000000,
  B00000000,
  B00000011,
  B00001100,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // 54 IMG_CLOCK_27
  B00000000,
  B00000000,
  B00000000,
  B00001111,
  B00011000,
  B00011000,
  B00011000,
  B00000000
},{ // 55 IMG_BLANK
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
}
// 56 - weitere
};
