################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./Application/app.obj" \
"./Application/isr.obj" \
"./F2802x_Component/F2802x_Device.obj" \
"./F2802x_Component/source/F2802x_CodeStartBranch.obj" \
"./F2802x_Component/source/adc.obj" \
"./F2802x_Component/source/cap.obj" \
"./F2802x_Component/source/clk.obj" \
"./F2802x_Component/source/comp.obj" \
"./F2802x_Component/source/cpu.obj" \
"./F2802x_Component/source/flash.obj" \
"./F2802x_Component/source/gpio.obj" \
"./F2802x_Component/source/osc.obj" \
"./F2802x_Component/source/pie.obj" \
"./F2802x_Component/source/pll.obj" \
"./F2802x_Component/source/pwm.obj" \
"./F2802x_Component/source/pwr.obj" \
"./F2802x_Component/source/sci.obj" \
"./F2802x_Component/source/sci_io.obj" \
"./F2802x_Component/source/spi.obj" \
"./F2802x_Component/source/timer.obj" \
"./F2802x_Component/source/wdog.obj" \
"./User_Component/Delay/Delay.obj" \
"./User_Component/Example/example.obj" \
"./User_Component/LED_GPIO/LED_GPIO.obj" \
"./User_Component/User_System/User_System.obj" \
"../CMD/F28027.cmd" \
"../F2802x_Component/lib/IQmath.lib" \
"../F2802x_Component/lib/SFO_TI_Build_V6.lib" \
"../F2802x_Component/lib/SFO_TI_Build_V6b.lib" \
"../F2802x_Component/lib/driverlib.lib" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Application/subdir_vars.mk
-include CMD/subdir_vars.mk
-include F2802x_Component/subdir_vars.mk
-include F2802x_Component/lib/subdir_vars.mk
-include F2802x_Component/source/subdir_vars.mk
-include User_Component/Delay/subdir_vars.mk
-include User_Component/Example/subdir_vars.mk
-include User_Component/LED_GPIO/subdir_vars.mk
-include User_Component/User_System/subdir_vars.mk
-include subdir_rules.mk
-include Application/subdir_rules.mk
-include CMD/subdir_rules.mk
-include F2802x_Component/subdir_rules.mk
-include F2802x_Component/lib/subdir_rules.mk
-include F2802x_Component/source/subdir_rules.mk
-include User_Component/Delay/subdir_rules.mk
-include User_Component/Example/subdir_rules.mk
-include User_Component/LED_GPIO/subdir_rules.mk
-include User_Component/User_System/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
myProject1.cof \

EXE_OUTPUTS__QUOTED += \
"myProject1.cof" \

BIN_OUTPUTS += \
myProject1.hex \

BIN_OUTPUTS__QUOTED += \
"myProject1.hex" \


# All Target
all: myProject1.cof

# Tool invocations
myProject1.cof: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/bin/cl2000" -v28 -ml -mt -g --diag_wrap=off --diag_warning=225 --display_error_number -z -m"myProject1.map" --stack_size=0x300 --warn_sections -i"D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/lib" -i"D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="myProject1_linkInfo.xml" --rom_model -o "myProject1.cof" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

myProject1.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/bin/hex2000"  -o "myProject1.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "Application\app.obj" "Application\isr.obj" "F2802x_Component\F2802x_Device.obj" "F2802x_Component\source\F2802x_CodeStartBranch.obj" "F2802x_Component\source\adc.obj" "F2802x_Component\source\cap.obj" "F2802x_Component\source\clk.obj" "F2802x_Component\source\comp.obj" "F2802x_Component\source\cpu.obj" "F2802x_Component\source\flash.obj" "F2802x_Component\source\gpio.obj" "F2802x_Component\source\osc.obj" "F2802x_Component\source\pie.obj" "F2802x_Component\source\pll.obj" "F2802x_Component\source\pwm.obj" "F2802x_Component\source\pwr.obj" "F2802x_Component\source\sci.obj" "F2802x_Component\source\sci_io.obj" "F2802x_Component\source\spi.obj" "F2802x_Component\source\timer.obj" "F2802x_Component\source\wdog.obj" "User_Component\Delay\Delay.obj" "User_Component\Example\example.obj" "User_Component\LED_GPIO\LED_GPIO.obj" "User_Component\User_System\User_System.obj" 
	-$(RM) "main.d" "Application\app.d" "Application\isr.d" "F2802x_Component\F2802x_Device.d" "F2802x_Component\source\adc.d" "F2802x_Component\source\cap.d" "F2802x_Component\source\clk.d" "F2802x_Component\source\comp.d" "F2802x_Component\source\cpu.d" "F2802x_Component\source\flash.d" "F2802x_Component\source\gpio.d" "F2802x_Component\source\osc.d" "F2802x_Component\source\pie.d" "F2802x_Component\source\pll.d" "F2802x_Component\source\pwm.d" "F2802x_Component\source\pwr.d" "F2802x_Component\source\sci.d" "F2802x_Component\source\sci_io.d" "F2802x_Component\source\spi.d" "F2802x_Component\source\timer.d" "F2802x_Component\source\wdog.d" "User_Component\Delay\Delay.d" "User_Component\Example\example.d" "User_Component\LED_GPIO\LED_GPIO.d" "User_Component\User_System\User_System.d" 
	-$(RM) "F2802x_Component\source\F2802x_CodeStartBranch.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

