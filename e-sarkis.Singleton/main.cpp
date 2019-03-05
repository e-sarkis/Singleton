#include <iostream>

#include "ProgramManager.h"

int main()
{
	// Lazy-initialization in the ProgramManager::instance() call
	ProgramManager::instance().setCharacter('A');
	ProgramManager::instance().setInteger(1);

	// Terminal output for sake of example, but in an actual scenario these getters
	// would provide access to class instances.
	std::cout << ProgramManager::instance().getCharacter() << std::endl;
	std::cout << ProgramManager::instance().getInteger() << std::endl;

	return 0;
}