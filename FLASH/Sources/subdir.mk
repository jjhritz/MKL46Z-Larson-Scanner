################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/frdm_led.c" \
"../Sources/global.c" \
"../Sources/gpio.c" \
"../Sources/int.c" \
"../Sources/led.c" \
"../Sources/main.c" \
"../Sources/port.c" \
"../Sources/pushb.c" \
"../Sources/scanner.c" \
"../Sources/systick.c" \

C_SRCS += \
../Sources/frdm_led.c \
../Sources/global.c \
../Sources/gpio.c \
../Sources/int.c \
../Sources/led.c \
../Sources/main.c \
../Sources/port.c \
../Sources/pushb.c \
../Sources/scanner.c \
../Sources/systick.c \

OBJS += \
./Sources/frdm_led.o \
./Sources/global.o \
./Sources/gpio.o \
./Sources/int.o \
./Sources/led.o \
./Sources/main.o \
./Sources/port.o \
./Sources/pushb.o \
./Sources/scanner.o \
./Sources/systick.o \

OBJS_QUOTED += \
"./Sources/frdm_led.o" \
"./Sources/global.o" \
"./Sources/gpio.o" \
"./Sources/int.o" \
"./Sources/led.o" \
"./Sources/main.o" \
"./Sources/port.o" \
"./Sources/pushb.o" \
"./Sources/scanner.o" \
"./Sources/systick.o" \

C_DEPS += \
./Sources/frdm_led.d \
./Sources/global.d \
./Sources/gpio.d \
./Sources/int.d \
./Sources/led.d \
./Sources/main.d \
./Sources/port.d \
./Sources/pushb.d \
./Sources/scanner.d \
./Sources/systick.d \

OBJS_OS_FORMAT += \
./Sources/frdm_led.o \
./Sources/global.o \
./Sources/gpio.o \
./Sources/int.o \
./Sources/led.o \
./Sources/main.o \
./Sources/port.o \
./Sources/pushb.o \
./Sources/scanner.o \
./Sources/systick.o \

C_DEPS_QUOTED += \
"./Sources/frdm_led.d" \
"./Sources/global.d" \
"./Sources/gpio.d" \
"./Sources/int.d" \
"./Sources/led.d" \
"./Sources/main.d" \
"./Sources/port.d" \
"./Sources/pushb.d" \
"./Sources/scanner.d" \
"./Sources/systick.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/frdm_led.o: ../Sources/frdm_led.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/frdm_led.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/frdm_led.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/global.o: ../Sources/global.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/global.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/global.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/gpio.o: ../Sources/gpio.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/gpio.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/gpio.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/int.o: ../Sources/int.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/int.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/int.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/led.o: ../Sources/led.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/led.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/led.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/port.o: ../Sources/port.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/port.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/port.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/pushb.o: ../Sources/pushb.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/pushb.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/pushb.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/scanner.o: ../Sources/scanner.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/scanner.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/scanner.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/systick.o: ../Sources/systick.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/systick.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/systick.o"
	@echo 'Finished building: $<'
	@echo ' '


