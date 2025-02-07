#include "../include/commands.h"

Command getCommand(const std::string& cmdStr) {
    if (cmdStr == "add")				return ADD;
    if (cmdStr == "update") 			return UPDATE;
    if (cmdStr == "delete") 			return DELETE;
    if (cmdStr == "mark-in-progress") 	return MARK_IN_PROGRESS;
    if (cmdStr == "mark-done") 			return MARK_DONE;
    if (cmdStr == "list")				return LIST;
    return UNKNOWN;
}