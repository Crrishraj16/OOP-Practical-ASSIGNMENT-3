#include <iostream>
using namespace std;

int main() {
  // declare an array of student codes
  string codes[5];

  // declare an array of marks
  int marks[5][5];

  // read the student codes and marks
  for (int i = 0; i < 5; i++) {
    cin >> codes[i];
    for (int j = 0; j < 5; j++) {
      cin >> marks[i][j];
    }
  }

  // find the top two students
  int top_student_1 = 0;
  int top_student_2 = 1;
  for (int i = 2; i < 5; i++) {
    if (marks[top_student_1][0] < marks[i][0]) {
      top_student_2 = top_student_1;
      top_student_1 = i;
    } else if (marks[top_student_2][0] < marks[i][0]) {
      top_student_2 = i;
    }
  }

  // print the top two students' codes and marks
  cout << "The top two students are: " << codes[top_student_1] << " and " << codes[top_student_2] << endl;
  cout << "Their marks are: " << marks[top_student_1][0] << " and " << marks[top_student_2][0] << endl;
}