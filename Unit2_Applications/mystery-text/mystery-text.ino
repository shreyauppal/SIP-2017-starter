void setup() { //you have to tell your program where to start, whether its input or output
  pinMode(13, OUTPUT); //it sets the number, along the breadboard, you can tell adriuno which pin to look at (ex: at pin 13 do this) this
                        //line sets the mode for that pin
}                      // you are only going to be outputing information

void loop() { //lines 6-9 happens forever (it turns it on)
  digitalWrite(13, HIGH);   //turns  on the LED
  delay(1000); //delay is telling it to sleep in 1000 millisecconds, basically 1 secon, when converted           
  digitalWrite(13, LOW);    //turns the LED low
  delay(1000);              
}

