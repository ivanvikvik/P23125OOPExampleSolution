#include "GasStation.h"

int GasStation::calculateTotalGas(Transport** transports, int size) {
	int total = 0;

	for (int i = 0; i < size; i++)
	{
		total += transports[i]->getTank();
	}
	
	return total;
}
