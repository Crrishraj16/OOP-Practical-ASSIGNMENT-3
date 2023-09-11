#include <iostream>
using namespace std;

void sort_array(int arr[], int n) {
  // Bubble sort algorithm
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  // declare an array of integers
  int arr[] = {10, 8, 6, 4, 2, 0};

  // get the size of the array
  int n = sizeof(arr) / sizeof(arr[0]);

  // sort the array in ascending order
  sort_array(arr, n);

  // print the sorted array
  cout << "The sorted array in ascending order is: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
