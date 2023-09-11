#include <iostream>
using namespace std;

int main() {
  // declare an array of integers
  int arr[5];

  // read the five integers into the array
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }

  // reverse the array
  for (int i = 0; i < 2; i++) {
    int temp = arr[i];
    arr[i] = arr[4 - i];
    arr[4 - i] = temp;
  }

  // print the reversed array
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
