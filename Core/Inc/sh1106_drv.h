/**
  ******************************************************************************
  * @file    sh1106.h
  * @author  Waveshare Team
  * @version 
  * @date    21-June-2017
  * @brief   This file includes the OLED driver for SH1106 display moudle
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, WAVESHARE SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  ******************************************************************************
  *
  * Display: https://www.waveshare.com/1.3inch-oled-b.htm
  *
  * Resolution: 128x64
  *
  * Interface:
  *
  * PIN      Symbol     Description
  *
  *  1       VCC        Power positive input 3.3-5V
  *  2       GND        Ground
  *  3       NC         NC
  *  4       DIN        Data input
  *  5       CLK        Clock signal input
  *  6       CS         Chip selection, low active
  *  7       D/C        Command signal, low level for command, high level for data
  *  8       RES        Reset signal, low active
  *
  *
  * Hardware config:
  *
  * MODE/INTERFACE      BS0/BS1      DIN      SCK
  *
  * 3-wire SPI          1/0          MOSI     SCLK
  * 4-wire SPI          0/0          MOSI     SCLK
  * I2C                 0/1          SDA      SCL
  *
  *
  *
  * Following datasheet OLED 1.3" from Waveshare, SPI settings:
  *
  * The clock is Idle High, and Active - Low = CPOL = 1
  * The sample is on the rising edge, which is the second edge = CPHA = 1
  * SPI Mode = 3, if CPOL = 1 and CPHA = 1
  * Clock cycle 250ns = 4 MHz.
  *
  */


#ifndef _SH1106_DRV_H_
#define _SH1106_DRV_H_

#include <stdint.h>

// SPI1 settings:
//
// Basic parameters:
//     Mode: Full-Duplex Master
//     Hardware NNS signal: Disabled
//     Frame format: Motorola
//     Data size: 8 bits
//     First bit: MSB first
//
// Clock parameters:
//     Prescaler (for baud rate): 2
//     Baud rate: 1.0485 MBits/s
//     Clock Polarity (CPOL): High
//     Clock Phase (CPHA): 2 Edge
//
// Advanced parameters:
//     CRC calculation: Disabled
//     NSS signal type: Software
//
// Pinout:
//    PB3 - SP1_SCK, Alternate function push/pull, no pull up and pull down, max output speed High
//    PB4 - SP1_MISO, Alternate function push/pull, no pull up and pull down, max output speed High
//    PB5 - SP1_MOSI, Alternate function push/pull, no pull up and pull down, max output speed High
//    PC2 - OLED_CS, GPIO output level Low, GPIO mode - output push pull, no pull up and pull down, max output speed Low

// OLED display related control pinout:
//     PC0 - OLED_RES, GPIO output level Low, GPIO mode - output push pull, no pull up and pull down, max output speed Low
//     PC1 - OLED_DC, GPIO output level Low, GPIO mode - output push pull, no pull up and pull down, max output speed Low

// Connection Nucleo - Oled 1.3
//
// PB3 (SP1_SCK) ------------------> CLK
// PB4 (SP1_MISO)------------------> not connected
// PB5 (SP1_MOSI)------------------> DIN
// PC2 (OLED_CS)-------------------> CS
// PC0 (OLED_RES)------------------> RES
// PC1 (OLED_DC)-------------------> D/C
//


#define DISP_WIDTH   128
#define DISP_HEIGHT   64


//todo change to enum after it will works.
#define OLED_RST  9 
#define OLED_DC   8
#define OLED_CS  10
#define SPI_MOSI 11
#define SPI_SCK  13

// todo: after it will work change to SET/RESET
#define LOW       0
#define HIGH      1



void SH1106_init(void);
void SH1106_clearScreen(void);
void SH1106_setPixel(int x, int y, char color);
void SH1106_updateScreen(void);



#endif  // _SH1106_DRV_H_



