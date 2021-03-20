// Lab1.cpp : Defines the entry point for the application.
//


#include "Lab1.h"
#define usingnamespace 0 

// If the program use namespace excucte this block
#if usingnamespace == 0

#pragma message("using namespaces");// Pragma message that diaplay at the coompile time(When build the solution)
using namespace std; 

//Main method
int main()
{
	cout << "Hello CMake." << endl;// pints the message into the terminal
	return 0;
}

//elseif the program does not use namespace excute this block
#elif usingamespace == 1

#pragma message("Not using namespaces");// pragma message tha dispaly at the compile time

int main()
{
	std::cout << "Hello World!" << std::endl;// prints the message to the terminal
	return 0;
}

#endif// end of the if statment