# Final Project - Bill of Materials


Alright so for my final project I am going to be building ~~two connected devices that vibrate when both are "activated". Activation will occur through capactive sensing and the circuit board is going to be built into a fabric. The design is supposed to fit in someones hand so I may end up making the circuit board bigger than it has to be in order shape the eventual device.~~

~~For this I will need (will be checked off as it arives):~~

~~- [X] [ATtiny84](https://www.digikey.com/product-detail/en/microchip-technology/ATTINY84A-SSUR/ATTINY84A-SSURCT-ND/2774136) (will mill a breakout board for prototyping)~~
~~- [X] [RFM69](https://www.digikey.com/product-detail/en/sparkfun-electronics/COM-13909/1568-1394-ND/6023504) for communication~~
~~- [X] [Capactvie Touch IC](https://www.digikey.com/product-detail/en/microchip-technology/AT42QT1010-TSHR/AT42QT1010-TSHRCT-ND/2268871)~~
~~- [X] transistor for vibrator~~
~~- [X] [Vibaration Motor](https://www.digikey.com/product-detail/en/adafruit-industries-llc/1201/1528-1177-ND/5353637)~~
- [X] [Small Lipo Batteries](https://www.adafruit.com/product/2750)


***update!!!***

So I decided to change my final project. 
Two factors brought me to this decision:
1. was having major trouble porting the [rfm69 library by LowPowerLabs](https://github.com/LowPowerLab/RFM69) to run on an ATtiny84. Standard Arduino SPI library (which is imported by the RFM69 library) doesn't support ATtiny84. Easiest solution probably to switch to ATmega MC butttt...
2. had a better idea! Heart shaped PCB board with RED led's surrounding perimiter. Flashes lights when capacitive touch sensing pad is (which is the innermost heart on the board) is touched

new BOM:
- [X] Lots of RED LEDS
- [X] Resistors (150k + 10k)
- [X] Capacitors (10nf, .1uf, 100uf)
- [X] [Capactvie Touch IC](https://www.digikey.com/product-detail/en/microchip-technology/AT42QT1010-TSHR/AT42QT1010-TSHRCT-ND/2268871)
- [X] [ATtiny85]
- [X] NPN transistor
- [X] Lipo battery
- [X] Lipo battery connector

All these things I either had or were in the ITP hard lab so nothing I need to order, hurray!

