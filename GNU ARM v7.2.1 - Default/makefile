################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include update-tc-link-key/subdir.mk
-include temperature-si7053-stub/subdir.mk
-include temperature-measurement-server/subdir.mk
-include tamper-switch/EFR32/subdir.mk
-include simple-main/subdir.mk
-include sim-eeprom1/EFR32/subdir.mk
-include serial/EFR32/subdir.mk
-include serial/subdir.mk
-include scan-dispatch/subdir.mk
-include reporting/subdir.mk
-include power-configuration-server/subdir.mk
-include poll-control-server/subdir.mk
-include ota-storage-simple-eeprom/subdir.mk
-include ota-storage-simple/subdir.mk
-include ota-storage-common/subdir.mk
-include ota-common/subdir.mk
-include ota-client-policy/subdir.mk
-include ota-client/subdir.mk
-include ota-bootload/subdir.mk
-include network-steering/subdir.mk
-include manufacturing-library-ota/subdir.mk
-include manufacturing-library-cli/subdir.mk
-include led-blink/EFR32/subdir.mk
-include idle-sleep/subdir.mk
-include identify/subdir.mk
-include ias-zone-server/subdir.mk
-include i2c-driver-stub/subdir.mk
-include heartbeat/subdir.mk
-include hal-library/EFR32/subdir.mk
-include gpio-sensor/EFR32/subdir.mk
-include generic-interrupt-control/EFR32/subdir.mk
-include form-and-join/subdir.mk
-include find-and-bind-initiator/subdir.mk
-include external-generated-files/subdir.mk
-include end-device-support/subdir.mk
-include emlib/subdir.mk
-include emdrv/subdir.mk
-include ember-minimal-printf/subdir.mk
-include efr32/subdir.mk
-include eeprom/subdir.mk
-include debug-jtag/EFR32/subdir.mk
-include debug-basic-library/EFR32/subdir.mk
-include counters/subdir.mk
-include configuration-server/subdir.mk
-include coexistence/EFR32/subdir.mk
-include button-interface/EFR32/subdir.mk
-include battery-monitor-stub/subdir.mk
-include basic/subdir.mk
-include antenna-stub/subdir.mk
-include address-table/subdir.mk
-include adc/EFR32/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: pre-build main-build

# Main-build Target
main-build: Z3ContactSensorv654.axf

