void setup() {
  // put your setup code here, to run once:
  // rate
  Serial.begin(9600);
  // assigning pin to be input
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // if it's high, print out "Hello World!"
  // if it's low, print out "It's 2023"
  if (digitalRead(13) == 1) {
    Serial.println("Hello World!");
  }
  else {
    Serial.println("It's 2023");
  }
}
