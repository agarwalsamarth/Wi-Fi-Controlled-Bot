# Wi-Fi-Controlled-Bot
## Basic Idea
In this project we are trying to establish wireless communication between the mobile Robot and the remote Base Station. Our aim is to be able to command and control the Robot wirelessly by the GUI Application. For the same we have used BLYNK app as an user interface which allow us to wirelessly control our bot.
## Components Required
Arduino NANO, NodeMCU, LM7805, LM7809, L293D motor Driver module, Breadboard, Robot chassis with motors and wheel (any type), Connecting wires
## Design and Working
The main brain of this project is the Arduino and NodeMCU.In order to control our bot wirelessly , we have used blynk app as an user interface to interact between mobile Robot and the remote Base Station. Blynk app sends the signal to NodeMCU which has an inbuilt wifi chip ESP8266 which connects to our mobile hotspot through ssid and hotspot. NodeMCU then directs the signal to Arduino. To operate Arduino we have used IC LM7805 and LM 7809 as voltage regulator. To control the motors we have used motor driver board L293D which basically amplifies the current and maps the voltage accordingly.
## how to Run
copy both of these codes in separate arduino IDE files, and upload "arduino_wifi_controlled_bot" code in arduino and 'nodeMCU_wifi_controlled_bot" in NodeMCU
