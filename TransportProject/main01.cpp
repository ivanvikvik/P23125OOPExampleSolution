//#include "GasStation.h"
//
//int main() {
//	Bus* bus01 = new Bus(200);
//	Bus* bus02 = new Bus(300);
//
//	Bus** buses = new Bus*[2] {bus01, bus02};
//
//	Car* car01 = new Car(50);
//	Car* car02 = new Car(60);
//	Car* car03 = new Car(40);
//
//	Car** cars = new Car*[3] {car01, car02, car03};
//
//	GasStation* station = new GasStation();
//
//	int total = station->calculateTotalGas(buses, 2, cars, 3);
//
//	cout << "Total gas is " << total << ".\n";
//
//	delete station;
//
//	delete[] cars;
//	delete car01;
//	delete car02;
//	delete car03;
//
//	delete[] buses;
//	delete bus01;
//	delete bus02;
//
//	return 0;
//}