#include <iostream>

using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {

  // Membuat objek pertama dari class Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Membuat objek kedua dari class Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Menampilkan Attribute values (isi variable)
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  return 0;
}