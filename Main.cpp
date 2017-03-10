#include "CTrafficLight.h"
#include "States.h"
#include <iostream>

using namespace std;

int main()
{
	CTrafficLight trafficLight(new redState);
	cout << "The light is " << trafficLight.getLight() << endl;
	trafficLight.changeLight();
	cout << "The light is " << trafficLight.getLight() << endl;
	trafficLight.changeLight();
	cout << "The light is " << trafficLight.getLight() << endl;
}