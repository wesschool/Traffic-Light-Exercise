#pragma once
#include <string>

class Light
{
public:
	virtual Light* GetNextLight() = 0;
	virtual std::string ToString() = 0;
};
