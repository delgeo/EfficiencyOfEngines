#pragma once
#include<iostream>
using namespace std;

class Engine
{
	
public:
	float input, output;

	Engine() {
		cout << "Enter Input" << endl;
		cin >> input;
		cout << "Enter Output" << endl;
		cin >> output;
	}
	
	virtual float GetEfficiency() = 0;
	virtual ~Engine() {};

};

