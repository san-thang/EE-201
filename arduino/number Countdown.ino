int a = 2;
int b = 7;
int c = 5;
int d = 4;
int e = 7;
int f = 8;
int g = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(a, OUTPUT);
pinMode(e, OUTPUT);
pinMode(g, OUTPUT);
pinMode(f, OUTPUT);
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(d, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // turn on number 9
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1500);



}
