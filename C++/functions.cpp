#include <iostream>
#include <cmath>

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
