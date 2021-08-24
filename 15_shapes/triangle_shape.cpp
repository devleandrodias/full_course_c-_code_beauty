#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
  system("clear");

  int base;
  cout << "Base triangle: ";
  cin >> base;

  char symbol;
  cout << "Symbol: ";
  cin >> symbol;

  system("clear");

  for (int x = 0; x <= base; x++)
  {
    for (int y = 0; y < x; y++)
    {
      cout << setw(3) << symbol;
    }

    cout << endl;
  }

  return 0;
}