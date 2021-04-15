# Arduino library for ColorPAL sensor
Header file to communicate with the sensor through the Arduino's software serial port.

### Instructions to install the library:
1. Cilck on the green **`Code`** button present on the top right corner of this page. On the drop-down menu, click **`Download ZIP`**.
2. Choose a location on your computer to download this file. After download completes, extract the files by right-clicking on the zipped folder and clicking 'Extract All'.
3. The downloaded folder name will have a 'master' suffix to it. After unzipping, rename the folder from 'ColorPAL-master' to 'ColorPAL'.
4. Copy and paste the extracted folder `ColorPAL` to the location where your Arduino IDE stores all libraries. The default location is `C:\Users\First.Last\Documents\Arduino\libraries`.
5. The file structure is described below. Verify the contents of the `ColorPAL` folder after you have copied it to the Arduino libraries folder. **Do not modify these files or alter the file structure!**
```
   ColorPAL
    │   keywords.txt
    │   ColorPAL.h
    │   ColorPAL.cpp
    └───examples
    |   └───testPAL
    |       |   testPAL.ino
    └───extras
        |   Library_Guide.pdf
        |   readmemdl.rtf
        
```
6. Restart Arduino IDE and check if the newly added 'ColorPAL' library has been detected. If it has been successfully imported, you must be able to see 'testPAL' as an example sketch under `Files -> Examples -> ColorPAL`
