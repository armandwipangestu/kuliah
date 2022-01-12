#include <iostream>

using namespace std;

string bahasa_pemrograman[] = {
  "C Sharp", "C Plus Plus",
  "Python", "PHP", "Rust",
  "Golang", "Ruby", "TypeScript"
};

int bahasa_pemrograman_length = sizeof(bahasa_pemrograman)/sizeof(bahasa_pemrograman[0]);

void getBahasa( string array[], int array_length ) {
  for ( int i = 0; i < array_length; i++ ) {
    cout << i + 1 << ". " << bahasa_pemrograman[i] << endl;
  }
}

int main() {

  getBahasa( bahasa_pemrograman, bahasa_pemrograman_length );

  return 0;
}
