
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);
#define sensorDigital A0
#define Motor 9
#define buzzer 13
int a=0;

void setup() 
{
mySerial.begin(9600);
pinMode(sensorDigital, INPUT);
pinMode(Motor, OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}

void loop() 
{
bool digital = digitalRead(sensorDigital);
Serial.print("t");
Serial.print("Digital value :");
Serial.println(digital);
  if (digital == 0) 
  {
  digitalWrite(Motor, LOW);
  digitalWrite(buzzer, HIGH);
  if(a==0)
  {
  sendSMS();
  a=1;
  }
  } 
  else 
  {
  digitalWrite(Motor, HIGH);
  digitalWrite(buzzer, LOW);
  
  }
}

void sendSMS()
{
  mySerial.println("AT");
  delay(1000);
  mySerial.println("AT+CMGF=1");
  delay(1000);
  mySerial.println("AT+CMGS=\"+919843719748\"\r");
  delay(1000);
  mySerial.println("ALCOHOL DETECTED");
  delay(1000);
  mySerial.write(0x1A);
  delay(1000);
}                    
