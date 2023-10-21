const int PinoSensor = A0; // Analog Pin Int 0
int ValorSensor = 0;
int Led = 13;
void setup() {

  Serial.begin (9600);
  pinMode (Led, OUTPUT);

}

void loop() {
  
  ValorSensor =  analogRead (PinoSensor);
  Serial.print("Valor do Sensor = ");
  Serial.println(ValorSensor);
  delay (250);
  if (ValorSensor < 50) {
    digitalWrite (Led, HIGH);
  }
  else {
    digitalWrite (Led, LOW);
  }

}
