#include <iostream>
#include <cmath>
#include "functions.h" // just for OOP case

// OOP
// constructor
Song::Song(std::string new_title, std::string new_artist) {
  title = new_title;
  artist = new_artist;
}
// Deconstructor
Song::~Song() {
  return "Goodbye " + title + "!\n";
}
std::string Song::get_title() {
  return title;
}
std::string Song::get_artist() {
  return artist;
}

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
