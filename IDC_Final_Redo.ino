//John Lee
//Class: ECE 110
//IDC Final Demo
//TA: Thomas Owens 

// Notes 
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0

// Arduino songs sourced from
// https://dragaosemchama.com/

int tempo = 114;
int buzzer = 3; 

int melody1[] = {
  
  // Hedwig's theme fromn the Harry Potter Movies
  // Socre from https://musescore.com/user/3811306/scores/4906610
  
  REST, 2, NOTE_D4, 4,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_C5, -2, 
  NOTE_A4, -2,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_F4, 2, NOTE_GS4, 4,
  NOTE_D4, -1, 
  NOTE_D4, 4,

  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, //10
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_B4, 4,
  NOTE_G4, -1,
  NOTE_AS4, 4,
     
  NOTE_D5, 2, NOTE_AS4, 4,//18
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_DS5, 2, NOTE_D5, 4,
  NOTE_CS5, 2, NOTE_A4, 4,
  NOTE_AS4, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_D4, 4,
  NOTE_D5, -1, 
  REST,4, NOTE_AS4,4,  

  NOTE_D5, 2, NOTE_AS4, 4,//26
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_AS4, 4,
  NOTE_G4, -1, 
  
};

int melody2[] = {
  
  // Mii Channel theme 
  // Score available at https://musescore.com/user/16403456/scores/4984153
  // Uploaded by Catalina Andrade 
  
  NOTE_FS4,8, REST,8, NOTE_A4,8, NOTE_CS5,8, REST,8,NOTE_A4,8, REST,8, NOTE_FS4,8, //1
  NOTE_D4,8, NOTE_D4,8, NOTE_D4,8, REST,8, REST,4, REST,8, NOTE_CS4,8,
  NOTE_D4,8, NOTE_FS4,8, NOTE_A4,8, NOTE_CS5,8, REST,8, NOTE_A4,8, REST,8, NOTE_F4,8,
  NOTE_E5,-4, NOTE_DS5,8, NOTE_D5,8, REST,8, REST,4,
  
  NOTE_GS4,8, REST,8, NOTE_CS5,8, NOTE_FS4,8, REST,8,NOTE_CS5,8, REST,8, NOTE_GS4,8, //5
  REST,8, NOTE_CS5,8, NOTE_G4,8, NOTE_FS4,8, REST,8, NOTE_E4,8, REST,8,
  NOTE_E4,8, NOTE_E4,8, NOTE_E4,8, REST,8, REST,4, NOTE_E4,8, NOTE_E4,8,
  NOTE_E4,8, REST,8, REST,4, NOTE_DS4,8, NOTE_D4,8, 

  NOTE_CS4,8, REST,8, NOTE_A4,8, NOTE_CS5,8, REST,8,NOTE_A4,8, REST,8, NOTE_FS4,8, //9
  NOTE_D4,8, NOTE_D4,8, NOTE_D4,8, REST,8, NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, REST,8,
  REST,8, NOTE_FS4,8, NOTE_A4,8, NOTE_CS5,8, REST,8, NOTE_A4,8, REST,8, NOTE_F4,8,
  NOTE_E5,2, NOTE_D5,8, REST,8, REST,4,

  NOTE_B4,8, NOTE_G4,8, NOTE_D4,8, NOTE_CS4,4, NOTE_B4,8, NOTE_G4,8, NOTE_CS4,8, //13
  NOTE_A4,8, NOTE_FS4,8, NOTE_C4,8, NOTE_B3,4, NOTE_F4,8, NOTE_D4,8, NOTE_B3,8,
  NOTE_E4,8, NOTE_E4,8, NOTE_E4,8, REST,4, REST,4, NOTE_AS4,4,
  NOTE_CS5,8, NOTE_D5,8, NOTE_FS5,8, NOTE_A5,8, REST,8, REST,4, 

  REST,2, NOTE_A3,4, NOTE_AS3,4, //17 
  NOTE_A3,-4, NOTE_A3,8, NOTE_A3,2,
  REST,4, NOTE_A3,8, NOTE_AS3,8, NOTE_A3,8, NOTE_F4,4, NOTE_C4,8,
  NOTE_A3,-4, NOTE_A3,8, NOTE_A3,2,

  REST,2, NOTE_B3,4, NOTE_C4,4, //21
  NOTE_CS4,-4, NOTE_C4,8, NOTE_CS4,2,
  REST,4, NOTE_CS4,8, NOTE_C4,8, NOTE_CS4,8, NOTE_GS4,4, NOTE_DS4,8,
  NOTE_CS4,-4, NOTE_DS4,8, NOTE_B3,1,
  
  NOTE_E4,4, NOTE_E4,4, NOTE_E4,4, REST,8,//25

  //repeats 1-25

  NOTE_FS4,8, REST,8, NOTE_A4,8, NOTE_CS5,8, REST,8,NOTE_A4,8, REST,8, NOTE_FS4,8, //1
  NOTE_D4,8, NOTE_D4,8, NOTE_D4,8, REST,8, REST,4, REST,8, NOTE_CS4,8,
  NOTE_D4,8, NOTE_FS4,8, NOTE_A4,8, NOTE_CS5,8, REST,8, NOTE_A4,8, REST,8, NOTE_F4,8,
  NOTE_E5,-4, NOTE_DS5,8, NOTE_D5,8, REST,8, REST,4,
  
  NOTE_GS4,8, REST,8, NOTE_CS5,8, NOTE_FS4,8, REST,8,NOTE_CS5,8, REST,8, NOTE_GS4,8, //5
  REST,8, NOTE_CS5,8, NOTE_G4,8, NOTE_FS4,8, REST,8, NOTE_E4,8, REST,8,
  NOTE_E4,8, NOTE_E4,8, NOTE_E4,8, REST,8, REST,4, NOTE_E4,8, NOTE_E4,8,
  NOTE_E4,8, REST,8, REST,4, NOTE_DS4,8, NOTE_D4,8, 

  NOTE_CS4,8, REST,8, NOTE_A4,8, NOTE_CS5,8, REST,8,NOTE_A4,8, REST,8, NOTE_FS4,8, //9
  NOTE_D4,8, NOTE_D4,8, NOTE_D4,8, REST,8, NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, REST,8,
  REST,8, NOTE_FS4,8, NOTE_A4,8, NOTE_CS5,8, REST,8, NOTE_A4,8, REST,8, NOTE_F4,8,
  NOTE_E5,2, NOTE_D5,8, REST,8, REST,4,

  NOTE_B4,8, NOTE_G4,8, NOTE_D4,8, NOTE_CS4,4, NOTE_B4,8, NOTE_G4,8, NOTE_CS4,8, //13
  NOTE_A4,8, NOTE_FS4,8, NOTE_C4,8, NOTE_B3,4, NOTE_F4,8, NOTE_D4,8, NOTE_B3,8,
  NOTE_E4,8, NOTE_E4,8, NOTE_E4,8, REST,4, REST,4, NOTE_AS4,4,
  NOTE_CS5,8, NOTE_D5,8, NOTE_FS5,8, NOTE_A5,8, REST,8, REST,4, 

  REST,2, NOTE_A3,4, NOTE_AS3,4, //17 
  NOTE_A3,-4, NOTE_A3,8, NOTE_A3,2,
  REST,4, NOTE_A3,8, NOTE_AS3,8, NOTE_A3,8, NOTE_F4,4, NOTE_C4,8,
  NOTE_A3,-4, NOTE_A3,8, NOTE_A3,2,

  REST,2, NOTE_B3,4, NOTE_C4,4, //21
  NOTE_CS4,-4, NOTE_C4,8, NOTE_CS4,2,
  REST,4, NOTE_CS4,8, NOTE_C4,8, NOTE_CS4,8, NOTE_GS4,4, NOTE_DS4,8,
  NOTE_CS4,-4, NOTE_DS4,8, NOTE_B3,1,
  
  NOTE_E4,4, NOTE_E4,4, NOTE_E4,4, REST,8,//25

  //finishes with 26
  //NOTE_FS4,8, REST,8, NOTE_A4,8, NOTE_CS5,8, REST,8, NOTE_A4,8, REST,8, NOTE_FS4,8
   
};

