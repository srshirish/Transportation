#include "Bike.h"

Bike::Bike(string name, string color, int numberOfWheels, int engineCapacity) : CVehicle(numberOfWheels, engineCapacity) {
	m_name = name;
	m_color = color;
}

void Bike::powerOn() {
	cout << "Engine is on" << endl;
}

void Bike::powerOff() {
	cout << "Engine is off" << endl;
}

void Bike::moveForward() {
	cout << "Moving Forward" << endl;
}

void Bike::turnLeft() {
	cout << "Turning Left" << endl;
}

void Bike::turnRight() {
	cout << "Turning Right" << endl;
}

void Bike::applyBrake() {
	cout << "Applying Brake" << endl;
}

void Bike::moveReverse() {
	cout << "Moving Reverse" << endl;
}
