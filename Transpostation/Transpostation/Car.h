#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public CVehicle {

protected:

	string m_name;
	string m_color;

public:

	Car();
	Car(string name, string color, int numberOfWheels, int engineCapacity);
	~Car();

	void powerOn() override;
	void powerOff() override;
	void moveForward() override;
	void moveReverse() override;
	void turnLeft() override;
	void turnRight() override;
	void applyBrake() override;

};