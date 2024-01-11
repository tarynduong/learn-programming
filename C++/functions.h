// OOP
class Song {
  std::string title;
public:
  void add_title(std::string new_title);
  std::string get_title();
};

// Template
template <typename T>
T get_smallest_number(T num1, T num2) {
  return num2 < num1? num2 : num1;
}

// Functions declaration
void sayHello();

std::string feed_the_cat();

int tenth_power(int num);

std::vector<int> first_three_multiples(int num);

bool is_palindrome(std::string text);

int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);

std::string goodnight1(std::string thing1);
/*
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
*/
