#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2
#define LED_PIN 12
#define BUZZER_PIN 9

const float THRESHOLD = 35.0;

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  noTone(BUZZER_PIN);

  sensors.begin();

  Serial.println("Smart Temperature Monitor");
}

void loop() {

  sensors.requestTemperatures();
  float temp = sensors.getTempCByIndex(0);

  if (temp == DEVICE_DISCONNECTED_C) {
    Serial.println("DS18B20 not detected!");
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    delay(1000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temp, 2);
  Serial.println(" C");

  if (temp > THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);   // 1000 Hz beep

    Serial.println("ALERT! HIGH TEMPERATURE");
  }
  else {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    Serial.println("Temperature Normal");
  }

  Serial.println("----------------------");

  delay(1000);
}