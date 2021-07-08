# Motor-drive-design-and-implementation-for-two-wheel-robot-base
This circuit aims to create the base for moving the robot wheels, in order to do so we placed two DC motors and code them to move in Two-dimensional rotation (clockwise & counterclockwise) which will allow the robot to move forward and backward.
This circuit simulation is done using Tinckercad (https://www.tinkercad.com/dashboard) , the circuit consists of:
* one Arduino
* two DC motors
* one 9 volts Battery
* one H-bridge Motor Drive

## Circuit Diagram
![image](https://user-images.githubusercontent.com/85634099/124966361-e67b7c00-e02b-11eb-8a68-78deea786388.png)

## Circuit Video
note: you will notice that the DC motors values change from positive (clockwise) to negative (counterclockwise)

https://user-images.githubusercontent.com/85634099/124966668-3e19e780-e02c-11eb-9d15-53cdf97b48d2.mp4

## Circuit Code
```
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
```

