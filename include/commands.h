#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>

enum Command{
	ADD, UPDATE, DELETE, MARK_IN_PROGRESS, MARK_DONE, LIST, UNKNOWN
};

// Returns enum constant based on command string
Command getCommand (const std::string& cmdStr);

#endif