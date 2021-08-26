#include <iostream>

using namespace std;

void printHello();

int main()
{
  system("clear");

  cout << "Hello from main()" << endl;

  printHello();
  printHello();
  printHello();

  return 0;
}

void printHello()
{
  cout << "Hello from printHello()" << endl;
}