#include <GxEPD.h>
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>
#include "board_def.h"

#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ESPmDNS.h>
#include <Wire.h>
#include "SD.h"
#include "SPI.h"
#include <SPIFFS.h>
#include <FS.h>
#include <ArduinoJson.h>
#include "esp_wifi.h"
#include "Esp.h"
#include "board_def.h"
#include <Button2.h>
#include <FreeRTOS.h>


void vTaskCode( void * pvParameters )
{
    while(1)
    {
        delay(500);
        Serial.println("task is running");
    }
}

void setup()
{
    Serial.begin(115200);
    delay(500);
    TaskHandle_t xHandle = NULL;
    xTaskCreate(vTaskCode, "vTask", 1024, 0, 1, &xHandle);
    Serial.println("system start");
}

void loop()
{
    
}