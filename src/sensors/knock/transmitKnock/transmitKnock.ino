char* sensorType = "KNC";
char* myID = "1";
int heartbeatInterval = 3600; // seconds
int periodicReadingInterval = 0; // seconds, 0 for no periodic reading

#include "initialize.h"

void setup() {
  initializeSensor();
}

void loop() {
  sleepUntilEvent();

  processEvent();
}

void processEvent() {
  int pinKnock = 2;
  
  if (digitalRead(pinKnock) == LOW) {
    sendEvent("Knocked");
  }
}

