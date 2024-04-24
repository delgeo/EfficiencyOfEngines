#include "PetrolEng.h"

#include <iostream>

using namespace std;

float PetrolEng::GetEfficiency() {
	return (output * 100 / input);
}

