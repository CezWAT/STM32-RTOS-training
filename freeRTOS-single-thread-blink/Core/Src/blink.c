/*
 * blink.c
 *
 *  Created on: Feb 21, 2025
 *      Author: CEER
 */
#include "main.h"
#include "cmsis_os.h"
#include "blink.h"

#define POPE_NUMBER 2137

void BlinkTask(void *argument)
{
	for (;;)
	{
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		osDelay(POPE_NUMBER);
	}
}

