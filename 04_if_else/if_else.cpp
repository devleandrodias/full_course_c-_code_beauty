#include <iostream>

using namespace std;

/**
 * User enters integer number
 * Program write out if that number is even or odd
 */

int main()
{
  int number;
  cout << "Please enter whole number: ";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << "You have entered even number" << endl;
  }

  else
  {
    cout << "You have entered odd number" << endl;
  }

  cout << "Thank you! Bye bye!" << endl;
}