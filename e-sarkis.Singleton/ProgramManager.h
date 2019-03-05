#pragma once
// Singleton implementation that reduces overall codebase singleton
// implementations.
// For simplicity I have used primitives as the private members instead of
// objects.
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

	// Setters
	void setCharacter(char t_character) { _character = new char(t_character); }
	void setInteger(char t_integer) { _integer = new int(t_integer); }

	// Getters
	char & getCharacter() { return *_character; }
	int & getInteger() { return *_integer; }

private:
	// Were the member variables classes requiring global access (instead of
	// primitives) they would otherwise potentially be separate singleton 
	// implementations.
	char *_character;
	int *_integer;

};

