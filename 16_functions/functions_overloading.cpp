#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
  system("clear");

  cout << sum(5, 10) << endl;
  cout << sum(3.2, 2.3) << endl;
  cout << sum(3.2, 32.2, 2.3) << endl;

  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

double sum(double a, double b)
{
  return a + b;
}

float sum(float a, float b, float c)
{
  return a + b + c;
}