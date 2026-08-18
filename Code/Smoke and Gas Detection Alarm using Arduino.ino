#define MQ2 A0
#define RED_LED 8
#define GREEN_LED 9
#define BUZZER 7

int smokeThreshold = 500;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int smokeValue = analogRead(MQ2);
  Serial.println(smokeValue);

  if (smokeValue > smokeThreshold) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BUZZER, HIGH);
  } else {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BUZZER, LOW);
  }

  delay(500);
}
