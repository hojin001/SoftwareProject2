#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial){
    ;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(++count);
  toggle = count % 2;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}
