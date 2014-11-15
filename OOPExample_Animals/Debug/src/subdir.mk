################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Animal.cpp \
../src/Eagle.cpp \
../src/Fish.cpp \
../src/OOPExample_Animals.cpp \
../src/Tiger.cpp 

OBJS += \
./src/Animal.o \
./src/Eagle.o \
./src/Fish.o \
./src/OOPExample_Animals.o \
./src/Tiger.o 

CPP_DEPS += \
./src/Animal.d \
./src/Eagle.d \
./src/Fish.d \
./src/OOPExample_Animals.d \
./src/Tiger.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 --std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


