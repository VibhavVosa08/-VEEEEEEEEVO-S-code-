int E1 = 9; //  set the speed pin of motor A as D9
int E2 = 5; //  set the speed pin of motor B as D5
int M1 = 2; // set the direction pin of motor A as D2
int M2 = 4; // set the direction pin of motor B as D4
        
void setup(void)
{
  pinMode(M1,OUTPUT); // set M1 as OUTPUT mode
  pinMode(M2,OUTPUT); // set M2 as OUTPUT mode
  pinMode(E1,OUTPUT); //  set E1 as OUTPUT mode
  pinMode(E2,OUTPUT); //  set E2 as OUTPUT mode
}
void advance(void)        // set the forward motion
{
  digitalWrite(M1,HIGH);  // motor A turns forward, the wheel will go forward.
  digitalWrite(M2,HIGH);  // motor B turns forward, the wheel will go forward. 
  analogWrite(E1,150);    // speed of motor A（can be adjusted according to the actual speed of motor. Turn up the value to accelerate, lower the value to decelerate.) 
  analogWrite(E2,150);    // speed of motor B（can be adjusted according to the actual speed of motor. Turn up the value to accelerate, lower the value to decelerate.) 
}  
void back(void)        // set the backward motion
{
 digitalWrite(M1,LOW);   // motor A turns reverse and the wheel will go backward
 digitalWrite(M2, LOW);   //  motor B turns reverse and the wheel will go backward
 analogWrite(E1,150);     //  speed of motor A
 analogWrite(E2, 150);    //  speed of motor B
}  

void turnL(void)     // set the left turn 
{
   digitalWrite(M1,LOW);    // motor A turns reverse and the wheel will go backward 
   digitalWrite(M2, HIGH);  // motor B turns forward and the wheel goes forward, the smart car will turn left.
   analogWrite(E1,150);  // speed of motor A
   analogWrite(E2, 150);  // speed of motor B
}

void turnR(void)            //  set the right turn 
{
   digitalWrite(M1,HIGH);   // motor A turns forward and the wheel will go forward 
   digitalWrite(M2,LOW);    // motor B turns reverse and the wheel goes backward, the smart car will turn right.
   analogWrite(E1,150);     // speed of motor A
   analogWrite(E2, 150);    // speed of motor B
}

void stopp(void)   // set the STOP
{
   digitalWrite(M1,LOW);  // motor A turns reverse
   digitalWrite(M2, LOW);  //  motor B turns reverse
   analogWrite(E1, 0);      //  speed of motor A, speed as zero, means stop
   analogWrite(E2, 0);      // speed of motor B, speed as zero, means stop
}

void loop() 
{ 
advance();   // go forward
delay(1000); // delay1S
back();      //backward
delay(1000);// delay1S

turnL();    //turn left
delay(1000);//delay1S
turnR();    //turn right  
delay(1000); //delay1S
stopp();   // stop
delay(1000);// delay1S
}