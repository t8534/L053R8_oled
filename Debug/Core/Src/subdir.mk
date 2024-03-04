################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/disp_lib.c \
../Core/Src/f1206.c \
../Core/Src/f1608.c \
../Core/Src/f1612.c \
../Core/Src/f3216.c \
../Core/Src/main.c \
../Core/Src/sh1106_drv.c \
../Core/Src/stm32l0xx_hal_msp.c \
../Core/Src/stm32l0xx_it.c \
../Core/Src/stm32l0xx_nucleo.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32l0xx.c 

OBJS += \
./Core/Src/disp_lib.o \
./Core/Src/f1206.o \
./Core/Src/f1608.o \
./Core/Src/f1612.o \
./Core/Src/f3216.o \
./Core/Src/main.o \
./Core/Src/sh1106_drv.o \
./Core/Src/stm32l0xx_hal_msp.o \
./Core/Src/stm32l0xx_it.o \
./Core/Src/stm32l0xx_nucleo.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32l0xx.o 

C_DEPS += \
./Core/Src/disp_lib.d \
./Core/Src/f1206.d \
./Core/Src/f1608.d \
./Core/Src/f1612.d \
./Core/Src/f3216.d \
./Core/Src/main.d \
./Core/Src/sh1106_drv.d \
./Core/Src/stm32l0xx_hal_msp.d \
./Core/Src/stm32l0xx_it.d \
./Core/Src/stm32l0xx_nucleo.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32l0xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L053xx -c -I../Core/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L0xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/disp_lib.cyclo ./Core/Src/disp_lib.d ./Core/Src/disp_lib.o ./Core/Src/disp_lib.su ./Core/Src/f1206.cyclo ./Core/Src/f1206.d ./Core/Src/f1206.o ./Core/Src/f1206.su ./Core/Src/f1608.cyclo ./Core/Src/f1608.d ./Core/Src/f1608.o ./Core/Src/f1608.su ./Core/Src/f1612.cyclo ./Core/Src/f1612.d ./Core/Src/f1612.o ./Core/Src/f1612.su ./Core/Src/f3216.cyclo ./Core/Src/f3216.d ./Core/Src/f3216.o ./Core/Src/f3216.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/sh1106_drv.cyclo ./Core/Src/sh1106_drv.d ./Core/Src/sh1106_drv.o ./Core/Src/sh1106_drv.su ./Core/Src/stm32l0xx_hal_msp.cyclo ./Core/Src/stm32l0xx_hal_msp.d ./Core/Src/stm32l0xx_hal_msp.o ./Core/Src/stm32l0xx_hal_msp.su ./Core/Src/stm32l0xx_it.cyclo ./Core/Src/stm32l0xx_it.d ./Core/Src/stm32l0xx_it.o ./Core/Src/stm32l0xx_it.su ./Core/Src/stm32l0xx_nucleo.cyclo ./Core/Src/stm32l0xx_nucleo.d ./Core/Src/stm32l0xx_nucleo.o ./Core/Src/stm32l0xx_nucleo.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32l0xx.cyclo ./Core/Src/system_stm32l0xx.d ./Core/Src/system_stm32l0xx.o ./Core/Src/system_stm32l0xx.su

.PHONY: clean-Core-2f-Src

