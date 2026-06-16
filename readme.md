# White Noise Machine 
![Alt text](Assets/wh.png)

A very simple white noise generator using an ESP32 (C3-SuperMini) and an audio amplifier. I made this to help me sleep
Its kinda hard for me to sleep, especially with noises, even if it is small. White/pink noise is more comfortable for me. Also this will help blockout small noises

---

## Enclosure

![Case](Assets/case.png)

---

## PCB

![PCB Layout](Assets/pcb.png)

---

## Schematic

![Schematic](Assets/sch.png)

---

## BOM
- 1x esp32 super mini
- 1x 8ohm 1w speaker (35mm diameter)
- 1x MAX98357A audio amplifier breakout board
- 1x 10uf capacitor
- 2x 1uf capacitor
- 1x 4.7uf capacitor
- 1x 1k ohm resistor
- 1x 2k ohm resistor
- 1x 10k ohm resistor
- 1x 18560 dual holder smd
- 4x m2 3mm heatset insert
- 4x m2 6mm heatset insert
- 4x m2 8mm screws
- 4x m2 10mm screws

---

## How to assemble

1. Insert the 3mm insert on the walls projected from the middle part, and 6mm on the bottom part
2. screw pcb on to the bottom of the middle part
3. screw the middle to the bottom
4. screw the top to the middle with screws on the walls

## How to Flash

### Prerequisites
- Python 3
- esptool

### Flash Firmware
- Download the firmware zip and unzip
- Open the folder in terminal

- Connect the ESP32-C3 to your computer and run:

esptool.py --chip esp32c3 --baud 460800 write_flash \
0x0000 bootloader.bin \
0x8000 partitions.bin \
0xE000 boot_app0.bin \
0x10000 firmware.bin

---
