#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_status
const unsigned char gridicons_status[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 
0xFF, 0xFE, 0x00, 0x7F, 0xF8, 0x7E, 0x1F, 0xF1, 
0xFF, 0x9F, 0xF3, 0xFF, 0xCF, 0xE3, 0x3C, 0xC7, 
0xE7, 0x3C, 0xE7, 0xCF, 0x3C, 0xF3, 0xCF, 0x3C, 
0xF3, 0xCF, 0xFF, 0xF3, 0xCF, 0xFF, 0xF3, 0xCF, 
0x00, 0xF3, 0xC7, 0x00, 0xE3, 0xE7, 0x00, 0xE7, 
0xE7, 0x81, 0xE7, 0xF3, 0xC3, 0xCF, 0xF0, 0xFF, 
0x0F, 0xF8, 0x7E, 0x1F, 0xFE, 0x00, 0x7F, 0xFF, 
0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
