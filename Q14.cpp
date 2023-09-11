#include <iostream>
#include <string>
using namespace std;

int main() {
  // declare two strings
  string str1 = "Hello, ";
  string str2 = "world!";

  // append str2 to str1
  str1.append(str2);

  // print the appended string
  cout << str1 << endl;

  return 0;
}
