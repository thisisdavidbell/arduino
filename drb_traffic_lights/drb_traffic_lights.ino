int switchState = 0;

int MOVING = 0;
int STOPPED = 1;
int lightState = MOVING;

int SWITCH = 2;

int GREEN = 3;
int YELLOW = 4;
int RED = 5;

void setup() {
  // put your setup code here, to run once:

  pinMode(GREEN , OUTPUT);
  pinMode(YELLOW , OUTPUT);
  pinMode(RED , OUTPUT);

  pinMode(SWITCH , INPUT);

  digitalWrite(RED, LOW);     
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);  
}

void loop() {
  // put your main code here, to run repeatedly:

//check if switch pressed - if so pin2 will be HIGH/On
  switchState = digitalRead(SWITCH);

  if(switchState == HIGH) {

    if (lightState == MOVING){
      
      delay(1000); // wait for 1 sec  
      digitalWrite(RED, LOW);     
      digitalWrite(YELLOW, HIGH);
      digitalWrite(GREEN, LOW);
      
      delay(1000); // wait for 1 sec  
      digitalWrite(YELLOW, LOW);
      digitalWrite(RED, HIGH);

      lightState = STOPPED;

    } else { 
      delay(1000); // wait for 1 sec  
      digitalWrite(RED, HIGH);     
      digitalWrite(YELLOW, HIGH);
      digitalWrite(GREEN, LOW);

      delay(1000); // wait for 1 sec  
      digitalWrite(RED, LOW);     
      digitalWrite(YELLOW, LOW);
      digitalWrite(GREEN, HIGH);      

      lightState = MOVING;

    } // end else 

  } // end if switchState == HIGH
}

// board layout - proj2 - spacecraft_controller
