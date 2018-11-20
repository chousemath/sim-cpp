#include <iostream>
#include <string>

int main() {
  char grade = 'A';
  std::string phrase = "Joseph is a person";
  std::string phrase2 = "This is another phrase";
  if (phrase2.length() > 10) {
    std::cout << "Man...phrase 2 is real long..." << std::endl;
    std::cout << "And the first character of phrase2 is " << phrase2[0]
              << std::endl;
  }
  int age = 120;
  float temperature = 123.321;
  double preciseTemperature = 4.12341234;
  bool isMale = true;

  if (isMale) {
    std::cout << "It is " << preciseTemperature
              << " degrees outside...and I am male" << std::endl;
  }

  std::cout << phrase << " and he has the grade " << grade << " in class..."
            << std::endl;
  std::cout << "I am great and..." << phrase2 << std::endl;
  return 0;
}