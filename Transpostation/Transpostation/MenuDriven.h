#pragma once

#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"

class Menu {
public:
    void showMenu();
private:
    void startDriving(CVehicle* vehicle);
};


