#include <iostream>
#include "MenuDriven.h"

using namespace std;

void Menu::showMenu() 
{
    CVehicle * vehicle = nullptr;
    cout << "Welcome to the Automotive World" << endl;

    

    int choice;
    do {
        cout << "Enter 1 for Car" << endl;
        cout << "Enter 2 for Bike" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            vehicle = new Car("Swift", "Black", 4, 1000);
            startDriving(vehicle);
            break;
        case 2:
            vehicle = new Bike("Hero", "Yellow", 2, 250);
            startDriving(vehicle);
            break;
        default:
            cout << "You entered the wrong option. Please enter again." << endl;
            break;
        }
    } while (choice != 1 && choice != 2);
}

void Menu::startDriving(CVehicle* vehicle) {

    if (vehicle == nullptr)
        return;

    cout << "You are ready to start." << endl;
    int choice;
    do {
        cout << "0 for starting the vehicle" << endl;
        cout << "1 for moving forward" << endl;
        cout << "2 for turning left" << endl;
        cout << "3 for turning right" << endl;
        cout << "4 for applying brake" << endl;
        cout << "5 for stopping the vehicle" << endl;
        cin >> choice;

        switch (choice) {
        case 0:
            vehicle->powerOn();
            break;
        case 1:
            vehicle->moveForward();
            break;
        case 2:
            vehicle->turnLeft();
            break;
        case 3:
            vehicle->turnRight();
            break;
        case 4:
            vehicle->applyBrake();
            break;
        case 5:
            cout << "Stopping the vehicle." << endl;
            vehicle->powerOff();
            break;
        default:
            cout << "Please select the right choice." << endl;
            break;
        }
    } while (choice != 5);
    delete(vehicle);
}





























/*#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"

using namespace std;

class Menu {

public:

	void showMenu() {
		CVehicle* vehicle;
		cout << "Welcome to the Automotive World" << endl;
		start:
			{
				int choice;
				cout << "Enter 1, For Car" << endl;
				cout << "Enter 2, For Bike" << endl;
				cout << "Enter your choice"; cin >> choice;

				if (choice == 1) {
					vehicle = new Car("Swift", "Black", 4, 1000);
					startDriving(vehicle);
				}
				else if (choice == 2) {
					vehicle = new Bike("Hero", "Yellow", 2, 250);
					startDriving(vehicle);
				}
				else {
					cout << "Your entered the wrong option, Please enter again" << endl;
				}
			}
		goto start;
	
	}
	void startDriving(CVehicle* vehicle) {
		cout << "Your are ready to start" << endl;
		int choice;
		do {
			cout << "0. for starting the vehicle" << endl;
			cout << "1. for moving forward" << endl;
			cout << "2. for turning left" << endl;
			cout << "3. for turning right" << endl;
			cout << "4. for applying brake" << endl;
			cout << "5. for stopping the vehicle" << endl;
			cin >> choice;
			switch (choice) {
			case 0: vehicle->powerOn(); break;
			case 1: vehicle->powerOn(); break;
			case 2: vehicle->powerOn(); break;
			case 3: vehicle->powerOn(); break;
			case 4: vehicle->powerOn(); break;
			case 5: cout<<"Stopping the vehicle "; vehicle->powerOn(); break;
			default: cout << "Please select the right choice" << endl;
			}
		} while (choice!=5);
	}
};


*/