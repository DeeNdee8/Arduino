#include <iostream>
#include <string>

using namespace std;

string checkGrade(int grade) {
  if (grade >= 75) {
    return "Passed";
  } else {
    return "Failed";
  }
}

int main() {
  int grade = 77;
  string result = checkGrade(grade);
  cout << result << endl;
  return 0;
}