const int LIR=A0;
int IR;
void setup(){
  pinMode(LIR,INPUT);
  Serial.begin(9600);
}


void loop(){
  IR=analogRead(LIR);
  Serial.println(IR);
}
