#include <Key.h>
#include <Keypad.h>


const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 3; //three columns

String cur="";

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte pin_rows[ROW_NUM] = {6, 7, 8, 9}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {3, 4, 5}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup(){
  Serial.begin(9600);
}

void loop(){
  char key = keypad.getKey();

  if (key){
    Serial.print(key);
    if (cur.length()==0){
      Serial.print(cur);
    }else{
      cur+=""+key;
      Serial.println(cur);
    }
  }
}
