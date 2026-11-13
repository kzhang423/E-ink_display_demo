# E-ink Display Demo w/ NUCLEO-WB09KE

## Introduction

This demo demonstrates communication with an e-ink display via SPI. 

This demo uses an existing [STM32 demo](https://github.com/waveshareteam/e-Paper) by WaveShare and configures it to work with the NUCLEO-WB09KE development board.


## Display information and configuration

The display used in this demo is a [296x128 2.9" e-ink display](https://www.waveshare.com/2.9inch-e-paper.htm) by WaveShare. It supports 3-wire/4-wire SPI, selectable by the BS1 pin. The demo uses the 4-wire SPI configuration (BS1=0).



![](https://www.waveshare.com/w/upload/thumb/d/df/2.9inch-e-Paper-1.jpg/300px-2.9inch-e-Paper-1.jpg)

### SPI Baud Rate

The SPI baud rate is configured to 2 MBits/s. This is the maximum before communication with the display fails. This calculation comes from the following:

The APB clock runs at 64 MHz, and the maximum SCK frequency is 2.5 MHz. Therefore, the minimum prescaler is the minimum power of two greater than or equal to $$\frac{64}{2.5} = 25.6$$, which is 32, giving 2 MBits/s.

## ST morpho pinout translation

The WB09KE is mounted on top of an STLink board and cannot be disconnected. WB09KE pins are routed to ST morpho pins along the edges of the STLink board.
The following table(s) list relevant pins to this demo and their mapping to the actual microcontroller.

### Pin header CN4

|Pin|WB09KE Pin|Signal|
|---|---|---|
|3|PB6|RST|
|5|PB7|DC|
|7|VDD|-|
|9|GND|-|
|11|PB3|SCK|
|13|PA8|MISO|
|15|PA11|MOSI|
|17|PA9|NSS|
|19|PB14|BUSY|
|21|PB15|CS|
|30|PB5|PWR|

## Signal functions

|Signal|Function|
|---|---|
|RST|Active-low reset signal to display|
|DC|Data/command control signal, write command when level is low and write data when level is high|
|SCK|Serial clock|
|MISO|Data signal for writing commands or data|
|MOSI|Not used|
|NSS|Not used|
|BUSY|Set high if the display driver is busy outputting display waveform or communicating with the digital temperature sensor|
|CS|Enables communication between MCU and driver when set low|
|PWR|VDD when high and GND when low, supplies power to the display|
