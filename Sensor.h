
#include <Arduino.h>

/*
	For Arduino Mega 2560
	A0 -> 53
	A1 -> 54
	A2 -> 55
	........

	For Arduino UNO 
	A0 -> 14
	A1 -> 15
	A2 -> 16
	A3 -> 17
	A4 -> 18
	A5 -> 19

*/


class Sensor
{
public:
	int size;
	int* sensors;

	int *readings;


	// For 16 Sensors, compatible with UNO too
	Sensor(int);									//1
	Sensor(int, int);								//2
	Sensor(int, int, int);							//3
	Sensor(int, int, int, int);						//4
	Sensor(int, int, int, int, int);				//5
	Sensor(int, int, int, int, int, int);			//6
	Sensor(int, int, int, int, int, int, int);		//7
	Sensor(int, int, int, int, int, int, int, int); //8
	Sensor(int, int, int, int, int, int, int, int, int); //9
	Sensor(int, int, int, int, int, int, int, int, int, int);  // 10
	Sensor(int, int, int, int, int, int, int, int, int, int, int); //11
	Sensor(int, int, int, int, int, int, int, int, int, int, int, int); //12
	Sensor(int, int, int, int, int, int, int, int, int, int, int, int, int); //13
	Sensor(int, int, int, int, int, int, int, int, int, int, int, int, int, int); // 14
	Sensor(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); //15
	Sensor(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); //16
	

	//For arrays
	Sensor(int[]);

	void printValues(int initialDelay, int finalDelay);
	void print(int index);
	void readAll();


private:
	void setSensors();
};

