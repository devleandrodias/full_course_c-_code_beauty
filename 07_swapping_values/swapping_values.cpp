#include <iostream>

using namespace std;

/**
 * Program for swapping values of two variables
*/
int main()
{
  int a = 20, b = 10;

  a = a + b; // 20 + 10 = 30
  b = a - b; // 30 - 20 = 10;
  a = a - b; // 30 - 10 = 20;

  cout << "a = " << a << " b == " << b << endl;
}