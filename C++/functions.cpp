#include <iostream>
#include <cmath>

// We can create many functions with the same name for different operations - function overloading
int fancy_number(int num1, int num2) {
  return num1 - num2 + (num1 * num2);
}

int fancy_number(int num1, int num2, int num3) {
  return num1 - num2 - num3 + (num1 * num2 * num3);
}

int fancy_number(double num1, double num2) {
  return num1 - num2 + (num1 * num2);
}

void sayHello() {
  std::cout << "Hi there!\n";
}

std::string feed_the_cat() {
  return "Cat is fed!";
}

int tenth_power(int num) {
  return pow(num, 10);
}

std::vector<int> first_three_multiples(int num) {
  return {num, num * 2, num * 3};
}

std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}

bool is_palindrome(std::string text) {
  for (int i = 0; i < text.size(); i++) {
    if (text[i] == text[text.size() - 1]) {
      return true;
    }
    else {
      return false;
    }
  }
}
