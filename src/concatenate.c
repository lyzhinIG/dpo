const char getFmt1[] PROGMEM = "192.168.1.2/accident/script.php?vehicle_id=";
const char getFmt2[] PROGMEM = "&datetime=";

unsigned long vehicle_id = 123456789;
char dateTime[] = "201705161540";

void setup() {
  char bigBuf[100] = "";
  Serial.begin(250000);
  strcpy_P(bigBuf, getFmt1);
  char* ptr = bigBuf + strlen(bigBuf);
  ultoa(vehicle_id, ptr, 10);
  strcat_P(bigBuf, getFmt2);
  strcat(bigBuf, dateTime);
  Serial.print(F("we now have '"));
  Serial.print(bigBuf);
  Serial.println(F("'"));
}
void loop() {}