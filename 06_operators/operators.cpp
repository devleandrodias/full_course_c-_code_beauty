#include <iostream>

using namespace std;

int main()
{
  // +, -, *, /, % (Arithmetic)

  cout << 5 + 2 << endl;
  cout << 5 - 2 << endl;
  cout << 5 * 2 << endl;

  cout << 5 / 2 << endl;
  cout << 5 / 2.0 << endl;

  cout << 5 % 2 << endl;

  // ++, -- (Increment, Decrement)

  int counterPre = 7;
  int counterPos = 7;

  cout << ++counterPre << endl;
  cout << counterPos++ << endl;

  system("clear");

  // <, >, <=, >=, ==, != (Relational)

  int a = 5, b = 5;

  cout << (a > b) << endl;
  cout << (a < b) << endl;
  cout << (a <= b) << endl;
  cout << (a >= b) << endl;
  cout << (a == b) << endl;
  cout << (a != b) << endl;

  // &&, ||, ! (Logical)

  cout << (a == 5 && b == 5) << endl;
  cout << (a == 10 || b == 5) << endl;
  cout << !(a != 10 && b == 5) << endl;

  system("clear");

  // =, +=, -=, *=, /=, %= (Assignment Operators)

  int x = 5;

  x += 10; // x = x + 10
  x *= 2;  // x = x * 2
  x -= 3;  // x = x - 3

  cout << x << endl;
}