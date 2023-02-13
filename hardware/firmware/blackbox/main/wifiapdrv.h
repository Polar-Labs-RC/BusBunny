#pragma once

#include "esp_event.h"

void wifiapdrv_event_handler(void *arg, esp_event_base_t event_base,
                        int32_t event_id, void *event_data);

void wifiapdrv_create(uint8_t max_conn);