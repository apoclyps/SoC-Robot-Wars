bool WF=false;
bool WB=false;
bool WL=false;
bool WR=false;
bool AU=false;
bool AD=false;
bool AL=false;
bool AR=false;
bool DW=false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  checkSerial();
  moveRobot();
}

void moveRobot() {
  if(WF) {
    digitalWrite(2, LOW); 
  } else {
    digitalWrite(2, HIGH); 
  }
  if(WB) {
    digitalWrite(3, LOW); 
  } else {
    digitalWrite(3, HIGH); 
  }
  if(WL) {
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH); 
  }
  if(WR) {
    digitalWrite(5, LOW); 
  } else {
    digitalWrite(5, HIGH); 
  }
  if(AU) {
    digitalWrite(6, LOW); 
  } else {
    digitalWrite(6, HIGH); 
  }
  if(AD) {
    digitalWrite(7, LOW); 
    Serial.write("Arm down");
  } else {
    digitalWrite(7, HIGH); 
  }
  if(AL) {
    digitalWrite(7, LOW); 
    Serial.write("Arm left");
  } else {
    digitalWrite(7, HIGH); 
  }
  if(AR) {
    digitalWrite(8, LOW); 
    Serial.write("Arm right");
  } else {
    digitalWrite(8, HIGH); 
  }
  if(DW) {
    digitalWrite(9, LOW); 
    Serial.write("DEATH WHEEL GO");
  } else {
    digitalWrite(9, HIGH); 
  }
}

void checkSerial() {
  if(Serial.available()) {
    char sig = Serial.read();
    delay(10);
    char val = Serial.read();
    
    switch(sig) {
      case '1':
        switch(val) {
          case '1':
            WF = true;
            WB = false;
            break;
          case '2':
            WB = true;
            WF = false;
            break;
          case '0':
            WF = false;
            WB = false;
            break;
        }
        break;
      case '2':
        switch(val) {
          case '1':
            WL = true;
            WR = false;
            break;
          case '2':
            WR = true;
            WL = false;
            break;
          case '0':
            WL = false;
            WR = false;
            break;
        }
        break;
      case '3':
        switch(val) {
          case '1':
            AL = true;
            AR = false;
            break;
          case '2':
            AR = true;
            AL = false;
            break;
          case '0':
            AL = false;
            AR = false;
            break;
        }
        break;
      case '4':
        switch(val) {
          case '1':
            AD = true;
            AU = false;
            break;
          case '2':
            AU = true;
            AD = false;
            break;
          case '0':
            AU = false;
            AD = false;
            break;
        }
        break;
      case '5':
        switch(val) {
          case '1':
            DW=true;
            break;
          case '0':
            DW=false;
            break;
        }
        break;
    }
  } 
}
