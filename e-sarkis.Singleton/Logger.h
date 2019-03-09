#pragma once

#include <iostream>

// Output stream object agnostic logging system.
class Logger
{
public:
	// Constructs a Logger associated with given ouput stream for log calls.
	Logger(std::ostream &t_stream) : _stream(t_stream)
	{ }

	// Write given string to output stream associated with this Logger object.
	void log(std::string t_in)
	{
		_stream << __DATE__ << " " << __TIME__ << "\t" << t_in.c_str() << std::endl;
	}

private:
	std::ostream & _stream;
};

