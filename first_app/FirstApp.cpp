#include <iostream>

int main(){
  std::cout << "Enter a number: ";

  int num{ 0 };
  std::cin >> num;

  std::cout << "Your number doubled is: " << num * 2 <<'\n';

  return 0;
}
