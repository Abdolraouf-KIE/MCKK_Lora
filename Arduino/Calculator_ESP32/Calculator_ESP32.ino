//building a simple addition calculator
String buff;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("hello from ESP32");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    buff=buff + String(Serial.read());
  }
  if (buff != ""){
    Serial.print(buff);
    buff="";
  }

}
