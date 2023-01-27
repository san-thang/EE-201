void setup() {
  // put your setup code here, to run once:
  // assigning GPIO pin to be output
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// turning pin 5 on high and wait 1 sec and turn it active low
digitalWrite(5, HIGH);
delay(100);
digitalWrite(5,LOW);
delay(100);

// turning pin 5 on high and wait 1 sec and turn in active low
digitalWrite(3, HIGH);
delay(100);
digitalWrite(3, LOW);
delay(100);
}
