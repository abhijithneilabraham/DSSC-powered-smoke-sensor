void setup()
{
 pinMode(A0,INPUT);
 pinMode(2,OUTPUT);
 digitalWrite(2,LOW);
 Serial.begin(9600);
 }

void loop() 
{
 int sens_val=analogRead(A0);
Serial.println(analogRead(A0));
delay(1000);
if(sens_val>165)
{
digitalWrite(2,HIGH);
delay(1000);
}

else
digitalWrite(2,LOW);

}