int notes1 = sizeof(melody1) / sizeof(melody1[0]) / 2;
int notes2 = sizeof(melody2) / sizeof(melody2[0]) / 2;

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

//Setup for LCD (I2C Comm)
#include <Wire.h> // Library for I2C communication
#include "Adafruit_TCS34725.h"
#include <LiquidCrystal_I2C.h> // Library for LCD
// Wiring: SDA pin is connected to A4 and SCL pin to A5.
// Connect to LCD via I2C, default address 0x27 (A0-A2 not jumpered)
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // Change to (0x27,20,4) for 20x4 LCD.

//For Earth (PING)
//initialization of variables 
int inches = 0;
int cm = 0;

//For Fire (RGB initialization)
/* Initialise with default values (int time = 2.4ms, gain = 1x) */
// Adafruit_TCS34725 tcs = Adafruit_TCS34725();
/* Initialise with specific int time and gain values */
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_700MS, TCS34725_GAIN_1X);

//For Water (Accel initialization)
const int MPU_addr=0x68;
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
int minVal=265;
int maxVal=402;
double x;
double y;
double z;

//For Air (QTI)
//Pins for QTI connections on board
#define lineSensor1 2
#include <Servo.h>
Servo myservo; // servo initialization
long start;

// global variables 
int total = 0; // running total
int state = 0; // counter for # of task 

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  //nothing for earth

  //Fire (Finding RGB sensor) 
  /*if (tcs.begin()) {
    Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1);
  } */

  //Setup for accel
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  //Setting up servo
  myservo.attach(10);

  // setup for LEDs
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);

  // Print statements to mark beginning
  Serial.println("Begin IDC");
  lcd.print("Final Showdown!");
}

