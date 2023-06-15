#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Bike : public CVehicle {

protected:

	string m_name;
	string m_color;

public:

	Bike(string name, string color, int numberOfWheels, int engineCapacity);

	void powerOn() override;
	void powerOff() override;
	void moveForward() override;
	void moveReverse() override;
	void turnLeft() override;
	void turnRight() override;
	void applyBrake() override;

};