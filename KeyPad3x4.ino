
#include <Key.h>
#include <Keypad.h>

const int ROW_NUM = 4; 
const int COLUMN_NUM = 3; 


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
int current=0;

void setup(){
  pinMode(10, INPUT);
  Serial.begin(9600);
  input_password.reserve(32); 
}

void loop(){
  char key = keypad.getKey();
  if(digitalRead(10)==HIGH){
    if (key){
      if (key == password.charAt(current)){
        Serial.print(key);
        input_password+=""+key;
        current++;
      }else{
        Serial.println(key);
        Serial.println("Vnošena številka ni pravilna.");
        current=0;
        input_password="";
      }
      if (current==password.length()){
        Serial.println();
        Serial.println("Geslo je pravilno.");
        input_password="";
        current=0;
      }
    }
  }
}
