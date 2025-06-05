#pragma once
#include "Car.h"
#include "Bus.h"
#include "Truck.h"

class GasStation
{
public:
	//...
	int calculateTotalGas(Car* cars, int car_size, Truck* trucks, int truck_size,
		Bus* buses, int bus_size) {

		int total = 0;

		for (int i = 0; i < car_size; i++)
		{
			total += cars[i].volume;
		}

		for (int i = 0; i < truck_size; i++)
		{
			total += trucks[i].tank;
		}

		for (int i = 0; i < bus_size; i++)
		{
			total += buses[i].gas;
		}

		return total;
	}
};
