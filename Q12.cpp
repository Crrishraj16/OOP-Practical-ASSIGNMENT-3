#include <iostream>
#include <string>
using namespace std;

// Function to compare two strings
int compare_strings(string str1, string str2) {
  // Compare the two strings lexicographically
  return str1.compare(str2);
}

// Function to concatenate two strings
string concatenate_strings(string str1, string str2) {
  // Concatenate the two strings
  return str1 + str2;
}

// Function to copy a string
string copy_string(string str) {
  // Create a new string to store the copy
  string new_str = str;

  // Return the copied string
  return new_str;
}

int main() {
  // declare two strings
  string str1, str2;

  // read the two strings
  cout << "Enter the first string: ";
  getline(cin, str1);

  cout << "Enter the second string: ";
  getline(cin, str2);

  // compare the two strings
  int result = compare_strings(str1, str2);

  // print the result of the comparison
  if (result == 0) {
    cout << "The two strings are equal." << endl;
  } else if (result < 0) {
    cout << "The first string is less than the second string." << endl;
  } else {
    cout << "The first string is greater than the second string." << endl;
  }

  // concatenate the two strings
  string new_str = concatenate_strings(str1, str2);

  // print the concatenated string
  cout << "The concatenated string is: " << new_str << endl;

  // copy the first string
  string copied_str = copy_string(str1);

  // print the copied string
  cout << "The copied string is: " << copied_str << endl;

  return 0;
}
