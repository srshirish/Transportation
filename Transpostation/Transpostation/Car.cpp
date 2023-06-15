#include "Car.h"

Car::Car()
{

}
Car::Car(string name, string color, int numberOfWheels, int engineCapacity) : CVehicle(numberOfWheels,engineCapacity)
{
	m_name = name;
	m_color = color;
	int * iptr = new int(20);
}

Car::~Car()
{
	std::cout << "Car destuctor called " << std::endl;
}

void Car::powerOn() {

	Car obj;
	cout << "Engine is on" << endl;
}

void Car::powerOff() {
	cout << "Engine is off" << endl;
}

void Car::moveForward() {
	cout << "Moving Forward" << endl;
}

void Car::turnLeft() {
	cout << "Turning Left" << endl;
}

void Car::turnRight() {
	cout << "Turning Right" << endl;
}

void Car::applyBrake() {
	cout << "Applying Brake" << endl;
}

void Car::moveReverse() {
	cout << "Moving Reverse" << endl;
}
