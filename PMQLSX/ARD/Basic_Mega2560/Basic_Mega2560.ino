const int analogPinA0 = A0;
const int digitalPin1 = 3;
const int digitalPin2 = 4;
const int digitalPin3 = 5;
const int digitalPin4 = 6;
const int digitalPin5 = 7;
const int digitalPin6 = 8;
const int digitalPin7 = 9;
const int digitalPin8 = 10;
const int digitalPin9 = 11;
const int digitalPin10 = 12;
const int digitalPin11 = 22;
const int digitalPin12 = 24;
const int digitalPin13 = 26;
const int digitalPin14 = 28;
const int digitalPin15 = 30;

int buttonStateA0 = 0;
int StatePin1 = 0;
int StatePin2 = 0;
int StatePin3 = 0;
int StatePin4 = 0;
int StatePin5 = 0;
int StatePin6 = 0;
int StatePin7 = 0;
int StatePin8 = 0;
int StatePin9 = 0;
int StatePin10 = 0;
int StatePin11 = 0;
int StatePin12 = 0;
int StatePin13 = 0;
int StatePin14 = 0;
int StatePin15 = 0;

int buttonStatePrevA0 = 0;
int StatePrevPin1 = 0;
int StatePrevPin2 = 0;
int StatePrevPin3 = 0;
int StatePrevPin4 = 0;
int StatePrevPin5 = 0;
int StatePrevPin6 = 0;
int StatePrevPin7 = 0;
int StatePrevPin8 = 0;
int StatePrevPin9 = 0;
int StatePrevPin10 = 0;
int StatePrevPin11 = 0;
int StatePrevPin12 = 0;
int StatePrevPin13 = 0;
int StatePrevPin14 = 0;
int StatePrevPin15 = 0;

unsigned long lastTime = 0;

