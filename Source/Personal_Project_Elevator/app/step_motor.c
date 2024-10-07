/*
 * step_motor.c
 *
 *  Created on: Sep 29, 2024
 *      Author: OMG
 */
#include "step_motor.h"

void control_step_motor(uint8_t up_down, uint8_t motor_enable) {
	uint8_t board[8][4] = {
			{1, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 1, 1}, {0, 0, 1, 0},
			{0, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}, {1, 0, 0, 0}
	};

	static uint16_t delay_time = 1002;
	static int board_index = 0;

	if(motor_enable) {
		switch(up_down) {
		case 1 :
				for(board_index = 0; board_index <8; board_index++) {
					enter_IN_value(board[board_index]);
					HAL_Delay(delay_time);

					if(delay_time>2) delay_time-=50;
				}
			break;
		case 0:
				for(board_index = 7; board_index >= 0; board_index--) {
					enter_IN_value(board[board_index]);
					HAL_Delay(delay_time);

					if(delay_time>2) delay_time-=50;
				}

			break;
		}
	}
}

void enter_IN_value (uint8_t* p_board) {
	HAL_GPIO_WritePin(IN1_PORT, IN1_PIN, p_board[0]);
	HAL_GPIO_WritePin(IN2_PORT, IN2_PIN, p_board[1]);
	HAL_GPIO_WritePin(IN3_PORT, IN3_PIN, p_board[2]);
	HAL_GPIO_WritePin(IN4_PORT, IN4_PIN, p_board[3]);
}
