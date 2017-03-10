#include "CTrafficLight.h"

CTrafficLight::CTrafficLight()
{
}

CTrafficLight::CTrafficLight(CBaseState* pContext)
	:m_pCurrentLight{pContext}
{
}

CTrafficLight::~CTrafficLight()
{
	delete m_pCurrentLight;
}

void CTrafficLight::changeLight()
{
	CBaseState* tempLight = m_pCurrentLight->GetNextLight();
	
	//Delete the object m_pState points to
	delete m_pCurrentLight;
	m_pCurrentLight = tempLight;
}

char* CTrafficLight::getLight()
{
	return m_pCurrentLight->ToString();
}