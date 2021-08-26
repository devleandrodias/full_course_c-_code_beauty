#include <iostream>

using namespace std;

bool isPrimeNumber(int number)
{
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
      return false;
  }

  return true;
}

int main()
{
  system("clear");

  for (int i = 1; i <= 100; i++)
  {
    bool isPrime = isPrimeNumber(i);

    if (isPrime)
      cout << i << " is prime number" << endl;
  }

  return 0;
}