#pragma once
#include "Transport.h"

class Car : public Transport
{
private:
	int power;
	int speed;
	//...

public:
	Car();
	Car(int tank);
	~Car();

	//...
};

