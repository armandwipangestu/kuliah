#include <iostream>

using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {

  Car myObj;                    // Membuat objek dari kelas Car
  cout << myObj.speed(200);     // Memanggil method dengan memasukan argument

  return 0;
}
