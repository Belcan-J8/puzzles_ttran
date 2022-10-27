#include "Logger.h"

#include <iostream>

template<LogLevel lvl>
Logger<lvl>::Logger(): logLevel(lvl) {}

template<LogLevel lvl>
void Logger<lvl>::Log(std::string string)
{
	if(logLevel == LogLevel::info) {
		std::cout << termcolor::blue << string << std::endl;
	} else if(logLevel == LogLevel::critical) {
		std::cout << termcolor::red << string << std::endl;
	}
}

template class Logger<LogLevel::info>;
template class Logger<LogLevel::critical>;