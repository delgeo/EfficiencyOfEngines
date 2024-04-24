#include "HotAirEng.h"

#include <iostream>

using namespace std;

float HotAirEng::GetEfficiency() {
	return (output * 100 / input);
}

