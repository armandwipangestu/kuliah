#include <iostream>

using namespace std;

// Function dengan argument atau parameter dan
// mengembalikan nilai atau return value

float luasLingkaran( float phi, float r ) {
  float rumus = phi * r * r;
  return rumus;
}

int main() {

  cout << luasLingkaran( 3.14, 20 );

  return 0;
}
