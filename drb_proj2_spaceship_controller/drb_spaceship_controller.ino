int switchState = 0;

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
}

void loop() {
  // put your main code here, to run repeatedly:

//check if switch pressed - if so pin2 will be HIGH/On
  switchState = digitalRead(SWITCH);


  if(switchState == LOW) {
  // if switch not pressed
    digitalWrite(GREEN, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, LOW);
  
  } else {
  // if switch pressed

    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, HIGH);

    // wait for 1/4 sec     
    delay(250);

    digitalWrite(YELLOW, HIGH);
    digitalWrite(RED, LOW);

    // wait for 1/4 sec     
    delay(250);    
  }
}
