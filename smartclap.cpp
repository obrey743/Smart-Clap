

int val;

//setting up the digital pin for the rely
int Rely1 = 13;

void setup(){

  pinMode(Rely1,OUTPUT);

  Serial.begin(9600);

}

void loop(){

  int val = analogRead(A0);
  //reading the value from analog pin A0

  if(val == 40){

    digitalWrite(Rely1,HIGH);

    delay(10000);

    Serial.print(val);

  }

  else{

    digitalWrite(Rely1,LOW);

  }

}
