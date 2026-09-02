#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int age;
  cout << "What is your name:\n"  ;
  getline(cin,name);
  cout << "What is your age:\n"  ;
  cin >> age;
  cout << "your name is " << name << " Age is "<<age<<" Years old";
  return 0;
}