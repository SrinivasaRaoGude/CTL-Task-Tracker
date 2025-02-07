#include <iostream>
#include <string>
#include <unordered_map>
#include "../include/commands.h"

int main(const int argc, char* argv[]){
	// argc : number of argumnets
	// argv : array of arguments
	
	// task-cli <command> <argv[1]> <argv[2]>
	// commnads : add, update, delete, mark, list....
	
	if(argc < 2){ // Require min. one commnand + "task-cli"
		std::cout<<""<<std::endl;
		return 1;
	}
	
	Command cmd = getCommand(argv[1]);
	
	switch(cmd){
		case ADD: // add		
			std::cout<<"add";
			break;
		case UPDATE: //update
			std::cout <<"update";
			break;
		case DELETE: //delete
			std:: cout <<"delete";
			break;
	}
	return 0;
}