#include "GasStation.h"
#include "Car.h"
#include "Bus.h"

int main() {
	Bus* bus01 = new Bus(200);
	Bus* bus02 = new Bus(300);	
	Car* car01 = new Car(50);
	Car* car02 = new Car(60);
	Car* car03 = new Car(40);

	//Transport* tr01 = new Bus(500);

	Transport** transports = new Transport*[5] {bus01, bus02, car01, car02, car03};
	
	GasStation* station = new GasStation();

	int total = station->calculateTotalGas(transports, 5);

	cout << "Total gas is " << total << ".\n";

	delete station;

	delete[] transports;

	delete car01;
	delete car02;
	delete car03;
	delete bus01;
	delete bus02;

	return 0;
}