#include <iostream>

using namespace std;

/**
 * Check balance, depoist, withdraw, show menu
*/

void showMenu()
{
  cout << "\n***********MENU***********" << endl;
  cout << "1. Check balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "**************************" << endl;
};

int main()
{
  system("clear");

  int option;
  double balance = 500;

  do
  {
    showMenu();

    cout << "\nOption: ";
    cin >> option;

    system("clear");

    switch (option)
    {
    case 1:
      cout << "\nBalance is: USD" << balance << " $" << endl;
      break;
    case 2:
      double depositAmount;
      cout << "\nDeposit amount: ";
      cin >> depositAmount;
      balance += depositAmount;
      break;
    case 3:
      double withdrawAmount;
      cout << "\nWithdraw amount: ";
      cin >> withdrawAmount;

      if (withdrawAmount <= balance)
        balance -= withdrawAmount;
      else
        cout << "\nNot enough money" << endl;
      break;
    case 4:
      cout << "\nExit..." << endl;
      break;
    default:
      cout << "\nInvalid option!" << endl;
      break;
    }

  } while (option != 4);

  return 0;
}