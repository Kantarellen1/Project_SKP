#include <Servo.h>

#include <Servo.h>
/*Project LED
int switchstate = 0;

void setup() {
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(2, INPUT);
}


void loop() {
  switchstate = digitalRead(2);

  if (switchstate == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    delay(250);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    delay(250);
  }
}*/

/* Project RGB LED
const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  Serial.begin(9600);

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  delay(5);

  Serial.print("Raw Sensor Value \t red: ");
  Serial.print(redSensorValue);
  Serial.print("\t green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t blue");
  Serial.print(blueSensorValue);

  redValue = redSensorValue/4;
  greenValue = greenSensorValue/4;
  blueValue = blueSensorValue/4;

  Serial.print("Mapped Sensor Value \t red: ");
  Serial.print(redValue);
  Serial.print("\t green: ");
  Serial.print(greenValue);
  Serial.print("\t blue: ");
  Serial.print(blueValue);

  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}*/

/* Project Servo
#include <Servo.h>
 
Servo myServo;  // create a servo object 
 
int const potPin = A0; // analog pin used to connect the potentiometer
int potVal;  // variable to read the value from the analog pin 
int angle;   // variable to hold the angle for the servo motor 
 
void setup() {
  myServo.attach(9); // attaches the servo on pin 9 to the servo object 
  Serial.begin(9600); // open a serial connection to your computer
}
 
void loop() {
  potVal = analogRead(potPin); // read the value of the potentiometer
  // print out the value to the serial monitor
  Serial.print("potVal: ");
  Serial.print(potVal);
 
  // scale the numbers from the pot 
  angle = map(potVal, 0, 1023, 0, 179);
 
  // print out the angle for the servo motor 
  Serial.print(", angle: ");
  Serial.println(angle); 
 
  // set the servo position  
  myServo.write(angle);
 
  // wait for the servo to get there 
  delay(15);
}*/