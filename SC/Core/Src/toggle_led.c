/*
 * toggle_led.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "toggle_led.h"

void toggle_LED_RED1(){
	HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
}

void toggle_LED_YELLOW1(){
	HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);
}

void toggle_LED_GREEN1(){
	HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
}

void toggle_LED_RED2(){
	HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
}

void toggle_LED_YELLOW2(){
	HAL_GPIO_TogglePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin);
}

void toggle_LED_GREEN2(){
	HAL_GPIO_TogglePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);
}