// char variables
char nation;  // main (first) char
char comms; // char for comms task
char re; // char for redo 
int tempV; // temp int 

void loop(){
  // Prompt for which element test
  Serial.print("Current Task #");
  Serial.println(state + 1);
  Serial.println("Which of the four elements (e, f, w, a): ");
  // as long as nothing is inputted to serial, don't do anything
  while (Serial.available() == 0){ }
  nation = Serial.read();

  Serial.println("Comms Task (y/n): ");
  while (Serial.available() == 0) {
  }
  comms = Serial.read(); 

  // if statement for each nation
  // each element task is a separate function that returns int 
  // int returned is added to total that will be outputted as final output
  tempV = 0;
  if (nation == 'e'){
    tempV = earth(comms);
    total += tempV;
  }

  else if (nation == 'f'){
    tempV = fire(comms); 
    total += tempV;
  }

  else if (nation == 'w'){
    tempV = water(comms);
    total += tempV;
  }

  else if (nation == 'a'){
    tempV = air(comms);
    total += tempV;
  }  
  state++;

  // redo 
  // if need to redo, press r and it will re loop 
  // state will decrement 
  Serial.println("To redo, press 'r': ");
  while (Serial.available() == 0){}
  re = Serial.read();

  if (re == 'r'){
    state--; 
    total = total - tempV;
  }
  
  // once state reaches 4 (4 element tasks done)
  // output total on Serial and lcd (physical output)
  // do location specific task 
  if (state == 4){
    Serial.println("All 4 elements sensed");
    Serial.print("Final Output: ");
    Serial.println(total);
    lcd.clear();
    lcd.print("Final Output: ");
    lcd.print(total);
    Serial.flush();

    locationTask(total % 4);
    exit(0);
  }
} 

