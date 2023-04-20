int sensorPin = 5;

int LedRojo = 5; 
int LedAmarillo = 7; 
int LedAzul = 8; 
int LedVerde = 10; 
int LedBlanco =12; 

void setup() {
  pinMode(LedRojo, OUTPUT);
  pinMode(LedAmarillo, OUTPUT);
  pinMode(LedAzul, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LedBlanco, OUTPUT);
 
}

void loop() {
  int sensorValue;
  sensorValue = analogRead(sensorPin);
  digitalWrite(LedRojo, HIGH);
  digitalWrite(LedAmarillo, HIGH);
  digitalWrite(LedAzul, HIGH);
  digitalWrite(LedVerde, HIGH);
  digitalWrite(LedRojo, HIGH);
  digitalWrite(LedBlanco, HIGH);
  delay(sensorValue); 
  digitalWrite(LedRojo, LOW);
  digitalWrite(LedAmarillo, LOW);
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedVerde, LOW);
  digitalWrite(LedRojo, LOW);
  digitalWrite(LedBlanco, LOW);
  delay(sensorValue);
}