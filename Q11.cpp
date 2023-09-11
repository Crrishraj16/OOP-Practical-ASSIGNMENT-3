#include <iostream>
using namespace std;

int main() {
  // declare a string
  string str;

  // read the string
  cout << "Enter a string: ";
  getline(cin, str);

  // find the length of the string
  int length = str.length();

  // print the length of the string
  cout << "The length of the string is: " << length << endl;

  return 0;
}
