# White Noise Machine 
![Alt text](Assets/wh.png)

A very simple white noise generator using an ESP32 (C3-SuperMini) and an audio amplifier. I made this to help me sleep.
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
| Qty | Component | Notes | Link |
|----:|-----------|-------|------|
| 1 | ESP32 Super Mini | Microcontroller | https://robocraze.com/products/esp32-c3-mini-development-board-unsoldered?variant=48465411506400 |
| 1 | 8 Ω 1 W Speaker (35 mm diameter) | Speaker | https://quartzcomponents.com/products/0-5w-speaker-8-ohm-large?variant=36014183022745&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&srsltid=AfmBOopAwl-McXb629Uy8SUohOU4_S37xz01wkD58gYBX4n-Car-ZNXvRJ8 |
| 1 | MAX98357A Audio Amplifier Breakout Board | I2S Class-D amplifier | https://robu.in/product/smartelex-i2s-audio-breakout-max98357a/ |
| 1 | MCP73831 | Li-ion/Li-Po charging IC | https://robu.in/product/mcp73831t-2dci-ot-microchip-battery-charger-for-1-cell-of-li-ion-li-pol-battery-6v-input-4-2v-500ma-charge-sot-23-5/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWesxIAOGtdsLwCo2hYp3UC-9&gclid=CjwKCAjwxb7RBhA5EiwAQ-AAdITzA1JCzwghQRx5ZseV6wuH4NPsH6kC6K0IZD4zEoA-meBtaPgDHBoC4-0QAvD_BwE |
| 1 | AP1221K 3.3 V | 3.3 V LDO voltage regulator | https://robu.in/product/ap2202k-3-3trg1-diodes-inc-ldo-fixed-3-3v-0-15a-40-to-125deg-c/ *(CSV lists AP2202K instead of AP1221K)* |
| 1 | 100 kΩ Horizontal Potentiometer | Volume control | https://robu.in/product/100k-ohm-3pin-15mm-shaft-potentiometer-pack-of-3/ |
| 1 | 10 µF Capacitor | | https://robu.in/product/50yxf10mffc5x11-rubycon-10uf-50v-%c2%b120-plugind5xl11mm-aluminum-electrolytic-capacitors-leaded-rohs/ |
| 2 | 1 µF Capacitor | | https://robu.in/product/ers1hm010d11ot-aishi-1uf-50v%c2%b120-plugind5x11mm-aluminum-electrolytic-capacitors-leaded-rohs/ |
| 1 | 4.7 µF Capacitor | | https://robu.in/product/50yxf4r7mefct15x11-rubycon-4-7uf-50v-%c2%b120-plugind5xl11mm-aluminum-electrolytic-capacitors-leaded-rohs/ |
| 1 | 1 kΩ Resistor | | https://robocraze.com/products/1k-resistor-pack-of-10?variant=40194234155161 |
| 1 | 2 kΩ Resistor | | https://robocraze.com/products/2-2k-ohm-resistor-pack-of-10?variant=40194236743833 *(CSV lists 2.2 kΩ instead of 2 kΩ)* |
| 1 | 10 kΩ Resistor | | https://robocraze.com/products/10k-resistor-pack-of-10?variant=40194231304345 |
| 1 | 18650 Dual SMD Battery Holder | | https://robocraze.com/products/18650-smd-smt-dual-battery-holder?variant=41351705100441 |
| 4 | M2 × 3 mm Heat-Set Insert | | https://onlyscrews.in/products/m2-x-3mm-brass-threaded-inserts?variant=49728872448313 |
| 4 | M2 × 6 mm Heat-Set Insert | | https://onlyscrews.in/products/m2-x-6mm-brass-threaded-inserts?variant=49423242101049 |
| 4 | M2 × 8 mm Screw | | https://onlyscrews.in/products/m2-x-8mm-hex-allen-button-head-ss-304-screw-dia-2mm-length-8mm?variant=50900339851577 |
| 4 | M2 × 10 mm Screw | | https://onlyscrews.in/products/m2-x-10mm-hex-allen-button-head-ss-304-screw-dia-2mm-length-10mm?variant=50900340801849 |
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

1. Clone the repository.
2. Open the `build` folder inside the `firmware` folder in terminal.
3. Connect the ESP32-C3 to your computer and run:

```bash
esptool.py --chip esp32c3 --baud 460800 write_flash \
  0x0000 bootloader.bin \
  0x8000 partitions.bin \
  0xE000 boot_app0.bin \
  0x10000 firmware.bin
```

---
