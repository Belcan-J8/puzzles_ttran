#include <memory>

#include "FuelGauge.h"

FuelGauge::FuelGauge()
	: fuelLevel(5)
	, logYellow(std::make_shared<Logger<LogColor::yellow>>())
{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logYellow->Log("Low fuel!");
	}
}
