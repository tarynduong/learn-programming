/* 
  Before excuting code, we need to compile the file by typing in terminal: g++ <file_name>.cpp -o <excuted_file_name>, then ./<excuted_file_name>
  E.g. g++ basic.cpp -o basic, then ./basic
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
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
}
