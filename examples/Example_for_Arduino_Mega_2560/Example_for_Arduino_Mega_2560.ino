#include "Sensor.h"
int sensorArray[] = { 53, 54, 55, 56, 57, 58 }; // Connected the sensors in these pins

Sensor mySensors(sensorArray); //Creating object using "array"
Sensor myOtherSensor(59, 60, 61, 62); // Creating another instance putting the pins directly


void setup()
{
	Serial.begin(9600); // Remember to add this function to see values
}

void loop()
{
	mySensors.printValues(100, 1000); // It will wait 100ms after printing the value of every sensor, after printing all the values it will wait 1000 ms further
	
	delay(1000); 

	myOtherSensor.printValues(10, 100);

	delay(1000);

	myOtherSensor.print(59); // This will print the individual value of the sensor connected to 59 number pin


}
