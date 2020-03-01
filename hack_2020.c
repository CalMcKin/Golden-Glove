
int potPin = D1;    // select the input pin for the potentiometer, which is A11 on the board
int buttonPin = D3; //Which is pin B8
int LEDState = 0;
int buttonOld=1;
int buttonNew;
void setup() {
  Serial.begin(9600);
  //button.setDebounceTime(50); // set debounce time to 50ms


   pinMode(buttonPin, INPUT);
  //int buttonPin = 24; //Which is pin B8

  pinMode(potPin, OUTPUT);  // declare the ledPin as an OUTPUT
  //pinMode(buttonPin, INPUT);

  digitalWrite(potPin, LOW); //pot starts as off
  //int b;
}

void loop() {
  //Serial.println(state);


 buttonNew=digitalRead(buttonPin);
if(buttonOld==0 && buttonNew==1){
  if (LEDState==0){
    digitalWrite(potPin,HIGH);
    LEDState=1;
    Serial.printf("on\n", );
  }
  else{
    digitalWrite(potPin, LOW);
    LEDState=0;
    Serial.printf("off\n", );
  }
}
buttonOld=buttonNew;
delay(100);
}
