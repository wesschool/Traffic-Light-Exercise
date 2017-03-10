#include "States.h"

CBaseState* yellowState::GetNextLight()
{
	return new redState;
}

char* yellowState::ToString()
{
	return "yellow";
}

CBaseState* greenState::GetNextLight()
{
	return new yellowState;
}

char* greenState::ToString()
{
	return "green";
}

CBaseState* redState::GetNextLight()
{
	return new yellowState;
}

char* redState::ToString()
{
	return "red";
}