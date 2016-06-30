char* sensorType = "SHK";
char* myID = "Exercise";
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
  int pinShake = 2;
  
  if (digitalRead(pinShake) == LOW) {
    sendEvent("Shake");
  }
}

