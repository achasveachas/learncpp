# include <iostream>

void doNothing(const int &x){}

int main()
{
  int x;

  doNothing(x);

  std::cout << x;

  return 0;
}
