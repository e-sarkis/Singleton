#include "Logger.h"

Logger::Logger(std::ostream &t_stream) : _stream(t_stream)
{ }

void Logger::log(std::string t_in)
{
	_stream << t_in.c_str();
}
