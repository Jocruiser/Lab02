#include <iostream>
#include <string>


int main() {
std::string toppings; 
std::int pepperoni;
std::int onion;
std::int jalapeno;

std::cout << "How many pepperoni do you want? " << std::endl;
std::cin >> pepperoni; 

std::cout << "\nHow many onions do you want? ";
std::cin >> onion; 

std::cout << "\nHow many jalapenos do you want? ";
std::cin >> jalapeno;

std::cout << "Here's your pizza!\n";


for (int i = 0; i<pepperoni; i++) {
  toppings = toppings + "pepperoni";
  }
  
 
for (int i = 0; i<onion; i++) {
  toppings = toppings + "onion";
  } 
  
  
for (int i = 0; i<jalapeno; i++) {
  toppings = toppings + "jalapeno";
  }
std::cout << "Pizza with: " +toppings;
 else {
 std::cout << "Looks like you weren't hungry. Maybe next time?";
 }
 
 } 
