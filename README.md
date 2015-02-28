# Check Sensor
## What is this?
A simple library to get the values printed on Serial Monitor of sensors connected to ADC Channel.

## How to use?
* Download this source
* From Arduino IDE Select the following things 
  * `Sketch->Import Library->"Downloaded-Directory\Sensors-Arduino-Library-master.zip"`

Now the library is added and ready to use.

## Example
This is a simple example that also can be found in the `examples` directory
```arduino
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
```


## Methods
The methods are limited at this moment
#### `print(int)`
```arduino
int sensorPin = 53;
Sensor object(sensorPin);
object.print(sensorPin); // For printing the value of individual sensor
```
#### 'printValues(int initialDelay, int finalDelay)`
```arduino
int sensors[] = {53, 54, 55, 56};
Sensor sensorArray(sensors);
sensorArray.printValues(10, 100);
```


## Limitations
* Only prints the values, great for robot debugging based on analog sensors
* `GetValues` will be added later
