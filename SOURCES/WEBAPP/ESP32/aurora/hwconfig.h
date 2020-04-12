#ifndef HWCONFIG_H_
#define HWCONFIG_H_

// Defines the GPIO for SW-I2C
#define I2C_SDA_PIN 17
#define I2C_SCL_PIN 16

// The I2C addresses that are in use
// DSP address on I2C bus
#define DSP_ADDR           (0x70>>1)
// ADC address on I2C bus
#define AK5558_I2C_ADDR    (0x22>>1)
// DAC address on I2C bus
#define AK4458_I2C_ADDR    (0x20>>1)
// S/P-DIF-Mux on AddOnA
#define ADDONA_SPDIFMUX_ADDR (0x82>>1)
// S/P-DIF-Mux on AddOnB
#define ADDONB_SPDIFMUX_ADDR (0x82>>1)

// SH1106 I2C display controller
#define SH1106_I2C_ADDR (0x3C) // 0x78 >> 1

#endif