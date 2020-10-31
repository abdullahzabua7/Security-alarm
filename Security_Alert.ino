int sec=7;
int bulb=6;
int buzz=5;
int safe=4;
void setup() {
  // put your setup code here, to run once:
pinMode(sec,INPUT);
pinMode(bulb,OUTPUT);
pinMode(buzz,OUTPUT);
pinMode(safe,OUTPUT);
//Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=digitalRead(sec);
//Serial.print(value);
if (value==0){
  digitalWrite(safe,LOW);
  digitalWrite(bulb,HIGH);
  tone(buzz,100,5000);
}
else if (value==1){
  digitalWrite(bulb,LOW);
  //tone(buzz,0,0);
  digitalWrite(safe,HIGH);
}
delay(1000);

}
