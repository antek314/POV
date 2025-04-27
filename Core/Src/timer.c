/*
 * timer.c
 *
 *  Created on: Apr 25, 2025
 *      Author: anton
 */

#include "timer.h"
#include "tim.h"

void POV_TIM_Start(uint32_t refresh_rate_hz) {
    // Oblicz okres na podstawie częstotliwości odświeżania
    uint32_t ticks = (SystemCoreClock / 72) / refresh_rate_hz;
    __HAL_TIM_SET_AUTORELOAD(&htim2, ticks - 1);
    HAL_TIM_Base_Start_IT(&htim2);
}

void POV_TIM_Stop(void) {
    HAL_TIM_Base_Stop_IT(&htim2);
}

void POV_TIM_SetRefreshRate(uint32_t hz) {
    uint32_t ticks = (SystemCoreClock / 72) / hz;
    __HAL_TIM_SET_AUTORELOAD(&htim2, ticks - 1);
}
