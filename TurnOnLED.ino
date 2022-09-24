//Sydnee Haugen
//This program take a input from the keypad and turn on same number of LEDs. 

#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4; 

//keypad symbols
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {2,3,4,5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,7,8,9}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

//creating the LED and setting then to there pins
const int RedLED = 22;
const int OrangeLED = 23;
const int YellowLED = 24;
const int WhiteLED = 25;
const int YellowGreenLED = 26;
const int GreenLED = 27;
const int BlueLED = 28;
const int PurpleLED = 29;
const int PinkLED = 30;


void setup() 
{
  Serial.begin(9600);

  //setting all the LED to output
  pinMode(RedLED, OUTPUT);
  pinMode(OrangeLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  pinMode(WhiteLED, OUTPUT);
  pinMode(YellowGreenLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
  pinMode(PurpleLED, OUTPUT);
  pinMode(PinkLED, OUTPUT);
}

void loop() 
{
  char key = keypad.getKey();

  if (key)
  {
    Serial.println(key);

    switch(key)
    {
      case '1':
      digitalWrite(RedLED, HIGH);
      break;
      
      case '2':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      break;

      case '3':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      digitalWrite(YellowLED, HIGH);
      break;

      case '4':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      digitalWrite(YellowLED, HIGH);
      digitalWrite(WhiteLED, HIGH);
      break;

      case '5':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      digitalWrite(YellowLED, HIGH);
      digitalWrite(WhiteLED, HIGH);
      digitalWrite(YellowGreenLED, HIGH);
      break;

      case '6':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      digitalWrite(YellowLED, HIGH);
      digitalWrite(WhiteLED, HIGH);
      digitalWrite(YellowGreenLED, HIGH);
      digitalWrite(GreenLED, HIGH);
      break;

      case '7':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      digitalWrite(YellowLED, HIGH);
      digitalWrite(WhiteLED, HIGH);
      digitalWrite(YellowGreenLED, HIGH);
      digitalWrite(GreenLED, HIGH);
      digitalWrite(BlueLED, HIGH);
      break;

      case '8':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      digitalWrite(YellowLED, HIGH);
      digitalWrite(WhiteLED, HIGH);
      digitalWrite(YellowGreenLED, HIGH);
      digitalWrite(GreenLED, HIGH);
      digitalWrite(BlueLED, HIGH);
      digitalWrite(PurpleLED, HIGH);
      break;

      case '9':
      digitalWrite(RedLED, HIGH);
      digitalWrite(OrangeLED, HIGH);
      digitalWrite(YellowLED, HIGH);
      digitalWrite(WhiteLED, HIGH);
      digitalWrite(YellowGreenLED, HIGH);
      digitalWrite(GreenLED, HIGH);
      digitalWrite(BlueLED, HIGH);
      digitalWrite(PurpleLED, HIGH);
      digitalWrite(PinkLED, HIGH);
      break;
      
      case 'A':
      digitalWrite(RedLED, HIGH);       
      digitalWrite(YellowLED, HIGH);        
      digitalWrite(YellowGreenLED, HIGH);      
      digitalWrite(BlueLED, HIGH);    
      digitalWrite(PinkLED, HIGH);
      break;

      case 'B':       
      digitalWrite(OrangeLED, HIGH);       
      digitalWrite(WhiteLED, HIGH);      
      digitalWrite(GreenLED, HIGH);     
      digitalWrite(PurpleLED, HIGH);
      break;
       

      case '0':
      digitalWrite(RedLED, LOW);
      digitalWrite(OrangeLED, LOW);
      digitalWrite(YellowLED, LOW);
      digitalWrite(WhiteLED, LOW);
      digitalWrite(YellowGreenLED, LOW);
      digitalWrite(GreenLED, LOW);
      digitalWrite(BlueLED, LOW);
      digitalWrite(PurpleLED, LOW);
      digitalWrite(PinkLED, LOW);
      break;
    }
  }
}
