#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
  system("clear");

  int height, width;
  char symbol;

  cout << "Height, Width: ";
  cin >> height >> width;

  cout << "Symbol: ";
  cin >> symbol;

  system("clear");

  for (int x = 1; x <= height; x++)
  {
    for (int y = 1; y <= width; y++)
    {
      cout << setw(3) << symbol;
    }

    cout << endl;
  }

  return 0;
}