#pragma once
#include "Transport.h"

class Bus : public Transport
{
private:
	int count;
	//...

public:
	Bus();
	Bus(int tank);
	//...
	~Bus();
};

