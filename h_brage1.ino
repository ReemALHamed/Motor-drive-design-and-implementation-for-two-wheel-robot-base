void setup()
{
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

pinMode(6, OUTPUT);
pinMode(5, OUTPUT);

}

void loop()
{
digitalWrite(11, HIGH);// Moving clockwise
digitalWrite(6, HIGH); // Moving clockwise

delay(1000); // Wait for 1000 millisecond(s)

digitalWrite(11, LOW);// Moving counterclockwise
digitalWrite(6, LOW);// Moving counterclockwise

delay(1000); // Wait for 1000 millisecond(s)

digitalWrite(10, HIGH);// Moving clockwise
digitalWrite(5, HIGH);// Moving clockwise

delay(1000); // Wait for 1000 millisecond(s)

digitalWrite(10, LOW);// Moving counterclockwise
digitalWrite(5, LOW);// Moving counterclockwise

delay(1000); // Wait for 1000 millisecond(s)

}