#include "Logger.h"

#include "termcolor.hpp"
#include <iostream>

template<LogColor c>
Logger<c>::Logger(): logColor(std::move(c)) {}

template<LogColor c>
void Logger<c>::Log(std::string string)
{
	if(logColor == LogColor::white) {
		std::cout << termcolor::white;
	} else if(logColor == LogColor::red) {
		std::cout << termcolor::red;
	} else if(logColor == LogColor::blue) {
		std::cout << termcolor::blue;
	} else if(logColor == LogColor::yellow) {
		std::cout << termcolor::yellow;
	} else if(logColor == LogColor::cyan) {
		std::cout << termcolor::cyan;
	} else if(logColor == LogColor::magenta) {
		std::cout << termcolor::magenta;
	}
	std::cout << string << termcolor::reset << std::endl;
}

template class Logger<LogColor::white>;
template class Logger<LogColor::red>;
template class Logger<LogColor::blue>;
template class Logger<LogColor::yellow>;
template class Logger<LogColor::cyan>;
template class Logger<LogColor::magenta>;

void BlueLogger::Log(std::string string)
{
	std::cout << termcolor::blue << string << std::endl;
}
void RedLogger::Log(std::string string)
{
	std::cout << termcolor::red << string << std::endl;
}
