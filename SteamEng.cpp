#include "SteamEng.h"

#include <iostream>

using namespace std;

float SteamEng::GetEfficiency() {
	return (output * 100 / input);
}

