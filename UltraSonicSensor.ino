/*
 * ------ArduinoMakerCamp-------
 * ------iedcMeenangadi---------
 * 
 */

float distance, duration  ;
int trig=11,echo=10 ;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);   
  delay(2);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = (duration/2)/29.1;
  Serial.println(distance);
  delay(100);
 
}
