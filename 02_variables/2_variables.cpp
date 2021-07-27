#include <iostream>

using namespace std;

int main() {
  int yearOfBirth = 2000;
  char gender = 'M';
  bool isOlderThen18 = true;
  float avarageGrade = 4.5;
  double balance = 34859738094;

  cout << "Size of int is " << sizeof(int) << " bytes\n";
  cout << "Int min value is " << INT_MIN << endl;
  cout << "Int max value is " << INT_MAX << endl;

  cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";

  cout << "UInt max value is " << UINT_MAX << endl;

  cout << "Size of bool is " << sizeof(bool) << " bytes\n";
  cout << "Size of char is " << sizeof(char) << " bytes\n";
  cout << "Size of float is " << sizeof(float) << " bytes\n";
  cout << "Size of double is " << sizeof(double) << " bytes\n";
}