void setup() {

 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(2, INPUT);
}
   int switchState = LOW;
   String lampColor = "green"; 
   String previousLampColor = lampColor;
   
void loop() {
   int previousSwitchState = switchState;
   
   switchState = digitalRead(2);

  if (switchState == HIGH && previousSwitchState == LOW){
    
    if(lampColor == "green") {
     lampColor = "red1";  
     previousLampColor = "green";
     
    }else if (lampColor == "red1" && previousLampColor == "green") {
      lampColor = "red2";
      previousLampColor = "red1";
      
    }else if (lampColor == "red2"){
      lampColor = "red1";
      previousLampColor = "red2";
      
    }else if (lampColor == "red1" && previousLampColor == "red2") {
      lampColor = "green";
      previousLampColor = "red1";
    }
  } 


  if (lampColor=="green") {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    }else if (lampColor == "red1"){
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
    }else{
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
    }

/*  if (switchState == LOW){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
    } else {
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
    }*/

}
