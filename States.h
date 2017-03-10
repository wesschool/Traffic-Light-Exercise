#pragma once
#include "CBaseState.h"

class redState : public CBaseState
{
public:
	virtual CBaseState* GetNextLight();
	virtual char* ToString();
};

class yellowState : public CBaseState
{
public:
	virtual CBaseState* GetNextLight();
	virtual char* ToString();
};

class greenState : public CBaseState
{
public:
	virtual CBaseState* GetNextLight();
	virtual char* ToString();
};