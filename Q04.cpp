#include <iostream>
#include <string>
using namespace std;

void sort_names(string names[], int n) {
  // Bubble sort algorithm
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (names[j] > names[j + 1]) {
        string temp = names[j];
        names[j] = names[j + 1];
        names[j + 1] = temp;
      }
    }
  }
}

int main() {
  // declare an array of names
  string names[] = {"John", "David", "Peter", "Michael", "Mark"};

  // get the size of the array
  int n = sizeof(names) / sizeof(names[0]);

  // sort the array in ascending order
  sort_names(names, n);

  // print the sorted array
  cout << "The sorted array in ascending order is: ";
  for (int i = 0; i < n; i++) {
    cout << names[i] << " ";
  }

  return 0;
}
