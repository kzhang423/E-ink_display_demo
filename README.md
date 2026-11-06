# E-ink display demo w/ NUCLEO-WB09KE

## Introduction

This demo demonstrates communication with an e-ink display via **SPI**. 

This demo uses an existing [STM32 demo](https://github.com/waveshareteam/e-Paper) by WaveShare and configures it to work with the NUCLEO-WB09KE development board.


## Display information and configuration

The display used in this demo is a [296x128 2.9" e-ink display](https://www.waveshare.com/2.9inch-e-paper.htm) by WaveShare.

## ST morpho pinout translation

### Pin header CN4

|Pin|WB09KE Pin|Signal|
|---|---|---|
|3|PB6|RST|
|5|PB7|DC|
|7|VDD|-|
|9|GND|-|
|11|PB3|SPI3_SCK|
|13|PA8|SPI3_MISO|
|15|PA11|SPI3_MOSI|
|17|PA9|SPI3_NSS|
|19|PB14|BUSY|
|21|PB15|CS|
|30|PB5|PWR|

