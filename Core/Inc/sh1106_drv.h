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

// Pinout for Nucleo L053R8 - OLED 1.3

// OLED_RST_PIN - PORT C, pin 0
// OLED_DC_PIN  - PORT C, pin 1
// OLED_CS_PIN  - PORT C, pin 2
// SPI_MOSI     - PORT B, pin 15
// SPI_SCK      - PORT B, pin 14


#define DISP_WIDTH   128
#define DISP_HEIGHT   64


//todo
/*
#define OLED_RST  9 
#define OLED_DC   8
#define OLED_CS  10
#define SPI_MOSI 11     // connect to the DIN pin of OLED 
#define SPI_SCK  13     // connect to the CLK pin of OLED 
*/

//test
//todo change to enum after it will works.
#define OLED_RST  9 
#define OLED_DC   8
#define OLED_CS  10
#define SPI_MOSI 11     /* connect to the DIN pin of OLED */
#define SPI_SCK  13     /* connect to the CLK pin of OLED */

// todfo: after it will work change to SET/RESET
#define LOW       0
#define HIGH      1



void SH1106_init(void);
void SH1106_clearScreen(void);
void SH1106_setPixel(int x, int y, char color);
void SH1106_updateScreen(void);



#endif  // _SH1106_DRV_H_



