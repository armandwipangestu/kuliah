#include <iostream>
#include <iomanip>

using namespace std;

struct Maskapais {
  int id;
  string namaMaskapai;
  string tujuanPenerbangan;
  string jadwalPenerbangan;
  int harga;

};

string namaMaskapai[5] = {
  "Garuda", "Lion Air", "Indonesia Airlines",
  "Batik Air", "Citylink"
};

string tujuanPenerbangan[5] = {
  "Bandung - Bali", "Bandung - Jakarta",
  "Bandung - Yogyakarta", "Bali - Sumatera",
  "Yogyakarta - Aceh"
};

string jadwalPenerbangan[5] = {
  "06:00 - 10:00", "11:00 - 14:00",
  "15:00 - 18:00", "19:00 - 22:00",
  "03:00 - 09:00"
};

int harga[5] = {
  300000, 150000,
  250000, 500000,
  750000
};

Maskapais Maskapai[5];

int pilihan, jumlahTiket;

int totalHarga;

void mainMenu() {

  for ( int i = 0; i < 5; i++ ) {
    Maskapai[i].id = i+1;
    Maskapai[i].namaMaskapai = namaMaskapai[i];
    Maskapai[i].tujuanPenerbangan = tujuanPenerbangan[i];
    Maskapai[i].jadwalPenerbangan = jadwalPenerbangan[i];
    Maskapai[i].harga = harga[i];
  }

  cout << "┌───────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
  cout << "│  No. │         Maskapai      │           Tujuan         │   Jadwal Penerbangan   │      Harga     │" << endl;
  cout << "└───────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

  for ( int i = 0; i < 5; i++ ) {
    cout << "│   " << Maskapai[i].id << "  │ " << setw(18) << Maskapai[i].namaMaskapai << "    │ " << setw(20) << Maskapai[i].tujuanPenerbangan << "     │      " << setw(13) << Maskapai[i].jadwalPenerbangan << "     │   Rp. " << setw(7) << Maskapai[i].harga << "  │" << endl;
  }

cout << "└───────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

}

void selectMenu() {

  cout << "\n[ PERTANYAAN ]\nTiket pesawat mana yang ingin anda beli? ";
  cin >> pilihan;
  pilihan = pilihan - 1;
  cout << "\n[ PERTANYAAN ]\nJumlah tiket yang ingin anda beli? ";
  cin >> jumlahTiket;

}

void logicApp() {

  totalHarga = Maskapai[pilihan].harga * jumlahTiket;

}

void outputTiket() {

  cout << "\n";
  cout << "┌──────────────────────────┐" << endl;
  cout << "│    Informasi Pembelian   │" << endl;
  cout << "└──────────────────────────┘" << endl;

  cout << "┌─────────────────────────────────────────────────────┐" << endl;
  cout << "│      [ Nama Maskapai ] -> '" << setw(18) << Maskapai[pilihan].namaMaskapai << "'      │" << endl;
  cout << "│      [ Tujuan ] -> '" << setw(20) << Maskapai[pilihan].tujuanPenerbangan << "'           │" << endl;
  cout << "│      [ Jadwal Penerbangan ] -> '" << setw(13) << Maskapai[pilihan].jadwalPenerbangan << "'      │" << endl;
  cout << "│      [ Harga ] -> '" << setw(7) << Maskapai[pilihan].harga << "'                         │" << endl;
  cout << "│      [ Jumlah Tiket ] -> '" << setw(1) << jumlahTiket << "x'                       │" << endl;
  cout << "│                                                     │" << endl;
  cout << "│      [ Total Harga ] -> 'Rp. " << setw(7) << totalHarga << "'               │" << endl;
  cout << "└─────────────────────────────────────────────────────┘" << endl;

}

int main() {
  mainMenu();
  selectMenu();
  logicApp();
  outputTiket();

  return 0;
}