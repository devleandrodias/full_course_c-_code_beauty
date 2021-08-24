#include <iostream>

using namespace std;

void introduceMe(string name, string city, int age = 0)
{
  cout << "My name is " << name << "!" << endl;

  cout << "I'm from " << city << endl;

  if (age != 0)
    cout << "I'm " << age << " years old" << endl;

  cout << endl;
}

int main()
{
  system("clear");

  string name, city;
  int age;

  cout << "Name: ";
  cin >> name;

  cout << "City: ";
  cin >> city;

  cout << "Age: ";
  cin >> age;

  system("clear");

  introduceMe(name, city, age);

  return 0;
}