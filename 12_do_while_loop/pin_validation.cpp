#include <iostream>

using namespace std;

/**
 * Program for PIN validation
*/

int main()
{
  system("clear");

  int userPin = 1234, pin, errorCounter = 0;

  do
  {
    cout << "PIN: ";
    cin >> pin;

    if (pin != userPin)
      errorCounter++;

  } while (userPin != pin && errorCounter < 3);

  if (errorCounter < 3)
    cout << "\nLOADING..." << endl;

  else
    cout << "\nBLOCKED..." << endl;

  return 0;
}