# NRF 9160-sdk MQTT SAMPLE & EVENT MANAGER

Send mqtt message to a server that can read the data sent from nrf9160 software developing kit. 

## Description

Is an application that must be built up based on the MQTT sample for the nrf9160 Software Developing Kit, and the event manager can be run in several threads

## Getting Started

### Dependencies

* Nrf 9160 software developing kit
* Windows 10
### Installing

* Step 1 
    Follow this guide:
    https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/gs_installing.html
* Step 2
    I used VS code extension that Nordic Semi has in VScode, so it's easier to build the application to the Nrf9160 sdk Link to the guide:

    https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/gs_programming.html#building-with-the-vs-code-extension
* Step 3
    build application with VS extension based on nordicsemi's MQTT sample, then add event manager to the code
* Step 4 
    must fill out these bullets in prf.conf
    *CONFIG_MQTT_BROKER_HOSTNAME=""
    *CONFIG_MQTT_USERNAME=""
    *CONFIG_MQTT_PASSWORD=""

