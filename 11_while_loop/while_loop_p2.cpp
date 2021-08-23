#include <iostream>

using namespace std;

/**
 * Count digits of a number
*/

int main()
{
  int number;

  system("clear");

  cout << "Number: ";
  cin >> number;

  if (number == 0)
    cout << "You have entered 0" << endl;

  else
  {
    int counter = 0;

    while (number > 0)
    {
      number /= 10;
      counter++;
    }

    cout << "Number contains " << counter << " digits" << endl;
  }
}