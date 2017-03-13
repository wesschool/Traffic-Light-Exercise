#include "TrafficLight.h"
#include "LightStates.h"
#include <iostream>

using namespace std;

int main()
{
	TrafficLight trafficLight(new redLight);
	cout << "The light is " << trafficLight.getLight() << endl;
	trafficLight.changeLight();
	cout << "The light is " << trafficLight.getLight() << endl;
	trafficLight.changeLight();
	cout << "The light is " << trafficLight.getLight() << endl;
}
