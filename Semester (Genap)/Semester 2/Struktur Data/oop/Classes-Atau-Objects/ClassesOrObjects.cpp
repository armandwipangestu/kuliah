#include <iostream>

using namespace std;

class MyClass {         // Nama Kelas
  public:               // Access Modifier atau Specifier (Pengubah Akses / Penentu Akses)
    int myNum;          // Attribute (Variable) dengan tipe data integer
    string myString;    // Attribute (Variable) dengan tipe data string
};

int main() {

  MyClass myObj;        // Membuat Objek dengan nama "myObj" dari Kelas "MyClass"

  // Mengakses Attribute (Variable) dan set value (menetapkan nilai)
  myObj.myNum = 19;
  myObj.myString = "Beberapa Teks";

  // Menampilkan atau mencetak Attribute Value (Isi Variable)
  cout << myObj.myNum << "\n";
  cout << myObj.myString;

  return 0;
}
