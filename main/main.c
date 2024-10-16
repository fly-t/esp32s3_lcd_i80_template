/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "esp_chip_info.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
#include <inttypes.h>
#include <stdio.h>
#include "lvgl_thread.h"

void app_main(void)
{
    xTaskCreate(lvgl_thread_entry, "lvgl thread", 30 * 1024, NULL, 4, NULL);
    // while (1)
    // {
    // }
}