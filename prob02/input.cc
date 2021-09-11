// Your code here to implement the function.
#include <iostream>
#include <string>
#include "input.h"

using std::cout;
using std::cin;
using std::string;

bool GetYesOrNoInput() {
  std::string answer;

	while(true)
 	{

 	if (answer == "yes") {
 	return true;
 	}
 	if (answer == "no") {
 	return false;
 	} 
 	else {
 	std::cout << "Sorry, I didn't understand. Try again: ";
 	std::getline (std::cin,answer);
 	}
 	}
 	
 	
 	
 
}






