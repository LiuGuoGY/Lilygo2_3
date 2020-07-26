#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_create
const unsigned char gridicons_create[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xE0, 0x0F, 0xF0, 0xF0, 0x07, 0xF0, 
0xFF, 0xE7, 0xF0, 0xFF, 0xE7, 0xF1, 0x1F, 0xE7, 
0xFF, 0x1F, 0xE7, 0xFE, 0x07, 0xE7, 0xFE, 0x07, 
0xE7, 0xEF, 0x01, 0xE7, 0xEF, 0x81, 0xE7, 0xE7, 
0xC0, 0x67, 0xE7, 0xE0, 0x67, 0xE7, 0xF0, 0x67, 
0xE7, 0xF8, 0x67, 0xE7, 0xFF, 0xE7, 0xE7, 0xFF, 
0xE7, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x0F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
