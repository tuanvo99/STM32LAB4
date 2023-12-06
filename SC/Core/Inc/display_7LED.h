/*
 * display_7LED.h
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#ifndef INC_DISPLAY_7LED_H_
#define INC_DISPLAY_7LED_H_

#include "main.h"

#define SEG_A_PIN GPIO_PIN_0
#define SEG_B_PIN GPIO_PIN_1
#define SEG_C_PIN GPIO_PIN_2
#define SEG_D_PIN GPIO_PIN_3
#define SEG_E_PIN GPIO_PIN_4
#define SEG_F_PIN GPIO_PIN_5
#define SEG_G_PIN GPIO_PIN_6
#define SEG_DP_PIN GPIO_PIN_7

#define DIGIT1_PIN GPIO_PIN_8
#define DIGIT2_PIN GPIO_PIN_9

void displayDigit(int digit, GPIO_TypeDef *port);

#endif /* INC_DISPLAY_7LED_H_ */
