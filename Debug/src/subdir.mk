################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/practice_Template_Class\ and\ function.cpp 

CPP_DEPS += \
./src/practice_Template_Class\ and\ function.d 

OBJS += \
./src/practice_Template_Class\ and\ function.o 


# Each subdirectory must supply rules for building sources it contributes
src/practice_Template_Class\ and\ function.o: ../src/practice_Template_Class\ and\ function.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/practice_Template_Class and function.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/practice_Template_Class\ and\ function.d ./src/practice_Template_Class\ and\ function.o

.PHONY: clean-src

