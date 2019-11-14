# Arduino library for ColorPAL sensor
Header file to communicate with the sensor through the Arduino's software serial port.

### Instructions to install the library:
1. Cilck on the green **`Clone or Download`** button present on the top right corner of this page. On the drop-down menu, click **`Download ZIP`**.
2. Choose a location on your computer to download this file. After download completes, extract the files by right-clicking on the zipped folder and clicking 'Extract All'.
3. Copy and paste the extracted folder `ColorPAL` to the location where your Arduino IDE stores all libraries. The default location is `C:\Users\First.Last\Documents\Arduino\libraries`.
4. The file structure is described below. Verify the contents of the `ColorPAL` folder after you have pasted it in the Arduino libraries folder. **Do not modify these files or alter the file structure!**
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
5. Restart Arduino IDE to check if the newly added 'ColorPAL' library has been detected. If it has been successfully imported, you must be able to see 'testPAL' as an example sketches under `Files -> Examples -> ColorPAL`
