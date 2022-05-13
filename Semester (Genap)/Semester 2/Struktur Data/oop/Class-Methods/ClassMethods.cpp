// Methods adalah function yang berada atau dimiliki class.
// Terdapat 2 cara untuk mendefinisikan function yang termasuk dalam kelas:
// - Mendefinisikannya di dalam kelas
// - Mendefinisikannya di luar kelas

#include <iostream>

using namespace std;

// Contoh di dalam kelas
class MyClass {
  public:
    void myMethod() {           // Method/Function yang di definisikan di dalam kelas
      cout << "Didalam Kelas : Hello World!";
    }
};

// Contoh di luar kelas
class MyCless {
  public:
    void myMethod();            // Method/Function deklarasi
};

// Mendefinisikan method/function diluar kelas
void MyCless::myMethod() {
  cout << "Diluar kelas : Hello World!";
}

int main() {

  // Contoh di dalam kelas
  MyClass myObj;     // Membuat objek dari kelas "MyClass"
  myObj.myMethod();  // Memanggil method
 
  cout << endl;

  // Contoh di luar kelas
  MyCless myObj2;    // Membuat objek dari kelas "MyCless"
  myObj2.myMethod(); // Memanggil method

  return 0;
}
