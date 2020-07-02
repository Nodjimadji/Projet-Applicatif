int d = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(d, INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
if(HIGH == digitalRead(d))
  Serial.println("black");
 else
  Serial.println("white");
  delay(1000);
}
