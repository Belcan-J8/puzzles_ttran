#include <memory>

#include "FuelGauge.h"

FuelGauge::FuelGauge()
	: fuelLevel(5)
	, logCritical(std::make_shared<Logger<LogLevel::critical>>())
{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logCritical->Log("Low fuel!");
	}
}
