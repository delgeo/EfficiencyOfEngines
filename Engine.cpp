#include "Engine.h"
#include "InternalCombEng.h"
#include "PetrolEng.h"
#include "DieselEng.h"
#include "HotAirEng.h"
#include "SteamEng.h"

#include <iostream>

using namespace std;

int main() {
	int EngChoice, InCombChoice, ExCombChoice;
	do {
		cout << "Choose Engine\n\t1. Internal Combustion Engine\n\t2. External Combustion Engine\n\t3. Quit" << endl;
		cin >> EngChoice;

		switch (EngChoice)
		{
		case 1:
		{
			do {
				cout << "Choose Internal Combustion Engine\n\t1. Petrol Engine\n\t2. Diesel Engine\n\t3. Previous Menu" << endl;
				cin >> InCombChoice;

				switch (InCombChoice)
				{
				case 1:
				{
					PetrolEng p;
					cout << "Efficiency of Petrol Engine = " << p.GetEfficiency() << endl << endl;
					break;
				}
				case 2:
				{
					DieselEng d;
					cout << "Efficiency of Diesel Engine = " << d.GetEfficiency() << endl << endl;
					break;
				}
				case 3:
				{
					break;
				}
				default:
					cout << "Invalid selection!\nTry again!!" << endl << endl;
					break;
				}
			} while (InCombChoice != 3);
			break;
		}
		case 2:
		{
			do {
				cout << "Choose External Combustion Engine\n\t1. Steam Engine\n\t2. Hot Air Engine\n\t3. Previous Menu" << endl;
				cin >> ExCombChoice;
				switch (ExCombChoice)
				{
				case 1:
				{
					SteamEng s;
					cout << "Efficiency of Steam Engine = " << s.GetEfficiency() << endl << endl;
					break;
				}
				case 2:
				{
					HotAirEng h;
					cout << "Efficiency of Hot Air Engine Engine = " << h.GetEfficiency() << endl << endl;
					break;
				}
				case 3:
				{
					break;
				}
				default:
					cout << "Invalid selection!\nTry again!!" << endl << endl;
					break;
				}
			} while (ExCombChoice != 3);
			break;
		}
		case 3:
		{
			cout << endl << "Goodbye" << endl << endl;
			break;
		}
		default:
			cout << "Invalid selection!\nTry again!!" << endl << endl;
			break;
		} 
	} while (EngChoice != 3);
	return 0;
}