void get_MachineStatus(void) {
  if (millis()-lastTime > 100){
    buttonStateA0 = map(analogRead(analogPinA0),0,1023,0,1);
    StatePin1 = digitalRead(digitalPin1);
    StatePin2 = digitalRead(digitalPin2);
    StatePin3 = digitalRead(digitalPin3);
    StatePin4 = digitalRead(digitalPin4);
    StatePin5 = digitalRead(digitalPin5);
    StatePin6 = digitalRead(digitalPin6);
    StatePin7 = digitalRead(digitalPin7);
    StatePin8 = digitalRead(digitalPin8);
    StatePin9 = digitalRead(digitalPin9);
    StatePin10 = digitalRead(digitalPin10);
    StatePin11 = digitalRead(digitalPin11);
    StatePin12 = digitalRead(digitalPin12);
    StatePin13 = digitalRead(digitalPin13);
    StatePin14 = digitalRead(digitalPin14);
    StatePin15 = digitalRead(digitalPin15);
    Serial.print("A0 - ");
    Serial.print(buttonStateA0);
    Serial.print(" D3 - ");
    Serial.println(StatePin3);
    if (StatePin1 != StatePrevPin1){
      if(StatePin1 == 1){
        Serial.println("10");// Machine Stop
      } else {
        Serial.println("11");// Machine Running
      }
      StatePrevPin1 = StatePin1;
    }
    if (StatePin2 != StatePrevPin2){
      if(StatePin2 == 1){
        Serial.println("20");// Machine Stop
      } else {
        Serial.println("21");// Machine Running
      }
      StatePrevPin2 = StatePin2;
    }
    if (StatePin3 != StatePrevPin3){
      if(StatePin3 == 1){
        Serial.println("30");// Machine Stop
      } else {
        Serial.println("31");// Machine Running
      }
      StatePrevPin3 = StatePin3;
    }
    if (StatePin4 != StatePrevPin4){
      if(StatePin4 == 1){
        Serial.println("40");// Machine Stop
      } else {
        Serial.println("41");// Machine Running
      }
      StatePrevPin4 = StatePin4;
    }
    if (StatePin5 != StatePrevPin5){
      if(StatePin5 == 1){
        Serial.println("50");// Machine Stop
      } else {
        Serial.println("51");// Machine Running
      }
      StatePrevPin5 = StatePin5;
    }
    if (StatePin6 != StatePrevPin6){
      if(StatePin6 == 1){
        Serial.println("60");// Machine Stop
      } else {
        Serial.println("61");// Machine Running
      }
      StatePrevPin6 = StatePin6;
    }
    if (StatePin7 != StatePrevPin7){
      if(StatePin7 == 1){
        Serial.println("70");// Machine Stop
      } else {
        Serial.println("71");// Machine Running
      }
      StatePrevPin7 = StatePin7;
    }
    if (StatePin8 != StatePrevPin8){
      if(StatePin8 == 1){
        Serial.println("80");// Machine Stop
      } else {
        Serial.println("81");// Machine Running
      }
      StatePrevPin8 = StatePin8;
    }
    if (StatePin9 != StatePrevPin9){
      if(StatePin9 == 1){
        Serial.println("90");// Machine Stop
      } else {
        Serial.println("91");// Machine Running
      }
      StatePrevPin9 = StatePin9;
    }
    if (StatePin10 != StatePrevPin10){
      if(StatePin10 == 1){
        Serial.println("100");// Machine Stop
      } else {
        Serial.println("101");// Machine Running
      }
      StatePrevPin10 = StatePin10;
    }
    if (StatePin11 != StatePrevPin11){
      if(StatePin11 == 1){
        Serial.println("110");// Machine Stop
      } else {
        Serial.println("111");// Machine Running
      }
      StatePrevPin11 = StatePin11;
    }
    if (StatePin12 != StatePrevPin12){
      if(StatePin12 == 1){
        Serial.println("120");// Machine Stop
      } else {
        Serial.println("121");// Machine Running
      }
      StatePrevPin12 = StatePin12;
    }
    if (StatePin13 != StatePrevPin13){
      if(StatePin13 == 1){
        Serial.println("130");// Machine Stop
      } else {
        Serial.println("131");// Machine Running
      }
      StatePrevPin13 = StatePin13;
    }
    if (StatePin14 != StatePrevPin14){
      if(StatePin14 == 1){
        Serial.println("140");// Machine Stop
      } else {
        Serial.println("141");// Machine Running
      }
      StatePrevPin14 = StatePin14;
    }
    if (StatePin15 != StatePrevPin15){
      if(StatePin15 == 1){
        Serial.println("150");// Machine Stop
      } else {
        Serial.println("151");// Machine Running
      }
      StatePrevPin15 = StatePin15;
    }
    if (buttonStateA0 != buttonStatePrevA0){
      if(buttonStateA0 == 1){
        Serial.println("20");// Machine Stop
      } else {
        Serial.println("21");// Machine Running
      }
      buttonStatePrevA0 = buttonStateA0;
    }
    lastTime = millis();
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial3.begin(115200); 
  pinMode(StatePin1, INPUT);
  pinMode(StatePin2, INPUT);
  pinMode(StatePin3, INPUT);
  pinMode(StatePin4, INPUT);
  pinMode(StatePin5, INPUT);
  pinMode(StatePin6, INPUT);
  pinMode(StatePin7, INPUT);
  pinMode(StatePin8, INPUT);
  pinMode(StatePin9, INPUT);
  pinMode(StatePin10, INPUT);
  pinMode(StatePin11, INPUT);
  pinMode(StatePin12, INPUT);
  pinMode(StatePin13, INPUT);
  pinMode(StatePin14, INPUT);
  pinMode(StatePin15, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (millis()-lastTime > 100){
    buttonStateA0 = map(analogRead(analogPinA0),0,1023,0,1);
    StatePin1 = digitalRead(digitalPin1);
    StatePin2 = digitalRead(digitalPin2);
    StatePin3 = digitalRead(digitalPin3);
    StatePin4 = digitalRead(digitalPin4);
    StatePin5 = digitalRead(digitalPin5);
    StatePin6 = digitalRead(digitalPin6);
    StatePin7 = digitalRead(digitalPin7);
    StatePin8 = digitalRead(digitalPin8);
    StatePin9 = digitalRead(digitalPin9);
    StatePin10 = digitalRead(digitalPin10);
    StatePin11 = digitalRead(digitalPin11);
    StatePin12 = digitalRead(digitalPin12);
    StatePin13 = digitalRead(digitalPin13);
    StatePin14 = digitalRead(digitalPin14);
    StatePin15 = digitalRead(digitalPin15);
    if (StatePin1 != StatePrevPin1){
      if(StatePin1 == 1){
        Serial.println("10");// Machine Stop
      } else {
        Serial.println("11");// Machine Running
      }
      StatePrevPin1 = StatePin1;
    }
    if (StatePin2 != StatePrevPin2){
      if(StatePin2 == 1){
        Serial.println("20");// Machine Stop
      } else {
        Serial.println("21");// Machine Running
      }
      StatePrevPin2 = StatePin2;
    }
    if (StatePin3 != StatePrevPin3){
      if(StatePin3 == 1){
        Serial.println("30");// Machine Stop
      } else {
        Serial.println("31");// Machine Running
      }
      StatePrevPin3 = StatePin3;
    }
    if (StatePin4 != StatePrevPin4){
      if(StatePin4 == 1){
        Serial.println("40");// Machine Stop
      } else {
        Serial.println("41");// Machine Running
      }
      StatePrevPin4 = StatePin4;
    }
    if (StatePin5 != StatePrevPin5){
      if(StatePin5 == 1){
        Serial.println("50");// Machine Stop
      } else {
        Serial.println("51");// Machine Running
      }
      StatePrevPin5 = StatePin5;
    }
    if (StatePin6 != StatePrevPin6){
      if(StatePin6 == 1){
        Serial.println("60");// Machine Stop
      } else {
        Serial.println("61");// Machine Running
      }
      StatePrevPin6 = StatePin6;
    }
    if (StatePin7 != StatePrevPin7){
      if(StatePin7 == 1){
        Serial.println("70");// Machine Stop
      } else {
        Serial.println("71");// Machine Running
      }
      StatePrevPin7 = StatePin7;
    }
    if (StatePin8 != StatePrevPin8){
      if(StatePin8 == 1){
        Serial.println("80");// Machine Stop
      } else {
        Serial.println("81");// Machine Running
      }
      StatePrevPin8 = StatePin8;
    }
    if (StatePin9 != StatePrevPin9){
      if(StatePin9 == 1){
        Serial.println("90");// Machine Stop
      } else {
        Serial.println("91");// Machine Running
      }
      StatePrevPin9 = StatePin9;
    }
    if (StatePin10 != StatePrevPin10){
      if(StatePin10 == 1){
        Serial.println("100");// Machine Stop
      } else {
        Serial.println("101");// Machine Running
      }
      StatePrevPin10 = StatePin10;
    }
    if (StatePin11 != StatePrevPin11){
      if(StatePin11 == 1){
        Serial.println("110");// Machine Stop
      } else {
        Serial.println("111");// Machine Running
      }
      StatePrevPin11 = StatePin11;
    }
    if (StatePin12 != StatePrevPin12){
      if(StatePin12 == 1){
        Serial.println("120");// Machine Stop
      } else {
        Serial.println("121");// Machine Running
      }
      StatePrevPin12 = StatePin12;
    }
    if (StatePin13 != StatePrevPin13){
      if(StatePin13 == 1){
        Serial.println("130");// Machine Stop
      } else {
        Serial.println("131");// Machine Running
      }
      StatePrevPin13 = StatePin13;
    }
    if (StatePin14 != StatePrevPin14){
      if(StatePin14 == 1){
        Serial.println("140");// Machine Stop
      } else {
        Serial.println("141");// Machine Running
      }
      StatePrevPin14 = StatePin14;
    }
    if (StatePin15 != StatePrevPin15){
      if(StatePin15 == 1){
        Serial.println("150");// Machine Stop
      } else {
        Serial.println("151");// Machine Running
      }
      StatePrevPin15 = StatePin15;
    }
    if (buttonStateA0 != buttonStatePrevA0){
      if(buttonStateA0 == 1){
        Serial.println("20");// Machine Stop
      } else {
        Serial.println("21");// Machine Running
      }
      buttonStatePrevA0 = buttonStateA0;
    }
    lastTime = millis();
  }
  
  //nhan tin hieu tu ESP
  if (Serial3.available()){
    String msg = "";
    while(Serial3.available()){
      msg += char(Serial3.read());
      delay(50);
    }
    Serial.print ("nhan du lieu tu Serial 3: ");
    Serial.println (msg);
  }
}
