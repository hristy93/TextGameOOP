#ifndef GUARD_HEADER_TEMPLATES
#define GUARD_HEADER_TEMPLATES

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "GameObjects.h"

class Game : public GameObjects
{
private:
	bool ended;
	bool finished;
public:
	Game() 
	{
		ended = false;
		finished = false;
	}
	void Run();
	void RestartOrExit(bool ended, bool finished);
};

#endif