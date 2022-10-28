#ifndef SOURCE_FUELGAUGE_H
#define SOURCE_FUELGAUGE_H

#include <memory>

#include "Logger.h"

class FuelGauge
{
public:
	FuelGauge();
	void DecrementFuelLevel();
private:
	int fuelLevel;
	ILogger* logger;
};

#endif // SOURCE_FUELGAUGE_H