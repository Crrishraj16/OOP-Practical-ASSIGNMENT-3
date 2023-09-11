#include <iostream>
using namespace std;

int main() {
  // declare two matrices
  int a[10][10], b[10][10], mul[10][10];

  // get the dimensions of the matrices
  int r, c, i, j, k;
  cout << "Enter the number of rows in the first matrix: ";
  cin >> r;
  cout << "Enter the number of columns in the first matrix: ";
  cin >> c;
  cout << "Enter the number of rows in the second matrix: ";
  cin >> r;
  cout << "Enter the number of columns in the second matrix: ";
  cin >> c;

  // get the elements of the first matrix
  cout << "Enter the elements of the first matrix: " << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }

  // get the elements of the second matrix
  cout << "Enter the elements of the second matrix: " << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cin >> b[i][j];
    }
  }

  // multiply the matrices
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      mul[i][j] = 0;
      for (k = 0; k < c; k++) {
        mul[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // print the product matrix
  cout << "The product of the two matrices is: " << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << mul[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
