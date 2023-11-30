# Yasui/Cheapcheep

![Yasui](https://i.imgur.com/TRFOEkw.png)

* Hardware Supported: Yasui/Cheapcheep revision 1 PCB 

To flash this firmware on your rev 1 pcb do the following:

   - Copy the cheapcheep_firmware folder into qmk_firmware/keyboards.
   - Then open QMK MSYS and compile the firmware inside qmk_firmware/keybaord directory with the following command:
   
    qmk compile -kb cheapcheep_firmware -km default
