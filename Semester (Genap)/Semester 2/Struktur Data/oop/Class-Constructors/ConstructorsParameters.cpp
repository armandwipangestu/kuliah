#include <iostream>

using namespace std;

class Car {
  public:
    string brand;       // Attribute
    string model;       // Attribute
    int year;           // Attribute
    Car(string x, string y, int z) { // Constructor dengan Parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Membuat objek dari kelas "Car" dan memanggil Constructor Method
  // dengan different values (perbedaan argument ke Parameters).
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Menampilkan values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
