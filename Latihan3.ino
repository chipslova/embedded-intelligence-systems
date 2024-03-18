int pirpin = 4;
int PIRstatus = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(4, INPUT);
pinMode(5, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
PIRstatus = digitalRead(pirpin);
if(PIRstatus == HIGH){
    Serial.println("Terdeksi adanya gerakan");
    digitalWrite(5, HIGH);
  }
  else{
    Serial.println("Tidak terdeteksi adanya gerakan");
    digitalWrite(5, LOW);
  }
  delay(1000);
}
