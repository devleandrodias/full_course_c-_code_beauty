#include <iostream>

using namespace std;

/**
 * Multiplication Table
*/

int main()
{
  system("clear");

  for (int x = 1; x <= 10; x++)
  {

    for (int y = 1; y <= 10; y++)
    {
      cout << x << " * " << y << " = " << x * y << endl;
    }

    cout << endl;
  }

  return 0;
}