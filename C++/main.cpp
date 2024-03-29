/* 
  - Before excuting code, we need to compile the file by typing in terminal: g++ <file_name>.cpp -o <excuted_file_name>, then ./<excuted_file_name>
  E.g. g++ main.cpp -o main, then ./main
  - In case we have multiple cpp, we need to compile all at once to use them. E.g. g++ main.cpp functions.cpp
  - In the standard library, we have the following:
  >> unique_ptr: a smart pointer that owns and manages another object through and disposes of that object when the unique_ptr goes out of scope.
  >> shared_ptr: a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object.
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <cmath>
#include <chrono>
#include "functions.h"

int main() {
  // OOP
  Song back_to_black("Back to Black", "Amy Winehouse");
  std::cout << back_to_black.get_title() << "\n";
  std::cout << back_to_black.get_artist() << "\n";
  
  // Create normal functions
  sayHello(); # auto to new line
  std::cout << feed_the_cat() << "\n";
  std::cout << tenth_power(2) << "\n";
  std::cout << is_palindrome("madam") << "\n";
  for (int element: first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
  // Create function overloading
  std::cout << fancy_number(12, 3) << "\n";
  std::cout << fancy_number(12, 3, 19) << "\n";
  std::cout << fancy_number(13.5, 3.8) << "\n";

  // Create template in only functions.h in case of using the same function with the same operation for different data types.
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
  
  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
  std::cout << goodnight1("tulip");
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";

  // Reference variable, any changes to reference also happen with original variable
  int soda = 99;
  int &pop = soda;
  pop++;
  std::cout << "Pop: " << pop << ", Soda: " << soda << "\n";
  
  // const reference
  int side = 5;
  std::cout << square(side) << "\n";
  
  // Print memory address of a variable, which is stored by a pointer
  std::cout << &side << "\n";
  int* ptr = &side;
  std::cout << ptr << "\n";
  std::cout << *ptr << "\n"; // to print back the value of 5
  int* ptr = nullptr; // provide a typesafe pointer value representing an empty pointer
  
  // Get user inputs
  double tempf;
  double tempc;
  
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  tempc = (tempf - 32) / 1.8;
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";

  // Condition: if - else if - else
  srand(time(NULL)); // srand is to seed the random number generator, time(NULL) returns the current time in seconds since the epoch (January 1, 1970, 00:00:00 UTC).
  int coin = rand() % 2; // rand() returns a random number in the range 0 to 32767
  if (coin == 0) {
    std::cout << "Heads\n";
  }
  else {
    std::cout << "Tails\n";
  }

  // Condition: switch
  int number;
  std::cout << "Enter a number to search for Pokemon: ";
  std::cin >> number;

  switch(number) {
    case 1:
      std::cout << "You have Bulbusaur.\n";
      break;
    case 2:
      std::cout << "You have Pikachu.\n";
      break;
    case 3:
      std::cout << "You have jigglypuff.\n";
      break;
    default:
      std::cout << "Unknown.\n";
      break;
  }

  // Loop: while
  int pin = 0;
  int tries = 0;
  
  std::cout << "BANK OF CPP\n";

  while (pin != 1234 && tries < 3) {
    std::cout << "Enter your PIN: ";
    std:cin >> pin;
    tries++;
  }
  if (pin == 1234) {
    std::cout << "PIN accepted!\nYou now have access.\n";
  }

  /* Vector # Array
  Vectors don’t require a static size. It’s possible to add and remove elements from them, as well as access their current size at any time.
  E.g. std::vector<int> favoriteNums[] = {7, 9, 15, 16};
  With arrays, you can’t add or remove elements; you can only modify existing elements.
  E.g. int favoriteNums[] = {7, 9, 15, 16};
  */
  std::vector<double> delivery_order;
  std::vector<std:string> jedi;
  double total = 0.0;
  
  jedi.push_back("finn");
  std::cout << jedi.size(); 
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  delivery_order.pop_back(5.99);
  std::cout << delivery_order[2];
  
  for (int i = 0; i < delivery_order.size(); i++) {
    total += delivery_order[i];
  }
  std::cout << total;
}
