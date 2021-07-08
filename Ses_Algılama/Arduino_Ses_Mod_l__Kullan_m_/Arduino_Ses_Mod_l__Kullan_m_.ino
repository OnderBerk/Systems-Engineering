int DO = 1; //D0 pini
int DA = A0; // A0 pini
int ses1 = 40;//analog ses seviyesi
int ses2 = 40;//analog ses seviyesi
int ses3 = 40;//analog ses seviyesi
int ses4 = 40;//analog ses seviyesi
int ses5 = 40;//analog ses seviyesi



int sesdegeri = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  sesdegeri = analogRead(DA); 

  if (sesdegeri >= ses1) { //Eğer algılanan ses seviyesi belirlediğimiz değerden büyükse
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    Serial.println("Ses algılandı");

  }
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
}
}
