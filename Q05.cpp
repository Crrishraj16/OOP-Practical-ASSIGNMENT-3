#include <iostream>
using namespace std;

int main() {
  // declare an array of integers
  int arr[10];

  // read the 10 integers into the array
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  // find the largest and smallest numbers
  int largest = arr[0];
  int smallest = arr[0];
  for (int i = 1; i < 10; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    } else if (arr[i] < smallest) {
      smallest = arr[i];
    }
  }

  // print the largest and smallest numbers
  cout << "The largest number is: " << largest << endl;
  cout << "The smallest number is: " << smallest << endl;

  return 0;
}
