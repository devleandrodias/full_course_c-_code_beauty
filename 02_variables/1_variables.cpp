#include <iostream>

using namespace std;

int main() {
  float annualSalary;
  cout << "Please enter your annual salary: US$";
  cin >> annualSalary;

  float monthlySalary = annualSalary / 12;
  cout << "Your monthly salary is US$" << monthlySalary << endl;
  cout << "In 10 years you will earn: US$" << annualSalary * 10 << endl;

  char character = 'a';
  cout << character << endl;
}