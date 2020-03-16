################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
User_Component/User_System/%.obj: ../User_Component/User_System/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/TMS/MyTestProject" --include_path="D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/include" --advice:performance=all -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="User_Component/User_System/$(basename $(<F)).d_raw" --obj_directory="User_Component/User_System" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


