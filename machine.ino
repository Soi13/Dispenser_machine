//Dispenser machine for mixing juices and drinks.
#include <DS3231.h>
#include <Wire.h> //Connect SCL of RTC module to the Arduino A5, Connect SDA of RTC module to the Arduino A4
#include <LiquidCrystal.h>
#include <RTClib.h>

#define BUTTON_2_PIN 2
#define BUTTON_3_PIN 3
#define BUTTON_4_PIN 4
#define BUTTON_5_PIN 5
#define RELAY1 6
#define RELAY2 7
#define RELAY3 8
#define RELAY4 9

void setup() {
pinMode(BUTTON_2_PIN, OUTPUT);
pinMode(BUTTON_3_PIN, OUTPUT);
pinMode(BUTTON_4_PIN, OUTPUT);
pinMode(BUTTON_5_PIN, OUTPUT);
pinMode(RELAY1, OUTPUT); // Relay
pinMode(RELAY2, OUTPUT); // Relay 
pinMode(RELAY3, OUTPUT); // Relay
pinMode(RELAY4, OUTPUT); // Relay

digitalWrite(BUTTON_2_PIN, LOW);
digitalWrite(BUTTON_3_PIN, LOW);
digitalWrite(BUTTON_4_PIN, LOW);
digitalWrite(BUTTON_5_PIN, LOW);
digitalWrite(RELAY1, HIGH); // Relay 
digitalWrite(RELAY2, HIGH); // Relay
digitalWrite(RELAY3, HIGH); // Relay
digitalWrite(RELAY4, HIGH); // Relay

DS3231 rtc(SDA, SCL); //Declaring RTC module for date/time

rtc.begin(); //Initialize the rtc object (date/time)

// The following lines can be uncommented to set the date and time
//rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to SUNDAY
//rtc.setTime(19, 35, 00);     // Set the time to 12:00:00 (24hr format)
//rtc.setDate(2, 8, 2023);   // Set the date to January 1st, 2014

}



void drink1() {
  //do logic here
}

void drink2() {
  //do logic here
}

void drink3() {
  //do logic here
}

void drink4() {
  //do logic here
}


void loop() {
////////Buttons
if (digitalRead(BUTTON_2_PIN) == HIGH) {
  drink1();
  Serial.println("Drink1 button pressed"); 
}

if (digitalRead(BUTTON_3_PIN) == HIGH) {
  drink2();
  Serial.println("Drink2 button pressed"); 
}

if (digitalRead(BUTTON_4_PIN) == HIGH) {
  drink2();
  Serial.println("Drink3 button pressed"); 
}

if (digitalRead(BUTTON_5_PIN) == HIGH) {
  drink4();
  Serial.println("Drink4 button pressed"); 
}
///////////////


  
}
