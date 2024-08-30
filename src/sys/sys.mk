# This file contains core defines.
# User should provide:
# LINKER_SCRIPT := path to linker script file
# TARGET_BINARY := path to binary file without extension

# Compiler and flags
CC = arm-none-eabi-gcc

OPT = -g -Og -gdwarf-2
CPU = -mcpu=cortex-m4 -mthumb -mfloat-abi=softfp -mfpu=fpv4-sp-d16
CFLAGS = $(CPU) $(OPT) -DSTM32L476xx 
CFLAGS += -Wpedantic -Wall
# CFLAGS += -Werror
ASFLAGS = $(CPU) $(OPT)
# ASFLAGS += -Werror
LDFLAGS = -specs=nosys.specs -T$(LINKER_SCRIPT) -Wl,-Map,$(TARGET_BINARY).map,--no-warn-rwx-segment $(CPU) $(OPT)