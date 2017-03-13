#include "LightStates.h"

Light* yellowLight::GetNextLight()
{
	return new redLight;
}

std::string yellowLight::ToString()
{
	return "yellow";
}

Light* greenLight::GetNextLight()
{
	return new yellowLight;
}

std::string greenLight::ToString()
{
	return "green";
}

Light* redLight::GetNextLight()
{
	return new greenLight;
}

std::string redLight::ToString()
{
	return "red";
}
