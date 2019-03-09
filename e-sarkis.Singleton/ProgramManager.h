#pragma once

#include "Logger.h"

// Singleton implementation that reduces overall codebase singleton
// implementations.
class ProgramManager
{
public:
	// Return reference as access to single Singleton instance via thread-safe
	// initialization
	static ProgramManager & instance()
	{
		static ProgramManager *instance = new ProgramManager();
		return *instance;
	}

	// Setter
	void setLogger(Logger & t_logger) { _currentLogger = &t_logger; }

	// Getter
	Logger & getLogger() { return *_currentLogger; }

private:
	Logger * _currentLogger;
};