# Tool invocations
Z3ContactSensorv654.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//platform/base/hal/micro/cortexm3/efm32/gcc-cfg.ld" -L"/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//platform/base/hal/micro/cortexm3/" -Xlinker --defsym=FLASH_SIZE=1048576 -Xlinker --defsym=RAM_SIZE=262144 -Xlinker --defsym=SIMEEPROM_SIZE=8192 -Xlinker --defsym=LOCKBITS_IN_MAINFLASH_SIZE=0 -Xlinker --defsym=APP_GECKO_INFO_PAGE_BTL=1 -Xlinker --defsym=EMBER_MALLOC_HEAP_SIZE=0 -Xlinker --gc-sections -Xlinker -Map="Z3ContactSensorv654.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o Z3ContactSensorv654.axf -Wl,--start-group "./Z3ContactSensorv654_callbacks.o" "./af-event.o" "./af-main-common.o" "./af-main-soc.o" "./af-node.o" "./af-security-common.o" "./af-trust-center.o" "./afv2-bookkeeping.o" "./attribute-size.o" "./attribute-storage.o" "./attribute-table.o" "./call-command-handler.o" "./callback-stub.o" "./cli.o" "./client-api.o" "./command-interpreter2.o" "./core-cli.o" "./crc.o" "./crypto-state.o" "./ember-base-configuration.o" "./ember-configuration.o" "./endian.o" "./library.o" "./mem-util.o" "./message.o" "./multi-network.o" "./network-cli.o" "./option-cli.o" "./plugin-cli.o" "./print-formatter.o" "./print.o" "./process-cluster-message.o" "./process-global-message.o" "./random.o" "./security-address-cache.o" "./security-cli.o" "./service-discovery-common.o" "./service-discovery-soc.o" "./stack-handler-stub.o" "./time-util.o" "./token-def.o" "./util.o" "./zcl-cli.o" "./zdo-cli.o" "./zigbee-device-common.o" "./zigbee-device-library.o" "./adc/EFR32/adc-efr32.o" "./address-table/address-table-cli.o" "./address-table/address-table.o" "./antenna-stub/antenna-stub.o" "./basic/basic.o" "./battery-monitor-stub/battery-monitor-stub.o" "./button-interface/EFR32/button-interface.o" "./coexistence/EFR32/coexistence-802154.o" "./coexistence/EFR32/coexistence-directional-priority.o" "./coexistence/EFR32/coexistence-hal.o" "./coexistence/EFR32/coexistence.o" "./configuration-server/configuration-server-cli.o" "./configuration-server/configuration-server.o" "./counters/counters-cli.o" "./counters/counters-ota.o" "./counters/counters-soc.o" "./debug-basic-library/EFR32/SEGGER_RTT.o" "./debug-jtag/EFR32/debug-jtag-efr32.o" "./eeprom/eeprom-afv2.o" "./eeprom/eeprom-cli.o" "./eeprom/eeprom.o" "./efr32/assert-crash-handlers.o" "./efr32/button.o" "./efr32/buzzer-efr32.o" "./efr32/cstartup-common.o" "./efr32/diagnostic.o" "./efr32/ext-device.o" "./efr32/faults-v7m.o" "./efr32/isr-stubs.o" "./efr32/led.o" "./efr32/mfg-token.o" "./efr32/micro-common.o" "./efr32/micro.o" "./efr32/mpu.o" "./efr32/sleep-efm32.o" "./efr32/token.o" "./ember-minimal-printf/ember-printf.o" "./emdrv/dmadrv.o" "./emdrv/gpiointerrupt.o" "./emdrv/rtcdriver.o" "./emdrv/sleep.o" "./emdrv/tempdrv.o" "./emdrv/uartdrv.o" "./emdrv/ustimer.o" "./emlib/em_adc.o" "./emlib/em_cmu.o" "./emlib/em_core.o" "./emlib/em_cryotimer.o" "./emlib/em_emu.o" "./emlib/em_gpio.o" "./emlib/em_i2c.o" "./emlib/em_ldma.o" "./emlib/em_leuart.o" "./emlib/em_msc.o" "./emlib/em_prs.o" "./emlib/em_rmu.o" "./emlib/em_rtcc.o" "./emlib/em_se.o" "./emlib/em_system.o" "./emlib/em_timer.o" "./emlib/em_usart.o" "./emlib/em_wdog.o" "./emlib/system_efr32mg12p.o" "./end-device-support/end-device-move.o" "./end-device-support/end-device-support-cli.o" "./end-device-support/end-device-support.o" "./end-device-support/polling-common.o" "./end-device-support/polling-soc.o" "./external-generated-files/bootloader-interface-app.o" "./external-generated-files/bootloader-interface.o" "./external-generated-files/btl_interface.o" "./external-generated-files/btl_interface_storage.o" "./find-and-bind-initiator/find-and-bind-initiator-cli.o" "./find-and-bind-initiator/find-and-bind-initiator.o" "./form-and-join/form-and-join-afv2.o" "./form-and-join/form-and-join-node-adapter.o" "./form-and-join/form-and-join.o" "./generic-interrupt-control/EFR32/generic-interrupt-control-efr32.o" "./gpio-sensor/EFR32/gpio-sensor.o" "./hal-library/EFR32/hal-config-gpio.o" "./hal-library/EFR32/hal-config.o" "./heartbeat/heartbeat.o" "./i2c-driver-stub/i2c-driver-stub.o" "./ias-zone-server/ias-zone-server-cli.o" "./ias-zone-server/ias-zone-server.o" "./identify/identify-cli.o" "./identify/identify.o" "./idle-sleep/idle-sleep-cli.o" "./idle-sleep/idle-sleep-soc.o" "./idle-sleep/idle-sleep.o" "./led-blink/EFR32/led-blink.o" "./manufacturing-library-cli/manufacturing-library-cli-soc.o" "./manufacturing-library-ota/manufacturing-library-ota.o" "./network-steering/network-steering-cli.o" "./network-steering/network-steering-soc.o" "./network-steering/network-steering.o" "./ota-bootload/ota-bootload-cli.o" "./ota-bootload/ota-bootload-soc.o" "./ota-client/ota-client-cli.o" "./ota-client/ota-client-page-request.o" "./ota-client/ota-client-signature-verify.o" "./ota-client/ota-client.o" "./ota-client-policy/ota-client-policy.o" "./ota-common/ota-common.o" "./ota-storage-common/ota-storage-common-cli.o" "./ota-storage-common/ota-storage-common.o" "./ota-storage-simple/ota-storage-simple.o" "./ota-storage-simple-eeprom/ota-storage-eeprom-page-erase.o" "./ota-storage-simple-eeprom/ota-storage-eeprom-read-modify-write.o" "./ota-storage-simple-eeprom/ota-storage-eeprom.o" "./poll-control-server/poll-control-server.o" "./power-configuration-server/power-configuration-server.o" "./reporting/reporting-cli.o" "./reporting/reporting-default-configuration.o" "./reporting/reporting.o" "./scan-dispatch/scan-dispatch.o" "./serial/EFR32/serial.o" "./serial/com.o" "./sim-eeprom1/EFR32/sim-eeprom.o" "./simple-main/simple-main.o" "./tamper-switch/EFR32/tamper-switch.o" "./temperature-measurement-server/temperature-measurement-server-cli.o" "./temperature-measurement-server/temperature-measurement-server.o" "./temperature-si7053-stub/temperature-si7053-stub.o" "./update-tc-link-key/update-tc-link-key-cli.o" "./update-tc-link-key/update-tc-link-key.o" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/cbke-library-dsa-verify-stub-cortexm3-gcc-efr32mg12p-rail/cbke-library-dsa-verify-stub.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/multi-network-stub-library-cortexm3-gcc-efr32mg12p-rail/multi-network-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/zll-stub-library-cortexm3-gcc-efr32mg12p-rail/zll-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/packet-validate-library-cortexm3-gcc-efr32mg12p-rail/packet-validate-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/install-code-library-cortexm3-gcc-efr32mg12p-rail/install-code-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/cbke-283k1-stub-library-cortexm3-gcc-efr32mg12p-rail/cbke-283k1-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/zigbee-r22-support-stub-library-cortexm3-gcc-efr32mg12p-rail/zigbee-r22-support-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/cbke-library-dsa-verify-283k1-stub-cortexm3-gcc-efr32mg12p-rail/cbke-library-dsa-verify-283k1-stub.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/gp-stub-library-cortexm3-gcc-efr32mg12p-rail/gp-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/hal-library-cortexm3-gcc-efr32mg12p-rail/hal-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/sim-eeprom1-library-cortexm3-gcc-efr32mg12p-rail/sim-eeprom1-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/cbke-library-dsa-sign-stub-cortexm3-gcc-efr32mg12p-rail/cbke-library-dsa-sign-stub.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/cbke-stub-library-cortexm3-gcc-efr32mg12p-rail/cbke-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/debug-basic-library-cortexm3-gcc-efr32mg12p-rail/debug-basic-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/debug-extended-stub-library-cortexm3-gcc-efr32mg12p-rail/debug-extended-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//platform/radio/rail_lib/autogen/librail_release/librail_efr32xg12_gcc_release.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/cbke-163k1-stub-library-cortexm3-gcc-efr32mg12p-rail/cbke-163k1-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/zigbee-pro-leaf-stack-cortexm3-gcc-efr32mg12p-rail/zigbee-pro-leaf-stack.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/end-device-bind-stub-library-cortexm3-gcc-efr32mg12p-rail/end-device-bind-stub-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/mfglib-library-cortexm3-gcc-efr32mg12p-rail/mfglib-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/security-library-core-cortexm3-gcc-efr32mg12p-rail/security-library-core.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/binding-table-library-cortexm3-gcc-efr32mg12p-rail/binding-table-library.a" "/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5//protocol/zigbee/build/security-library-link-keys-stub-cortexm3-gcc-efr32mg12p-rail/security-library-link-keys-stub.a" -lm -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: Z3ContactSensorv654.hex'
	arm-none-eabi-objcopy -O ihex "Z3ContactSensorv654.axf" "Z3ContactSensorv654.hex"
	@echo ' '

	@echo 'Building bin file: Z3ContactSensorv654.bin'
	arm-none-eabi-objcopy -O binary "Z3ContactSensorv654.axf" "Z3ContactSensorv654.bin"
	@echo ' '

	@echo 'Building s37 file: Z3ContactSensorv654.s37'
	arm-none-eabi-objcopy -O srec "Z3ContactSensorv654.axf" "Z3ContactSensorv654.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "Z3ContactSensorv654.axf"
	@echo ' '

	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Z3ContactSensorv654.axf
	-@echo ' '

pre-build:
	-sh '/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5/app/builder/Z3ContactSensorv654/Z3ContactSensorv654-prebuild.sh' 'Z3ContactSensorv654' '/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5/app/builder/Z3ContactSensorv654' '' '/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse'
	-@echo ' '

post-build:
	-sh '/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5/app/builder/Z3ContactSensorv654/Z3ContactSensorv654-postbuild.sh' 'Z3ContactSensorv654' '/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v2.5/app/builder/Z3ContactSensorv654' '' '/Users/clfilho/projects/Simplicity Studio 04-19/Simplicity Studio.app/Contents/Eclipse'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: main-build pre-build post-build

-include ../makefile.targets
