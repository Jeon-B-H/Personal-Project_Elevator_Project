#include "ap.h"
#include "led.h"
#include "usart.h"
#include "cmsis_os.h"

// Gloabal Variables
uint8_t receive_data[1];
uint8_t current_floor;
extern uint8_t target_floor;
uint8_t temp[2];

// Initialization of app
void apInit() {
	while(1) {
		uint8_t first_floor_sensor = HAL_GPIO_ReadPin(FIRST_FLOOR_SENSOR_PORT, GPIO_PIN_8);

		if(first_floor_sensor) {
			// Turn off the step motor
			control_step_motor(0, 0);
			current_floor = 1;
			target_floor = 1;
			return;
		}

		// Lift Down
		control_step_motor(0, 1);
	}
}

// New Main Functions
void apMain() {
	HAL_UART_Receive_DMA(&huart1, receive_data, sizeof(receive_data));

    osKernelStart();
}




