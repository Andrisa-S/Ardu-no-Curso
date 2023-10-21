int verde = 13;
int amarelo = 12;
int vermelho = 11;
int verde_pe = 5;
int vermelho_pe = 3;

void setup() {
  pinMode (verde, OUTPUT);  // put your setup code here, to run once:
  pinMode (amarelo, OUTPUT);
  pinMode (vermelho, OUTPUT);
  pinMode (verde_pe, OUTPUT);
  pinMode (vermelho_pe, OUTPUT);

}

void loop() {

  digitalWrite (verde, HIGH); // green on
  digitalWrite (vermelho_pe, HIGH); // red pedestrian on
    delay (3000);
  digitalWrite (verde, LOW); // green off
    digitalWrite (vermelho_pe, LOW); // red pedestrian off
  digitalWrite (amarelo, HIGH); // yellow on

  if (amarelo, HIGH) {

    digitalWrite (vermelho_pe, HIGH); // red pedestrian on
      delay (100);
    digitalWrite (vermelho_pe, LOW); // red pedestrian off
      delay (100);
    digitalWrite (vermelho_pe, HIGH); // red pedestrian on
      delay (100);
    digitalWrite (vermelho_pe, LOW); // red pedestrian off
      delay (100);
    digitalWrite (vermelho_pe, HIGH); // red pedestrian on
      delay (100);
    digitalWrite (vermelho_pe, LOW); // red pedestrian off
      delay (100);
    digitalWrite (vermelho_pe, HIGH); // red pedestrian on
      delay (100);
    digitalWrite (vermelho_pe, LOW); // red pedestrian off
      delay (100);
    digitalWrite (vermelho_pe, HIGH); // red pedestrian on
      delay (100);
    digitalWrite (vermelho_pe, LOW); // red pedestrian off
      delay (100);
    digitalWrite (amarelo, LOW); // yellow off
  }
  
  digitalWrite (vermelho, HIGH); // red on
  digitalWrite (verde_pe, HIGH); //green pedestrian on
    delay (3000);
  digitalWrite (vermelho, LOW); // red off
    digitalWrite (verde_pe, LOW); //green pedestrian off

}
