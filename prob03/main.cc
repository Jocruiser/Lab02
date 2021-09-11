#include <iostream>
#include <string>


int main() {
std::string toppings; 
int pepperoni;
int onion;
int jalapeno;

std::cout << "How many pepperoni do you want? ";
std::cin >> pepperoni; 

std::cout << "\nHow many onions do you want? ";
std::cin >> onion; 

std::cout << "\nHow many jalapenos do you want? ";
std::cin >> jalapeno;

std::cout << "Here's your pizza!\n";


for (int i = 0; i< pepperoni; i++) {
  toppings = toppings + " pepperoni ";
  }
  
 
for (int i = 0; i< onion; i++) {
  toppings = toppings + " onion ";
  } 
  
  
for (int i = 0; i< jalapeno; i++) {
  toppings = toppings + " jalapeno ";
  }
std::cout << "Pizza with: " +toppings;

 
 } 
