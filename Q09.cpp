#include <iostream>
using namespace std;

void multiply_matrices(int mat1[][10], int mat2[][10], int mat3[][10], int r, int c, int n) {
  // multiply the two matrices
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < n; j++) {
      mat3[i][j] = 0;
      for (int k = 0; k < c; k++) {
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
}

int main() {
  // declare two matrices
  int mat1[10][10], mat2[10][10], mat3[10][10];

  // get the dimensions of the matrices
  int r, c, n;
  cout << "Enter the number of rows in the first matrix: ";
  cin >> r;
  cout << "Enter the number of columns in the first matrix: ";
  cin >> c;
  cout << "Enter the number of columns in the second matrix: ";
  cin >> n;

  // get the elements of the first matrix
  cout << "Enter the elements of the first matrix: " << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> mat1[i][j];
    }
  }

  // get the elements of the second matrix
  cout << "Enter the elements of the second matrix: " << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mat2[i][j];
    }
  }

  // multiply the two matrices
  multiply_matrices(mat1, mat2, mat3, r, c, n);

  // print the product matrix
  cout << "The product of the two matrices is: " << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < n; j++) {
      cout << mat3[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
