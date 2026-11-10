
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// ---------- LCD ----------
LiquidCrystal_I2C lcd(0x27, 16, 2);

// ---------- DHT11 ----------
#define DHT_PIN 2
#define DHT_TYPE DHT11
DHT dht(DHT_PIN, DHT_TYPE);

// ---------- Sensor Pins ----------
#define IR_PIN       3
#define FLAME_PIN    4
#define BUZZER_PIN   5

#define TRIG_PIN     9
#define ECHO_PIN     10

#define SOIL_PIN     A0
#define MQ2_PIN      A1

// Many IR and flame modules are active LOW.
// Change to HIGH if your module works oppositely.
#define IR_DETECTED LOW
#define FLAME_DETECTED LOW

// ---------- Variables ----------
float temperature = 0;
float humidity = 0;
float distance = 0;

int soilValue = 0;
int gasValue = 0;

bool irStatus = false;
bool flameStatus = false;

unsigned long lastDHTRead = 0;
unsigned long lastLCDChange = 0;

int lcdPage = 0;

// ---------- Ultrasonic Function ----------
float readDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  unsigned long duration =
      pulseIn(ECHO_PIN, HIGH, 30000UL);

  if (duration == 0) {
    return -1;
  }

  return duration * 0.0343 / 2.0;
}

// ---------- Read Sensors ----------
void readSensors() {

  distance = readDistance();

  soilValue = analogRead(SOIL_PIN);
  gasValue = analogRead(MQ2_PIN);

  irStatus = (digitalRead(IR_PIN) == IR_DETECTED);

  flameStatus =
      (digitalRead(FLAME_PIN) == FLAME_DETECTED);

  // DHT11 needs an interval between readings.
  if (millis() - lastDHTRead >= 2000) {

    lastDHTRead = millis();

    float t = dht.readTemperature();
    float h = dht.readHumidity();

    if (!isnan(t)) {
      temperature = t;
    }

    if (!isnan(h)) {
      humidity = h;
    }
  }
}

// ---------- LCD Display ----------
void updateLCD() {

  lcd.clear();

  if (lcdPage == 0) {

    lcd.setCursor(0, 0);

    lcd.print("Dist:");

    if (distance >= 0) {
      lcd.print(distance, 1);
      lcd.print(" cm");
    } else {
      lcd.print("Out of range");
    }

    lcd.setCursor(0, 1);
    lcd.print("T:");
    lcd.print(temperature, 0);
    lcd.print("C H:");
    lcd.print(humidity, 0);
    lcd.print("%");
  }

  else if (lcdPage == 1) {

    lcd.setCursor(0, 0);
    lcd.print("Soil ADC:");
    lcd.print(soilValue);

    lcd.setCursor(0, 1);
    lcd.print("MQ2 ADC:");
    lcd.print(gasValue);
  }

  else if (lcdPage == 2) {

    lcd.setCursor(0, 0);
    lcd.print("IR:");

    lcd.print(irStatus ? "DETECTED" : "CLEAR");

    lcd.setCursor(0, 1);
    lcd.print("Flame:");

    lcd.print(flameStatus ? "YES" : "NO");
  }
}

// ---------- Serial Monitor ----------
void printSerial() {

  Serial.println("\n------ SENSOR DATA ------");

  Serial.print("Distance: ");

  if (distance >= 0) {
    Serial.print(distance);
    Serial.println(" cm");
  } else {
    Serial.println("Out of range");
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Soil ADC: ");
  Serial.println(soilValue);

  Serial.print("MQ2 ADC: ");
  Serial.println(gasValue);

  Serial.print("IR Sensor: ");
  Serial.println(irStatus ? "Object Detected" : "Clear");

  Serial.print("Flame Sensor: ");
  Serial.println(flameStatus ? "Flame Detected" : "No Flame");

  Serial.println("-------------------------");
}

// ---------- Setup ----------
void setup() {

  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(IR_PIN, INPUT);
  pinMode(FLAME_PIN, INPUT);

  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);

  dht.begin();

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Multi Sensor");
  lcd.setCursor(0, 1);
  lcd.print("Monitoring...");
  
  Serial.println("Arduino Multi-Sensor System");
  Serial.println("System Initializing...");

  delay(2000);

  lastDHTRead = millis() - 2000;
}

// ---------- Main Loop ----------
void loop() {

  readSensors();

  // Buzzer activates for flame detection.
  // This is an experimental indicator, not a certified alarm.
  digitalWrite(BUZZER_PIN, flameStatus ? HIGH : LOW);

  // Rotate LCD pages every 3 seconds.
  if (millis() - lastLCDChange >= 3000) {

    lastLCDChange = millis();

    lcdPage++;

    if (lcdPage > 2) {
      lcdPage = 0;
    }

    updateLCD();
  }

  printSerial();

  delay(500);
}
