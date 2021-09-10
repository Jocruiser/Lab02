#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"
#include "pizza.h"

using graphics::Image;
using std::endl;



// Function prototypes
void AddCrust(graphics::Image& pizza);

void AddSauce(graphics::Image& pizza);

void AddCheese(graphics::Image& pizza);

void AddPepperoni(graphics::Image& pizza);

void AddOnion(graphics::Image& pizza);

void AddJalapeno(graphics::Image& pizza);




int main() {

  char answer = ' '; 

// image file name 
  Image my_image(500, 500);

  std::cout << "Welcome to PizzaMaker 2.0!" << std::endl;
  std::cout << "\nWould you like a pizza?"
            << "\n(y/n): "; 
  std::cin >> answer;
  if ((answer=='Y') || (answer=='y')) {
    AddCrust(my_image);
  } else {
    return 0;
  }
  
  std::cout << "\nWould you like tomato sauce?" << "\n(y/n): ";
  std::cin >> answer;
  if ((answer=='Y') || (answer=='y')) {
    AddSauce(my_image);
  } else {
    
  }
  
  std::cout << "\nWould you like cheese with that?" << "\n(y/n): ";
  std::cin >> answer;
  if ((answer=='Y') || (answer=='y')) {
    AddCheese(my_image);
  } else {
    
  }
  
  std::cout << "\nWould you like pepperoni?" << "\n(y/n): ";
  std::cin >> answer;
  if ((answer=='Y') || (answer=='y')) {
    AddPepperoni(my_image);
  } else {
    
  }
  
  std::cout << "\nWould you like jalapeno with that?" << "\n(y/n): ";
  std::cin >> answer;
  if ((answer=='Y') || (answer=='y')) {
    AddJalapeno(my_image);
  } else {
    return 0;
  }
  

  std::cout << "\nWould you like onion?" << "\n(y/n): "; 
  std::cin >> answer;
  if ((answer=='Y') || (answer=='y')) {
    AddOnion(my_image);
  } else {
    
  }
  
  std::cout << "\nGreat! Your pizza is at pizza.bmp. Enjoy!" << std::endl; 
  
  my_image.SaveImageBmp("pizza.bmp");
  
  return 0;
}
