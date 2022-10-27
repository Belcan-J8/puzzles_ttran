#ifndef SOURCE_LOGGER_H
#define SOURCE_LOGGER_H

#include <string>

#include <termcolor/termcolor.hpp>

enum class LogLevel{info, critical};

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

template<LogLevel lvl>
class Logger : public ILogger
{
	LogLevel logLevel;
public:
	Logger();
	void Log(std::string string);
};

#endif // SOURCE_LOGGER_H