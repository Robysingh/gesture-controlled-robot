

void setup() {
  // put your setup code here, to run once:
    pinMode (9,OUTPUT);
    pinMode (10,OUTPUT);
    pinMode (11,OUTPUT);
    pinMode (12,OUTPUT);

    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay (3000);

    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite (11,LOW);
    digitalWrite(12, LOW);
    delay (3000);

    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite (11,HIGH);
    digitalWrite(12, LOW);
    delay (3000);

    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite (11,LOW);
    digitalWrite(12, LOW);
    delay (3000);

    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite (11,LOW);
    digitalWrite(12, LOW);
    delay (3000);

    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite (11,LOW);
    digitalWrite(12, LOW);
    delay (3000);

    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite (11,HIGH);
    digitalWrite(12, LOW);
    delay (3000);

}
