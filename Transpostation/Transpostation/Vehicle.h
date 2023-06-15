#pragma once
#include <iostream>
#include <string>

using namespace std;

class CVehicle {

public:

	CVehicle();
	CVehicle(int numberOfWheels, int engineCapacity);
	~CVehicle();

	virtual void powerOn() = 0;
	virtual void powerOff() = 0;
	virtual void moveForward() = 0;
	virtual void moveReverse() = 0;
	virtual void turnLeft() = 0;
	virtual void turnRight() = 0;
	virtual void applyBrake() = 0;

protected:

	int m_numberOfWheels;
	int m_engineCapacity;



	

};