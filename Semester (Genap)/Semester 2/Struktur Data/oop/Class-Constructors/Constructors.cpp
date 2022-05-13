// Constructor di bahasa C++ adalah sebuah method spesial
// yang dimana otomatis di panggil ketika sebuah objek dari kelas
// tersebut di buat.
// Untuk membuat sebuah Constructor, gunakan nama yang sama
// dengan nama class nya dan di-ikuti dengan tanda kurung buka dan tutup
// ()
//
// Catatan:
// Constructor dengan nama yang sama dengan nama class nya, visibility
// atau access modifier / specifier nya selalu "public" dan tidak bisa
// menggembalikan nilai apapun (doesn't have any return value).

#include <iostream>

using namespace std;

class MyClass {
  public:
    MyClass() {                 // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj; // Membuat objek dari kelas "MyClass" (ini akan memanggil Constructor nya)
  return 0;
}
