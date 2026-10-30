#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#define NODO_ID "SENSOR_01"

static const char *TAG = "JUDOMOTION";

void app_main(void)
{
    ESP_LOGI(TAG, "================================");
    ESP_LOGI(TAG, "       JUDOMOTION SYSTEM        ");
    ESP_LOGI(TAG, "================================");
    ESP_LOGI(TAG, "Dispositivo: %s", NODO_ID);
    ESP_LOGI(TAG, "Microcontrolador: XIAO ESP32-S3");
    ESP_LOGI(TAG, "Estado: FUNCIONANDO");
    ESP_LOGI(TAG, "================================");

    int contador = 0;

    while (1)
    {
        contador++;

        ESP_LOGI(TAG,
                 "[%s] Sistema activo | Ciclo: %d",
                 NODO_ID,
                 contador);

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
