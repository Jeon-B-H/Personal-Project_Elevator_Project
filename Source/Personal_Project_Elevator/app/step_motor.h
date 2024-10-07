/*
 * step_motor.h
 *
 *  Created on: Sep 29, 2024
 *      Author: OMG
 */

#ifndef STEP_MOTOR_H_
#define STEP_MOTOR_H_

// Include Extra Header File
#include "ap.h"
#include "main.h"
#include "dma.h"
#include "usart.h"
#include "gpio.h"

// Define Constant
#define IN1_PORT 	GPIOA
#define IN2_PORT 	GPIOA
#define IN3_PORT 	GPIOA
#define IN4_PORT	GPIOB

#define IN1_PIN		GPIO_PIN_5
#define IN2_PIN		GPIO_PIN_6
#define IN3_PIN		GPIO_PIN_7
#define IN4_PIN		GPIO_PIN_6

// Function Prototype
void control_step_motor(uint8_t up_down, uint8_t motor_enable);
void enter_IN_value (uint8_t* p_board);

#endif /* STEP_MOTOR_H_ */
