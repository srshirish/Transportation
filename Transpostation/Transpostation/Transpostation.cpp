#include <iostream>
#include "MenuDriven.h"

using namespace std;

int main() 
{
	Menu* pMenu = new Menu();
	pMenu->showMenu();
	delete(pMenu);

	return 0;
}

