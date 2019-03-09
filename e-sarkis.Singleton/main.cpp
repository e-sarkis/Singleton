#include "ProgramManager.h"

int main()
{
	Logger standard(std::cout);
	Logger error(std::cerr);

	// Lazy-initialization in the ProgramManager::instance() call
	ProgramManager::instance().setLogger(standard);

	ProgramManager::instance().getLogger().log("Hello Standard Output!");

	ProgramManager::instance().setLogger(error);
	ProgramManager::instance().getLogger().log("Hello Error Output!");

	return 0;
}