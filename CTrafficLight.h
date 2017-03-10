#pragma once
#include "CBaseState.h"

class CTrafficLight
{
public:
	CTrafficLight();
	CTrafficLight(CBaseState* pContext);
	~CTrafficLight();

	void changeLight();
	char* getLight();
protected:
	CBaseState* m_pCurrentLight;
};