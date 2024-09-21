int tombol1 = 0;
int tombol2 = 0;
int tombol3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tombol1 = digitalRead(2);
  tombol2 = digitalRead(3);
  tombol3 = digitalRead(4);

  if(tombol1 == HIGH) {
    ke_kanan();
  } else if (tombol2 == HIGH) {
    ke_kanan();
    ke_kiri();
  } else if (tombol3 == HIGH) {
    ke_kiri();
  } else {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
}

void ke_kanan(){
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);
}
void ke_kiri(){
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
}
