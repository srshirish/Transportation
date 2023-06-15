#include "Vehicle.h"

CVehicle::CVehicle()
{

}
CVehicle::CVehicle(int numberOfWheels, int engineCapacity) {
	CVehicle::m_numberOfWheels = numberOfWheels;
	CVehicle::m_engineCapacity = engineCapacity;
}

CVehicle::~CVehicle()
{
	std::cout << "Vehicle Destructor called " << std::endl;
}



