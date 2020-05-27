#include "Header.h"										// our header file 
#include <iostream>										// gives c++ features like cout
#include <string>										// allows us to have a variable could hold a string
#include <Windows.h>									// has the Sleep function

void message() {										// the message function
	std::string str = "We said Hello World first! \n";	// initialize str variable that holds a string
	
	for (int i = 0; i < str.length(); i++) {			// initialize the i and give it zero value  and compare it with str length if the tring was bigger i = i + 1
		std::cout << str.at(i);							// print the (i)th character in str string
		Sleep(150.0);									// wait for 30% of a second
	}													// End of the for loop
}														// end of the message function