#include <memory>

#include "Car.h"

Car::Car(LogColor c)
	: logColor(std::move(c))
	, fuelGauge()
	, logger(nullptr)
{
	if(logColor == LogColor::cyan) {
		logger = std::make_shared<Logger<LogColor::cyan>>();
	} else if(logColor == LogColor::magenta) {
		logger = std::make_shared<Logger<LogColor::magenta>>();
	} else {
		logger = std::make_shared<Logger<LogColor::white>>();
	}
}
void Car::TurnLeft()
{
	logger->Log("Turning left");
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right");
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead");
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
