
#include <Key.h>
#include <Keypad.h>

const int ROW_NUM = 4; 
const int COLUMN_NUM = 3; 

int red = 11;
int green = 12;

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte pin_rows[ROW_NUM] = {6, 7, 8, 9}; 
byte pin_column[COLUMN_NUM] = {3, 4, 5}; 

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

const String password = "5637";
String input_password;

void setup(){
  pinMode(10, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
  input_password.reserve(32); 
}

void loop(){
  char key = keypad.getKey();
  if(digitalRead(10)==HIGH){
    if (key){
      Serial.print(key);
      input_password+=key;
      if (password == input_password){
        Serial.println();
        Serial.println("Geslo je pravilno.");
        input_password="";
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        
      }
      if (input_password.length() == 4 && input_password != password) {
        input_password = "";
        Serial.println();
        Serial.println("Geslo ni pravilno.");
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
      }
      if (key=='*'){
        input_password="";
        Serial.println();
        Serial.println("Vnašanje glesla je ponastavljeno");
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
      }
    }
  }
}
