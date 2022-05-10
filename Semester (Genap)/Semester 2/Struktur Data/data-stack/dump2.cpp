#include <iostream>

using namespace std;

bool compareToOperator(string x, string y) {
  return x <= y;
}

int main() {
  cout << compareToOperator("-", "+");
  return 0;
}
