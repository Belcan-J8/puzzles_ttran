
#include "Car.h"
#include "Logger.h"

int main(int argc, char* argv[])
{
	Logger<LogColor::white> logger;

	logger.Log("Starting application");

	Car car1(LogColor::cyan);
	Car car2(LogColor::magenta);
	car1.TurnLeft();
	car2.TurnLeft();
	car1.TurnRight();
	car2.TurnRight();
	car1.Accelerate();
	car2.Accelerate();

	logger.Log("Exiting application");
}
