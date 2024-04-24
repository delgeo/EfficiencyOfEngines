#include "DieselEng.h"

#include <iostream>

using namespace std;

float DieselEng::GetEfficiency() {
	return (output * 100 / input);
}

