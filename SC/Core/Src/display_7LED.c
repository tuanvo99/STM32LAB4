/*
 * display_7LED.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "display_7LED.h"

void displayDigit(int digit, GPIO_TypeDef *port)
{
  // Common Cathode 7-segment display
  switch (digit)
  {
    case 0:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_B_PIN | SEG_C_PIN | SEG_D_PIN | SEG_E_PIN | SEG_F_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_G_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 1:
      HAL_GPIO_WritePin(port, SEG_B_PIN | SEG_C_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_D_PIN | SEG_E_PIN | SEG_F_PIN | SEG_G_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 2:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_B_PIN | SEG_G_PIN | SEG_E_PIN | SEG_D_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_C_PIN | SEG_F_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 3:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_B_PIN | SEG_G_PIN | SEG_C_PIN | SEG_D_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_E_PIN | SEG_F_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 4:
      HAL_GPIO_WritePin(port, SEG_B_PIN | SEG_C_PIN | SEG_G_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_D_PIN | SEG_E_PIN | SEG_F_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 5:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_C_PIN | SEG_D_PIN | SEG_G_PIN | SEG_B_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_E_PIN | SEG_F_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 6:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_C_PIN | SEG_D_PIN | SEG_E_PIN | SEG_F_PIN | SEG_G_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_B_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 7:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_B_PIN | SEG_C_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_D_PIN | SEG_E_PIN | SEG_F_PIN | SEG_G_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 8:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_B_PIN | SEG_C_PIN | SEG_D_PIN | SEG_E_PIN | SEG_F_PIN | SEG_G_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    case 9:
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_B_PIN | SEG_C_PIN | SEG_D_PIN | SEG_F_PIN | SEG_G_PIN, GPIO_PIN_SET);
      HAL_GPIO_WritePin(port, SEG_E_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
    default:
      // Display blank for other values
      HAL_GPIO_WritePin(port, SEG_A_PIN | SEG_B_PIN | SEG_C_PIN | SEG_D_PIN | SEG_E_PIN | SEG_F_PIN | SEG_G_PIN | SEG_DP_PIN, GPIO_PIN_RESET);
      break;
  }
}
