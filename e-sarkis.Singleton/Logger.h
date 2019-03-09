#pragma once

#include <iostream>

class Logger
{
public:
	Logger(std::ostream &);
	~Logger() {};

	void log(std::string);

private:
	std::ostream & _stream;
};

