#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_visible
const unsigned char gridicons_visible[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0xFC, 0x00, 0x3F, 
0xF8, 0x00, 0x1F, 0xE1, 0x00, 0x87, 0xC7, 0x00, 
0xE3, 0x8F, 0x00, 0xF1, 0x8F, 0x00, 0xF1, 0xC7, 
0x81, 0xC3, 0xE1, 0xC3, 0x87, 0xF8, 0x7E, 0x1F, 
0xFC, 0x00, 0x3F, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
