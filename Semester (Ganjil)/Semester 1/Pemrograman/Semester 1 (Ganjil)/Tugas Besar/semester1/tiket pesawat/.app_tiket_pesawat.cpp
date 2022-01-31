#include <iostream>

using namespace std;

struct Maskapais
{
  int id;
  string nama_maskapai;
  string tujuan_penerbangan;
  string jadwal_penerbangan;
  int harga;
  string kelas_kabin;
};

string nama_maskapai[] = {
  "Garuda Airlines", "Lion Air",
  "Batik Air", "Citilink",
  "Indonesia Airlines"
};

string tujuan_penerbangan[] = {
  "Bandung - Jakarta", "Jakarta - Bandung",
  "Bandung - Jakarta", "Jakarta - Bandung",
  "Bandung - Jakarta"
};

string jadwal_penerbangan[] = {
  "08:00 - 10:00", "09:00 - 13:00",
  "10:00 - 14:00", "18:00 - 22:00",
  "06:00 - 10:00"
};

int harga[] = {
  100000, 200000, 300000,
  400000, 500000
};

string kelas_kabin[] = {
  "Reguler", "Economy",
  "Premium Economy", "Business",
  "First Class"
};

void setMaskapai( Maskapais Maskapai[] ) {
  for ( int i = 0; i < 5; i++ ) {
    Maskapai[i].id = i+1;
    Maskapai[i].nama_maskapai = nama_maskapai[i];
    Maskapai[i].tujuan_penerbangan = tujuan_penerbangan[i];
    Maskapai[i].jadwal_penerbangan = jadwal_penerbangan[i];
    Maskapai[i].harga = harga[i];
    Maskapai[i].kelas_kabin = kelas_kabin[i];
  }
}

void getMaskapai( Maskapais Maskapai[] ) {
  for ( int i = 0; i < 5; i++ ) {
    cout << "id: " << Maskapai[i].id << endl;
    cout << "nama maskapai: " << Maskapai[i].nama_maskapai << endl;
    cout << "tujuan penerbangan: " << Maskapai[i].tujuan_penerbangan << endl;
    cout << "jadwal penerbangan: " << Maskapai[i].jadwal_penerbangan << endl;
    cout << "harga: " << Maskapai[i].harga << endl;
    cout << "kelas kabin: " << Maskapai[i].kelas_kabin << "\n" << endl;
  }
}

int main() {

  Maskapais Maskapai[5];
  
  setMaskapai(Maskapai);
  getMaskapai(Maskapai);

}
