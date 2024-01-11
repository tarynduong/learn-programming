/* 
  Before excuting code, we need to compile the file by typing in terminal: g++ <file_name>.cpp -o <excuted_file_name>, then ./<excuted_file_name>
  E.g. g++ basic.cpp -o basic, then ./basic
  In case we have multiple cpp, we need to compile all at once to use them. E.g. g++ basic.cpp functions.cpp
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <cmath>
#include <chrono>
#include "functions.h"

int main() {
  // Test functions
  sayHello(); # auto to new line
  std::cout << feed_the_cat() << "\n";
  std::cout << tenth_power(2) << "\n";
  std::cout << is_palindrome("madam") << "\n";
  for (int element: first_three_multiples(8)) {
    std::cout << element << "\n";
  }

  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
  std::cout << goodnight1("tulip");
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
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
