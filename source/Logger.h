#ifndef SOURCE_LOGGER_H
#define SOURCE_LOGGER_H

#include <string>

#include <termcolor/termcolor.hpp>

enum class LogLevel{info, critical};

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

class Logger : public ILogger
{
public:
	void Log(std::string string);
};

class BlueLogger : public ILogger
{
public:
	void Log(std::string string);
};

class RedLogger : public ILogger
{
public:
	void Log(std::string string);
};

#endif // SOURCE_LOGGER_H
