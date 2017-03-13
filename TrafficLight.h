#pragma once
#include "Light.h"

class TrafficLight
{
public:
	TrafficLight(Light* currentLight);
	~TrafficLight();

	void changeLight();
	std::string getLight();
protected:
	Light* currentLight;
};
