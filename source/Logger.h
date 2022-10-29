#ifndef SOURCE_LOGGER_H
#define SOURCE_LOGGER_H

#include <string>
#include <termcolor/termcolor.hpp>

enum class LogColor{white, red, blue, yellow, cyan, magenta};

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

template<LogColor c>
class Logger : public ILogger
{
	LogColor logColor;
public:
Logger();
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
