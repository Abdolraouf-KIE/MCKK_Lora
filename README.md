# MCKK_Loranet Workshop
Objectives:
1. IoT
2. 3D printing (make anything you can want!)
   - Assembling
   - downlaoding sketUp 2019
   - downloading CReality for printing
   - downloading the model and then printing it.
3. Embeded system Introduction
4. Embeded Programing basics with Arduino
   - Software:
     - Declarationgit push -u origin master
     - Functions
     - Classes and objectsgit push -u origin master
     - adding libraries (.zip or library manager)
     - Board manager
     - Making a math operation code with serial.
5. Using LoraWAN:
   - adding the library LoraWAN via .Zip
   - Adding their own licesne to code
   - Setting up the TTN for Each Device
7. Using raspberry pi for server:
   - use node red to take MQTT message to send to graphana
   - display on graphana
   
# Schedual
Time | Task
------------ | -------------
8 - 9 | Mr.Shamry on Loranet and IoT in Malaysia
9 - 11 | Use Github for reference: Assembling 3D printer and printing casing for your device
11 - 12 | Showcase. If short there would be a presentation on projects carrying out(install Arduino)
12 - 13 | Manual for installing Arduino (for Heltec) and setting up the environment (board manager)
13 - 14 | Lunch break
14 - 15 | Embeded system introduction (30min) + Simple blink example
15 - 16 | Lora sensor-setup. Show how NodeRed is used to send to Graphana
16 - 17 | Makerthon (guided)
17 - 18 | Makerthon (guided)
18 - Sunday 20:00 | End of Makerthon (submit to github or email)

# IoT talk by Mr.Shamry (CEO and Product Engineer)
Shamry has always been facinated with technology, from the day in primary when he created his own plane to this day when he choices to invent in Loranet as opposed to earning big bucks in large corborates. He has had many insights and experiences along the way, and today he will be sharing those with you.
### References:
- https://www.loranet.my/

# 3D Printers
3D printers are a ground breaking technology that allows creation of many 3 dimenssional models out of plastic. This device is frequently being used in industires for rapid model development of product casing, mechanical gear etc. Stundets will be devided up into groups of 5 (to make 4 groups in total), 2 of which will assemble the printer and learn about the component make-up of such device, while the other 2 teams will find appropriate casing model for Heltec Wifi Lora32 (v2). 
### References:
- "3D Printer" folder in this github repository.
- Assembly: https://www.youtube.com/watch?v=me8Qrwh907Q&ab_channel=Tombof3DPrintedHorrors
- Modeling: TODO

# Industiral showcase
This segment allows the students to see industrial products in the IoT sector. Students are encouraged to ask questions in regards to technical functionality as well as the problem respective devices solve.

# Seting up Arduino IDE
Arduino IDE is a popular integrated development environemnt (IDE) where developers program their microcontrollers. Today We will download the software as well as Heltec support softwares to allow us to programm Heltec WiFi Kit 32 microcontroller unit (MCU).
The following links will be refered to setup the IDE:
- https://heltec.org/project/wifi-kit-32/
- https://heltec-automation-docs.readthedocs.io/en/latest/esp32/quick_start.html

# Embeded Programming Introduction
Embeded systems such as the Heltec WiFi Kit 32 are programmed by C/C++ similar language. We will be learning the basics to C and embeded programming using Arduino IDE.
### References:
- https://www.slideshare.net/baldengineer/introduction-to-arduino-programming-47131515

# Heltec MCU: controll integrated LED (simple)
MCUs (microcontroller units) are essential small computers. To get to know the basic functionality we use it to comute and addition operation. 
### References:
- https://en.wikipedia.org/wiki/Serial_communication
- refere to folder "Arduino"
- https://www.arduino.cc/reference/en/language/functions/communication/serial/read/

# Introduction to Lora
LoRa (long range) is a communication protocol (similar to wifi) for very long range transmissions. Heltec Wifi Kit32 has an integrated LoRa modem which can be used to send data to a gateway. Using TTN (the things network) as data visualization we will then be able to see the traffic. In this segment we will go through the theory of LoRa.
### References:
- https://www.slideshare.net/RobinHarris10/introduction-to-lora-for-developers

# Sending data to the gateway
LoraWAN (loRa wide are network) is a communication protocol that is made up of a gateway and nodes where nodes are sensor devices or microcontrollers. We shall turn Heltec Wifi Kit32 into a LoraWAN node and send data.
### References:
- https://heltec-automation-docs.readthedocs.io/en/latest/esp32/lorawan/index.html
- To get your device license key refer to the "Heltec_IDs.csv" file.
- https://console.thethingsnetwork.org/
- https://www.thethingsnetwork.org/docs/applications/nodered/
- https://flows.nodered.org/flow/8e96b8630c4edc866aa0459354033c9b/in/u1hmO7pQPVSi
- https://grafana.com/docs/grafana/latest/tutorials/

# Makerthon: Sending input data via Lora
"The best teacher is oneself". This is a common understanding amoung developers. It is time for you to teach yourself. make teams of 4 and select a Team name as well as secondary base code (BLE, Serial or WifiAP). Make an arduino script that will send single integer (e.g. 1 or 6). After completion use the github pull function to send the codes to this repository under "MakerThon" folder with your group name (eg. all files should be in /MakerThon/Team_name). Finish this by Sunday 8pm.
Core Challenges:
- integration of functionalities
- making a 'push' request

# Summary
In this workshop you have been introduced to the IoT industry and the products they develop. Furthermore you have aquired technical knowldege on creating any product (using 3D printer and Embeded programming). But the most valuable lesson here is that just like the resources used to teach you, all resources are available online and just a search away. so Search away!

Notes: If you have any ideas on making a home project and need some help ask 'Raouf' via whatsapp +60183855039. I will be happy to hear your ideas and help you make them into reality.
