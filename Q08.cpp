#include <iostream>
using namespace std;

void add_matrices(int mat1[][10], int mat2[][10], int mat3[][10], int r, int c) {
  // add the two matrices
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

int main() {
  // declare two matrices
  int mat1[10][10], mat2[10][10], mat3[10][10];

  // get the dimensions of the matrices
  int r, c;
  cout << "Enter the number of rows in the first matrix: ";
  cin >> r;
  cout << "Enter the number of columns in the first matrix: ";
  cin >> c;

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
    for (int j = 0; j < c; j++) {
      cin >> mat2[i][j];
    }
  }

  // add the two matrices
  add_matrices(mat1, mat2, mat3, r, c);

  // print the sum matrix
  cout << "The sum of the two matrices is: " << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << mat3[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

