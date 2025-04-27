/*
 * timer.h
 *
 *  Created on: Apr 25, 2025
 *      Author: anton
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "tim.h" // Dziedziczymy konfigurację z CubeMX

// Funkcje do sterowania timerem w projekcie POV
void POV_TIM_Start(uint32_t refresh_rate_hz);
void POV_TIM_Stop(void);
void POV_TIM_SetRefreshRate(uint32_t hz);

#endif /* INC_TIMER_H_ */
