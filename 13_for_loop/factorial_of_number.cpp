#include <iostream>

using namespace std;

/**
 * The factorial of a number
*/

int main()
{
  system("clear");

  int number;
  cout << "Number: ";
  cin >> number;

  int factorial = 1;

  for (int i = 1; i <= number; i++)
  {
    factorial *= i;
  }

  cout << number << "! = " << factorial << endl;

  return 0;
}