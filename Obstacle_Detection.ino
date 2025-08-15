#define trigPin D6
#define echoPin D5
#define buzzer D2
#define motor D3

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(115200);
}

long getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2; // cm
  return distance;
}

void loop() {
  long distance = getDistance();
  Serial.println(distance);

  if (distance < 20) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(motor, HIGH);
  } else if (distance < 50) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(motor, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    digitalWrite(motor, LOW);
    delay(200);
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(motor, LOW);
  }
}

