#pragma once

#include "System.h"

/*
Defines the system that calls the logic updates for all of the game objects
*/
class LogicManager
	: public System
{
public:
	LogicManager();
	~LogicManager();

	void Update(double dTime) override;

	void HandleMessage(Msg* postedMsg) override;

private:
	// variable used to store current event in event queue
	SDL_Event e;
};
