const int soundPin = A0;

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);//set ledPin as OUTPUT
  Serial.begin(31250); //initialize the serial communication as 9600 bps
}

void loop(){
  int value = analogRead(soundPin);
  Serial.println(value);

  if (value > 600){
    digitalWrite(LED_BUILTIN,HIGH);
  } else {
    digitalWrite(LED_BUILTIN,LOW);
  }
}