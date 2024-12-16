/**********************************************
 Project : Deteksi Pencuri notif HP (Blynk IoT)
 Chip : WeMos D1 Mini
 Input : Sensor Magnet
 Output : Buzzer, LED
 Kelompok Smart Alarm Door
 ********************************************/
#define BLYNK_TEMPLATE_ID "TMPL6zLmaP-1c"
#define BLYNK_TEMPLATE_NAME "Smart Alarm Door"
#define BLYNK_AUTH_TOKEN "glMdJpJ4MpBcVwwV1xHJhFZ2UEAlJLzc"

#define BLYNK_PRINT Serial

 // INTERNET
char ssid[] = "ngops";
char pass[] = "abf1234567";

#define DOOR_SENSOR  D1 
#define BUZZ D3
#define LED D7

#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
boolean st;
int i, j;

//==============================
void cek_Door() {
  if ((digitalRead(DOOR_SENSOR) == HIGH) && (j == 0)) {
    digitalWrite(BUZZ, HIGH);
    Blynk.logEvent("awas", "Jendela terbuka, waspada !");
    Serial.println("Sensor ON...");
    j = 1;
    delay(500);
    }
  else if ((digitalRead(DOOR_SENSOR) == LOW) && (j == 1)) {
    digitalWrite(BUZZ, LOW);
    Serial.println("Sensor OFF");
    j = 0;
    delay(500);
    }
  }
//==============================
void setup()
  {
  Serial.begin(115200);
  pinMode(DOOR_SENSOR, INPUT_PULLUP);
  pinMode(BUZZ, OUTPUT);
  pinMode(LED, OUTPUT);
  Blynk.begin(auth, ssid, pass);

  while (!st) {
    st = Blynk.connected();
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    }

  }
//==============================
void loop()
  {
  for (i = 0;i < 100;i++) {
    cek_Door();
    Blynk.run();
    delay(10);
    }
  digitalWrite(LED, !digitalRead(LED));

  }
