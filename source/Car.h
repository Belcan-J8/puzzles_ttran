#ifndef SOURCE_CAR_H
#define SOURCE_CAR_H

#include <memory>

#include "FuelGauge.h"
#include "Logger.h"

class Car
{
public:
	Car();
	void TurnLeft();
	void TurnRight();
	void Accelerate();
private:
	FuelGauge fuelGauge;
	std::shared_ptr<ILogger> logger;
};

#endif // SOURCE_CAR_H