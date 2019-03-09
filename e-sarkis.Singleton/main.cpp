#include "ProgramManager.h"

int main()
{
	// Logger objects
	Logger standard(std::cout);
	Logger error(std::cerr);

	// Lazy-initialization in the ProgramManager::instance() call
	ProgramManager::instance().setLogger(standard);

	ProgramManager::instance().getLogger().log("Hello Standard Output!");
	// Swap to error logging
	ProgramManager::instance().setLogger(error);
	ProgramManager::instance().getLogger().log("Hello Error Output!");

	return 0;
}