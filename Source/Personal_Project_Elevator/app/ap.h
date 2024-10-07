/*
 * ap.h
 *
 *  Created on: Sep 13, 2024
 *      Author: OMG
 */

#ifndef AP_H_
#define AP_H_

#include "hw.h"
#include "gpio.h"
#include "step_motor.h"
#include "optical_sensor.h"
#include "usart.h"

// Define Constant
#define IN1_PORT 	GPIOA
#define IN2_PORT 	GPIOA
#define IN3_PORT 	GPIOA
#define IN4_PORT	GPIOB

#define IN1_PIN		GPIO_PIN_5
#define IN2_PIN		GPIO_PIN_6
#define IN3_PIN		GPIO_PIN_7
#define IN4_PIN		GPIO_PIN_6

// Declare Function Prototype
void apInit();
void apMain();

// Global Variables


#endif /* AP_H_ */
