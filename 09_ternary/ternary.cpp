#include <iostream>

using namespace std;

int main()
{
  int hostUserNum, gestUserNum;

  system("clear");

  cout << "Host: ";
  cin >> hostUserNum;

  system("clear");

  cout << "Gest: ";
  cin >> gestUserNum;

  system("clear");

  // Ternary Conditional
  (hostUserNum == gestUserNum) ? cout << "Correct!" << endl : cout << "Failed!" << endl;
}