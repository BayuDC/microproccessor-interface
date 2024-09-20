int status_tombol_kanan;
int status_tombol_kiri;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  status_tombol_kanan = digitalRead(8);
  status_tombol_kiri = digitalRead(9);

  if(status_tombol_kanan == HIGH) {
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
  } else if(status_tombol_kiri == HIGH) {
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
}
