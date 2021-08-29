#include <iostream>

using namespace std;

/**
 * Sum numbers between m-n
*/

int recursive_sum(int m, int n)
{
  if (m == n)
    return m;

  return m + recursive_sum(m + 1, n);
}

int main()
{
  system("clear");

  int m = 2, n = 4;

  cout << "SUM = " << recursive_sum(m, n) << endl;

  return 0;
}