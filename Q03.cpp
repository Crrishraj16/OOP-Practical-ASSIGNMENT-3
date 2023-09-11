#include <iostream>
using namespace std;

int main() {
  // declare an array of integers
  int arr[] = {12345};

  // get the size of the array
  int n = sizeof(arr) / sizeof(arr[0]);

  // initialize the sum variable
  int sum = 0;

  // iterate through the array and add the individual digits to the sum
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  // print the sum
  cout << "The sum of the individual digits of the array is: " << sum;
}