#include <iostream>
#include <string>
#include "input.h"

// Include your header file, input.h

int main() {

  std::string answer;
  
  std::cout << "Do you like chocolate chip cookies? Enter \"yes\" or \"no\": ";
  std::getline (std::cin,answer);
  bool likes_cookies = false;
  
    likes_cookies = GetYesOrNoInput(); 

  // Call the GetYesOrNoInput function you defined in input.h, and store the
  // result in likes_cookies.

  if (likes_cookies) {
    std::cout << "Yummy yummy chocolate chip cookies!" << std::endl;
  } else {
    std::cout << "To each their own!" << std::endl;
  }
  
  return 0;
}



