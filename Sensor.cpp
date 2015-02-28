#include "Sensor.h"


Sensor::Sensor(int a)
{
	sensors = new int(1);
	sensors[0] = a;
	size = 1;
	setSensors();
}


//Int array for argument
Sensor::Sensor(int arr[])
{
	int* temp = arr;
	int i = 0;
	while (!(temp[i] < 0 || temp[i] > 100)){
		i++;
	}
	size = i;
	sensors = new int(size);

	for (int i = 0; i < size; i++){
		sensors[i] = arr[i];
	}

	setSensors();
}


// Setting the sensors as INPUT
void Sensor::setSensors()
{
	for (int i = 0; i < size; i++){
		pinMode(sensors[i], INPUT);
	}
}


//This function will print the values of sensors
void Sensor::printValues(int initialDelay, int finalDelay)
{
	Serial.println("-----------START--------------");
	for (int i = 0; i < size; i++){
		Serial.println("Sensor[" + String(i) + "] = " + String(analogRead(sensors[i])));
		delay(initialDelay);
	}
	Serial.println("-------------END--------------");
	delay(finalDelay);
}

// This will print the value of specific sensor
void Sensor::print(int index)
{
	Serial.println("Value: " + String(analogRead(index)));
	delay(10);
}


//Overloaded constructors for more than one pin

Sensor::Sensor(int a, int b)
{
	sensors = new int(2);
	sensors[0] = a;
	sensors[1] = b;
	size = 2;
	setSensors();
}


Sensor::Sensor(int a, int b, int c)
{
	sensors = new int(3);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;

	size = 3;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d)
{
	sensors = new int(4);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;

	size = 4;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e)
{
	sensors = new int(5);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;

	size = 5;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f)
{
	sensors = new int(6);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;

	size = 6;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g)
{
	sensors = new int(7);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;

	size = 7;
	setSensors();
}


Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h)
{
	sensors = new int(8);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;

	size = 8;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	sensors = new int(9);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;

	size = 9;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
	sensors = new int(10);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;
	sensors[9] = j;

	size = 10;
	setSensors();
}


Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k)
{
	sensors = new int(11);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;
	sensors[9] = j;
	sensors[10] = k;

	size = 11;
	setSensors();
}


Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
	sensors = new int(12);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;
	sensors[9] = j;
	sensors[10] = k;
	sensors[11] = l;

	size = 12;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
	sensors = new int(13);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;
	sensors[9] = j;
	sensors[10] = k;
	sensors[11] = l;
	sensors[12] = m;

	size = 13;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n)
{
	sensors = new int(14);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;
	sensors[9] = j;
	sensors[10] = k;
	sensors[11] = l;
	sensors[12] = m;
	sensors[13] = n;

	size = 14;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o)
{
	sensors = new int(15);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;
	sensors[9] = j;
	sensors[10] = k;
	sensors[11] = l;
	sensors[12] = m;
	sensors[13] = n;
	sensors[14] = o;

	size = 15;
	setSensors();
}

Sensor::Sensor(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p)
{
	sensors = new int(16);

	sensors[0] = a;
	sensors[1] = b;
	sensors[2] = c;
	sensors[3] = d;
	sensors[4] = e;
	sensors[5] = f;
	sensors[6] = g;
	sensors[7] = h;
	sensors[8] = i;
	sensors[9] = j;
	sensors[10] = k;
	sensors[11] = l;
	sensors[12] = m;
	sensors[13] = n;
	sensors[14] = o;
	sensors[15] = p;

	size = 16;
	setSensors();
}
