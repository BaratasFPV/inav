/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#define TARGET_BOARD_IDENTIFIER "CCF3" // CopterControl 3D F3

#define CONFIG_FASTLOOP_PREFERRED_ACC ACC_DEFAULT

#define LED0                    PB3

#define BEEPER                  PA15
#define BEEPER_OPT              PB2

#define USE_EXTI
#define GYRO_INT_EXTI            PA3
#define USE_MPU_DATA_READY_SIGNAL

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2

#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_I2C
#define USE_I2C_DEVICE_2        // Flex port - SCL/PB10, SDA/PB11
#define I2C_DEVICE_2_SHARES_UART3

#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1

#define M25P16_CS_PIN           PB12
#define M25P16_SPI_BUS          BUS_SPI2

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define USE_GYRO
#define USE_GYRO_MPU6000
#define GYRO_MPU6000_ALIGN CW270_DEG

#define USE_ACC
#define USE_ACC_MPU6000
#define ACC_MPU6000_ALIGN CW270_DEG

// External I2C BARO
#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C2
#define USE_BARO_MS5611
#define USE_BARO_BMP280

// External I2C MAG
#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C2
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883

#define USE_VCP
#define USE_UART1
#define USE_UART3

#define SERIAL_PORT_COUNT 3

#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_ADC
#define ADC_CHANNEL_1_PIN               PA0
#define ADC_CHANNEL_2_PIN               PB1

#define VBAT_ADC_CHANNEL                ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL       ADC_CHN_2
#define RSSI_ADC_CHANNEL                ADC_CHN_3

// LED strip is on PWM5 output pin
//#define USE_LED_STRIP

#define USE_SPEKTRUM_BIND
// USART3, PB11 (Flexport)
#define BIND_PIN                PB11

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

//#define NAV_AUTO_MAG_DECLINATION
//#define NAV_GPS_GLITCH_DETECTION
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

#define TARGET_MOTOR_COUNT 6



// Number of available PWM outputs
#define MAX_PWM_OUTPUT_PORTS    11


// IO - stm32f303cc in 48pin package
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         (BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTF         (BIT(0)|BIT(1)|BIT(4))

#define USABLE_TIMER_CHANNEL_COUNT 12
#define USED_TIMERS             (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) | TIM_N(8) | TIM_N(16) | TIM_N(17))
