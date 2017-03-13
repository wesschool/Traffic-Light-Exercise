#pragma once
#include "Light.h"

class redLight : public Light
{
public:
	virtual Light* GetNextLight();
	virtual std::string ToString();
};

class yellowLight : public Light
{
public:
	virtual Light* GetNextLight();
	virtual std::string ToString();
};

class greenLight : public Light
{
public:
	virtual Light* GetNextLight();
	virtual std::string ToString();
};
