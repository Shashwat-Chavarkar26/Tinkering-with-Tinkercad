// C++ code
//
long distance;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //clear the trigpin
    digitalWrite(13, LOW);
  delayMicroseconds(2);
  //send a  10 microsecond pulse to trigpin
  digitalWrite(13, HIGH);
  delayMicroseconds(10);
  digitalWrite(13, LOW);
  
  //read echopin and calc distance
  distance=pulseIn(12,HIGH);
  distance =(distance*0.034)/2;
  
  //print dist to serial monitor
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  if( distance<=50)
  {
    digitalWrite(8, HIGH);
  }
    else
    {
      digitalWrite(8, LOW);
  }
  delay(500);
}