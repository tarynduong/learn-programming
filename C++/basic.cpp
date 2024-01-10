/* 
  Before excuting code, we need to compile the file by typing in terminal: g++ <file_name>.cpp -o <excuted_file_name>, then ./<excuted_file_name>
  E.g. g++ basic.cpp -o basic, then ./basic
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  // First example
  double tempf;
  double tempc;
  
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  tempc = (tempf - 32) / 1.8;
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";

  // Second example
  srand(time(NULL)); // srand is to seed the random number generator, time(NULL) returns the current time in seconds since the epoch (January 1, 1970, 00:00:00 UTC).
  int coin = rand() % 2; // rand() returns a random number in the range 0 to 32767
  if (coin == 0) {
    std::cout << "Heads\n";
  }
  else {
    std::cout << "Tails\n";
  }

  // Third example
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
}
