/* 
  Before excuting code, we need to compile the file by typing in terminal: g++ <file_name>.cpp -o <excuted_file_name>, then ./<excuted_file_name>
  E.g. g++ basic.cpp -o basic, then ./basic
*/
#include <iostream>

int main() {
  double tempf;
  double tempc;
  
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