// method for location task
// input is modded total
void locationTask(int val){
  if (val == 0){
    // water themed light show (green, yellow)
    digitalWrite(11, HIGH);
    digitalWrite(8, HIGH);
    delay(15000);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
  }

  else if (val == 1){
    // earth kingdom - song in minor key (hedwig's theme)
    for (int thisNote = 0; thisNote < notes1 * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody1[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody1[thisNote], noteDuration*0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
  }

  else if (val == 2){
    // fire themed light show (red, yellow)
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(15000);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    
  }

  else if (val == 3){
    // air temple - whimsical melody (mii theme)
     for (int thisNote = 0; thisNote < notes2 * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody2[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody2[thisNote], noteDuration*0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(buzzer);
    }
  }
}

// method for earth task 
int earth(char in){
  int earthRet = 0;
  // Serial check whether the input is comms or not
  // if not, just proceed to normal earth task
  if (in == 'y'){
    Serial.println("Enter comms val: ");
    while(Serial.available() == 0) { }
    earthRet = Serial.parseInt();
    Serial.print("Comms value: ");
    Serial.println(earthRet);
    return earthRet;
  }
  
  // measure the ping time in cm
  cm = 0;
  cm = 0.01723 * readUltrasonicDistance(12, 13);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  delay(100); // Wait for 100 millisecond(s)

  // based on threshold, set earthRet to appropriate value
  if (inches < 4){
    Serial.println("Lower Ring");
    earthRet = 1;
  }
  else if (inches >= 4 && inches < 7){
    Serial.println("Middle Ring");
    earthRet = 2;
    
  }

  else if (inches >= 7 && inches <= 12){
    Serial.println("Upper Ring");
    earthRet = 3;
  } 

  // Print distance and earth value to serial monitor 
  Serial.print("Distance (in): ");
  Serial.println(inches);
  Serial.print("Earth Value: ");
  Serial.println(earthRet);
  Serial.flush();
  return earthRet; 
}

// method for fire task 
int fire(char in){
  int fireRet = 0;
   // Serial check whether the input is comms or not
  // if not, just proceed to normal fire task
  if (in == 'y'){
    Serial.println("Enter comms val: ");
    while(Serial.available() == 0) { }
    fireRet = Serial.parseInt();
    Serial.print("Comms value: ");
    Serial.println(fireRet);
    return fireRet;
  }

  uint16_t r, g, b, c, colorTemp, lux;

  tcs.getRawData(&r, &g, &b, &c);
  // colorTemp = tcs.calculateColorTemperature(r, g, b);
  colorTemp = tcs.calculateColorTemperature_dn40(r, g, b, c);
  lux = tcs.calculateLux(r, g, b);

  // based on threshold, set fireRet to appropriate value and print the flame color
  if (colorTemp > 1850 && colorTemp < 2600){
    Serial.println("Red flame");
    fireRet = 1;   
  }

  else if (colorTemp >= 2600 && colorTemp < 3000){
    Serial.println("orange flame");
    fireRet = 2; 
  }

  else if (colorTemp > 5000 || colorTemp == 0){
    Serial.println("blue flame");
    fireRet = 3; 
  }

  // print task's value for serial monitor checking
  Serial.print("Fire Value: ");
  Serial.println(fireRet);
  Serial.flush();
  return fireRet; 
}

// water task 
int water (char in){

  int waterRet = 0;
  // Serial check whether the input is comms or not
  // if not, just proceed to normal water task
  if (in == 'y'){
    Serial.println("Enter comms val: ");
    while(Serial.available() == 0) { }
    waterRet = Serial.parseInt();
    Serial.print("Comms value: ");
    Serial.println(waterRet);
    return waterRet;
  }

    // Calculations for finding tilt based on accelerometer 
    Wire.beginTransmission(MPU_addr);
    Wire.write(0x3B);
    Wire.endTransmission(false);
    Wire.requestFrom(MPU_addr,14,true);
    AcX=Wire.read()<<8|Wire.read();
    AcY=Wire.read()<<8|Wire.read();
    AcZ=Wire.read()<<8|Wire.read();
    int xAng = map(AcX,minVal,maxVal,-90,90);
    int yAng = map(AcY,minVal,maxVal,-90,90);
    int zAng = map(AcZ,minVal,maxVal,-90,90);
 
    x= RAD_TO_DEG * (atan2(-yAng, -zAng)+PI);
    y= RAD_TO_DEG * (atan2(-xAng, -zAng)+PI);
    z= RAD_TO_DEG * (atan2(-yAng, -xAng)+PI);
 
    Serial.print("AngleX= ");
    Serial.println(x);
 
    Serial.print("AngleY= ");
    Serial.println(y);
 
    Serial.print("AngleZ= ");
    Serial.println(z);
    Serial.println("-----------------------------------------");
    delay(1000);
    lcd.home();

    // based on threshold of tilt, determine wave 
    if ((y >=72) && (y<= 90)){
      Serial.println("Low Wave");
      waterRet = 1;
    }
  
    else if ((y >=54) && (y<= 70)){
      Serial.println("Medium Wave");
      waterRet = 2;
    }
  
    else if ((y >= 35) && (y<= 51)){
      Serial.println("High Wave");
      waterRet = 3;
    }

  // print values for that task 
  Serial.print("Water Value: ");
  Serial.println(waterRet);
  Serial.flush();
  return waterRet; 
}

// air task 
int air(char in) {
  int airReturn = 0;
  // like all other tasks, comms check
  if (in == 'y'){
    Serial.println("Enter comms val: ");
    while(Serial.available() == 0) { }
    airReturn = Serial.parseInt();
    return airReturn;
  }
  long starttime = millis();
  long endtime = starttime;
  // counter variables for each horn 
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  // the max counter variable 
  int airMax = 0;
  // run this loop for 15 seconds 
  // encased in while loop because I want to run the servo / calculation for 15 seconds 
  while ((endtime - starttime) <= 15000) // do this loop for up to 1000mS
  {
    // code here
    myservo.write(99); //rotate counterclockwise at slow speed
    int qti1 = RCTime(lineSensor1);     //Calls funtion 'RCTime' Request reading from QTI sensor at pin 'linesensor1' saves value in variable 'qti'
    delay(200);
    //Serial.print("Time since last print statement ");
    double timet = ((millis() - start)/1000.0);
    //Serial.print(timet);
    //Serial.print("    ");
    //Serial.println(qti1);
    start = millis();

    //based on threshold determine prong 
    //incrememnt the counter values (from earlier)
    //case 1: cross
    if (timet >= 0.3 && timet <= 0.44){
      //lcd.print("Four-prong!");
      //Serial.println("four-prong");
      count1++;
    }

    //case 2: line
    else if (timet >= 0.55 && timet <= 0.90){
      //lcd.print("line");
      //Serial.println("line");
      count2++;
    }  

    //case 3: circle
    else if (timet <= 0.25){
      //lcd.print("circle!");
      //Serial.println("circle");
      count3++;
    }

    //loopcount = loopcount+1;
    endtime = millis();
  }

  // stop servo
  myservo.write(90);
  // compare counter values to determine the max
  // the max counter value will be the most common detected horn (most likely horn)
  airMax = max(count1, count2);
  airMax = max(airMax, count3);

  // based on counter value, print appropriate horn and return the airReturn value 
  if (airMax == count1){
    Serial.println("Four-prong");
    airReturn = 1;
    Serial.print("Air Value :");
    Serial.println(airReturn);
    return airReturn;
  }

  else if (airMax == count2){
    Serial.println("Line");
    airReturn = 2;
    Serial.print("Air Value :");
    Serial.println(airReturn);
    return airReturn;
  }

  else if (airMax == count3){
    Serial.println("Circle");
    airReturn = 3;
    Serial.print("Air Value :");
    Serial.println(airReturn);
    return airReturn;
  }
}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

//Defines funtion 'RCTime' to read value from QTI sensor
long RCTime(int sensorIn)
{
  long duration = 0;
  pinMode(sensorIn, OUTPUT); // Sets pin as OUTPUT
  digitalWrite(sensorIn, HIGH); // Pin HIGH
  delay(1); // Waits for 1 millisecond
  pinMode(sensorIn, INPUT); // Sets pin as INPUT
  digitalWrite(sensorIn, LOW); // Pin LOW
  while(digitalRead(sensorIn)) { // Waits for the pin to go LOW
    duration++;
  }
  return duration; // Returns the duration of the pulse
}
