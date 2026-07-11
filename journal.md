---
title: "White noiser"
author: "Fazal"
description: "A portable ESP32-based white noise generator with battery support."
created_at: "2026-05-30"
---

# May 30: Importing

I am importing this project from blueprint. I have did the research and setup a basic schematic and a simple PCB. This was originally made without battery support, but I plan on adding the support. Also I am planning to ditch the PCB cuz I think it might not be worth for this.

![](https://cdn.hackclub.com/019e7954-4cc8-7eff-877a-719dafc2f6da/image.png)

![](https://cdn.hackclub.com/019e7954-7405-7b5f-9630-420260b008f4/image.png)

**Total time spent: 2.5 hours**

---

# June 4: Did new schematic

[lapse1](https://lapse.hackclub.com/timelapse/ifrnAwe0E1ev)

[lapse2](https://lapse.hackclub.com/timelapse/AmmeJ47cfHf-)

I added the battery support, changed the mcu choice to esp32 supermini (cheaper). Also changed the audio amplifier cuz now I am working with 3v3 instead of 5v since, now its on battery. there was initially so much confusion, I also used an old project for reference.

![](https://cdn.hackclub.com/019e9276-c561-77a5-9a95-e7c5e07e623f/image.png)

**Total time spent: 1.1 hours**

---

# June 6: Schematic Almost done

[lapse](https://lapse.hackclub.com/timelapse/WiaLMjOVI_M4)

There were so much confusion about the audio amplifiers. Either the IC is hard to solder, or if I am going with the modules there will be no footprints, and I will also have to do more schematics. Also need to to look for the availability and price. Finally I went with an IC, but I think it might be hard to solder as I am a beginner. Now I am thinking to make the footprint for the module myself

![](https://cdn.hackclub.com/019e9c09-07ac-75d7-9c4e-bc6b73ab2017/image.png)

**Total time spent: 1.2 hours**

---

# June 6: Aligned components in PCB

[lapse](https://lapse.hackclub.com/timelapse/1KDLUfWj_iYe)

Since the footprints of the audio amplifier cant be found, I did a work around by using the pcb of the module. I removed all the components and routings, only keeping the final output/input pads. I reconfigured the connection to those pads, instead of, to the ic like in the schematic. there might be a better approach, I didn't search it up. Also assigned other footprints and aligned components in the PCB.

![](https://cdn.hackclub.com/019e9cae-1f2f-7e8c-9beb-642301f6308a/image.png)

**Total time spent: 1 hour**

---

# June 7: PCB final moments

[lapse](https://lapse.hackclub.com/timelapse/1v3Y0v2EmuAc)

Final footprint and 3d model setups in the PCB. Its not over yet, I just realized I havent yet given the correct tht footprints for resistors and capacitors. why is there so much footprint, atp I might just go with smd cuz their footprints are pretty obv for me now.

![](https://cdn.hackclub.com/019ea1de-7c98-78e7-af53-f390a86e9e35/image.png)

**Total time spent: 0.5 hours**

---

# June 11: PCB routing

[lapse](https://lapse.hackclub.com/timelapse/SAOvZBYpxjRi)

Checked the availability of parts and corrected the footprints. Next is what do I do for the speaker? I had flipped the side for battery holder and potentiometer for now to keep the speaker, battery and potentiometer on the same side opening. But still, I need a holder for the speaker. The case might become 3 parted. Also did the routing, errors still left to fix

![](https://cdn.hackclub.com/019eb73c-ada6-7234-9e8c-4285a8ef1dfc/image.png)

**Total time spent: 1.2 hours**

---

# June 12: More PCB

[lapse1](https://lapse.hackclub.com/timelapse/OPRAFLB3vokp)

[lapse2](https://lapse.hackclub.com/timelapse/p9-r3iuA9xTz)

Fixing the drc errors, The footprint workaround I did for the audio amplifier module was causing problems cuz its not a footprint but a whole pcb, so it had keepout zones, other stuffs too, so deleted all those. changed the battery manager ic cuz the tp4056 footprint looked good. Routed the PCB, looked up things for the firmware.

![](https://cdn.hackclub.com/019ebbe9-1160-7890-9b7b-563225e38d0e/image.png)

**Total time spent: 1.6 hours**

---

# June 13: Firmware and CAD

[lapse1](https://lapse.hackclub.com/timelapse/5xbmIdgY1L6w)

[lapse2](https://lapse.hackclub.com/timelapse/VArJK-GAsB9o)

[lapse3](https://lapse.hackclub.com/timelapse/A_OrOp6pZrk9)

Did the 'Idk if will work nor do i have component to test' firmware. Planned a 3 layer CAD, the assembly and fitting was a lil tricky, I did figure out a way. A little more cad left to do

![](https://cdn.hackclub.com/019ec1a7-3d86-72fe-884f-43fef227be53/image.png)

**Total time spent: 2.1 hours**

---

# June 15: Done

[lapse1](https://lapse.hackclub.com/timelapse/cmB3RQUn5xGg)

[lapse2](https://lapse.hackclub.com/timelapse/PlgdtLfvGemh)

[lapse3](https://lapse.hackclub.com/timelapse/tg2wSawYvNRu)

[lapse4](https://lapse.hackclub.com/timelapse/asg9eSkD9YDo)

[lapse5](https://lapse.hackclub.com/timelapse/3XgsCXNygfQu)

Completed the CAD, sourced all the parts, tuned the CAD for the speaker available, made the BOM, made the repo. Life happened, and I ended up with 5 individual lapses. T-T

![](https://cdn.hackclub.com/019ecb6f-7b5b-7daa-9b06-cbd97963c4d4/image.png)

**Total time spent: 3 hours**
