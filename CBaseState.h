#pragma once
class CBaseState
{
public:
	virtual CBaseState* GetNextLight() = 0;
	virtual char* ToString() = 0;
};