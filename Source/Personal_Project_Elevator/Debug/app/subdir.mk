################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../app/ap.c \
../app/step_motor.c 

OBJS += \
./app/ap.o \
./app/step_motor.o 

C_DEPS += \
./app/ap.d \
./app/step_motor.d 


# Each subdirectory must supply rules for building sources it contributes
app/%.o app/%.su app/%.cyclo: ../app/%.c app/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/DATA/SOC_workspace/stm32/Personal_Project_Elevator/app" -I"C:/DATA/SOC_workspace/stm32/Personal_Project_Elevator/app/common" -I"C:/DATA/SOC_workspace/stm32/Personal_Project_Elevator/app/hw" -I"C:/DATA/SOC_workspace/stm32/Personal_Project_Elevator/app/hw/driver" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-app

clean-app:
	-$(RM) ./app/ap.cyclo ./app/ap.d ./app/ap.o ./app/ap.su ./app/step_motor.cyclo ./app/step_motor.d ./app/step_motor.o ./app/step_motor.su

.PHONY: clean-app

