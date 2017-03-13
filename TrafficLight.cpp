#include "TrafficLight.h"

TrafficLight::TrafficLight(Light* currentLight)
	:currentLight{currentLight}
{
}

TrafficLight::~TrafficLight()
{
	delete currentLight;
}

void TrafficLight::changeLight()
{
	Light* tempLight = currentLight->GetNextLight();
	
	//Delete the object currentLight points to
	delete currentLight;
	currentLight = tempLight;
}

std::string TrafficLight::getLight()
{
	return currentLight->ToString();
}
