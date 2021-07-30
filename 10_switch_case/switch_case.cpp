#include <iostream>

using namespace std;

int main()
{
  float num1, num2;
  char operation;

  system("clear");
  cout << "**CodeBeauty calculator**" << endl;
  cout << "Enter your operation: ";
  cin >> num1 >> operation >> num2;

  switch (operation)
  {
  case '-':
    cout << num1 << operation << num2 << "=" << (num1 - num2) << endl;
    break;
  case '+':
    cout << num1 << operation << num2 << "=" << (num1 + num2) << endl;
    break;
  case '*':
    cout << num1 << operation << num2 << "=" << (num1 * num2) << endl;
    break;
  case '/':
    cout << num1 << operation << num2 << "=" << (num1 / num2) << endl;
    break;
  case '%':
    bool isNum1Int, isNum2Int;

    //                   5 == 5.0
    isNum1Int = ((int)num1 == num1);
    isNum2Int = ((int)num2 == num2);

    if (isNum1Int && isNum2Int)
      cout << num1 << operation << num2 << "=" << ((int)num1 % (int)num2) << endl;

    else
      cout << "Not valid!" << endl;

    break;
  default:
    cout << "Invalid operation!" << endl;
    break;
  }
}