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
	std::shared_ptr<ILogger> logCritical;
};

#endif // SOURCE_FUELGAUGE_H