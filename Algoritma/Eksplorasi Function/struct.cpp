#include <iostream>

using namespace std;

struct Maskapais
{
  int id;
  string nama_maskapai;
  string tujuan_penerbangan;
};

string nama_maskapai[] = {
  "Garuda Airlines", "Lion Air",
  "Citilink"
};

string tujuan_penerbangan[] = {
  "Bandung - Jakarta", "Bali - Bekasi",
  "Yogyakarta - Banten"
};

void setMaskapai( Maskapais Maskapai[] ) {
  for ( int i = 0; i < 3; i++ ) {
    Maskapai[i].id = i + 1;
    Maskapai[i].nama_maskapai = nama_maskapai[i];
    Maskapai[i].tujuan_penerbangan = tujuan_penerbangan[i];
  }
}

void getMaskapai( Maskapais Maskapai[] ) {
  for ( int i = 0; i < 3; i++ ) {
    cout << "id: " << Maskapai[i].id << endl;
    cout << "nama maskapai: " << Maskapai[i].nama_maskapai << endl;
    cout << "tujuan penerbangan: " << Maskapai[i].tujuan_penerbangan << "\n" << endl;
  }
}

int main() {

  Maskapais Maskapai[3];

  setMaskapai( Maskapai );
  getMaskapai( Maskapai );

  return 0;
}
