#include <iostream>
#include <iomanip>

using namespace std;

struct Maskapais {
  int id;
  string namaMaskapai;
  string tujuanPenerbangan;
  string jadwalPenerbangan;
  int harga;
  string cabinClass;
};

string namaMaskapai[5] = {
  "Garuda", "Lion Air", "Indonesia Airlines",
  "Batik Air", "Citilink"
},

tujuanPenerbangan[5] = {
  "Bandung - Bali", "Bandung - Jakarta",
  "Bandung - Yogyakarta", "Bali - Sumatera",
  "Yogyakarta - Aceh"
},

jadwalPenerbangan[5] = {
  "09:10 - 10:50", "12:30 - 13:00",
  "15:15 - 16:30", "17:00 - 20:55",
  "06:00 - 11:30"
},

cabinClass[5] = {
  "Economy", "Premium Economy", 
  "Business", "First Class",
  "Business"
};

int harga[5] = {
  1609000, 1483000,
  1700000, 2050000,
  3905000
},

pilihan, jumlahTiket, totalHarga;

Maskapais Maskapai[5];

void colorName() {

  #define RESET   "\033[0m"
  #define BLACK   "\033[30m"      /* Black */
  #define RED     "\033[31m"      /* Red */
  #define GREEN   "\033[32m"      /* Green */
  #define YELLOW  "\033[33m"      /* Yellow */
  #define BLUE    "\033[34m"      /* Blue */
  #define MAGENTA "\033[35m"      /* Magenta */
  #define CYAN    "\033[36m"      /* Cyan */
  #define WHITE   "\033[37m"      /* White */
  #define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
  #define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
  #define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
  #define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
  #define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
  #define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
  #define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
  #define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

}

void mainMenu() {

  for ( int i = 0; i < 5; i++ ) {

    Maskapai[i].id = i+1;
    Maskapai[i].namaMaskapai = namaMaskapai[i];
    Maskapai[i].tujuanPenerbangan = tujuanPenerbangan[i];
    Maskapai[i].jadwalPenerbangan = jadwalPenerbangan[i];
    Maskapai[i].harga = harga[i];
    Maskapai[i].cabinClass = cabinClass[i];

  }

  cout << "\n" << endl;
  cout << "                 ┌───────────────────────────┐" << endl;
  cout << "                 │     List Tiket Pesawat    │" << endl;
  cout << "                 └───────────────────────────┘" << endl;
  cout << "\n" << endl;

  cout << "┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
  cout << "│ " << YELLOW << " No." << RESET << " │" << RED << "         Maskapai      " << RESET << "│" << MAGENTA << "           Tujuan         " << RESET << "│" << CYAN << "   Jadwal Penerbangan   " << RESET << "│" << GREEN << "      Harga     " << RESET << "│" << YELLOW << "    Cabin Class    " << RESET << "│" << endl;
  cout << "└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

  for ( int i = 0; i < 5; i++ ) {

    cout << "│   " << YELLOW << Maskapai[i].id << RESET << "  │ " << RED << setw(18) << left << Maskapai[i].namaMaskapai << RESET << "    │ " << MAGENTA << setw(20) << Maskapai[i].tujuanPenerbangan << RESET << "     │      " << CYAN << setw(13) << Maskapai[i].jadwalPenerbangan << RESET << "     │   " << GREEN << "Rp. " << setw(7) << Maskapai[i].harga << RESET << "  │  " << YELLOW << setw(15) << Maskapai[i].cabinClass << RESET << "  │" << RESET << endl;

  }

  cout << "└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << RESET << endl;

}

void selectMenu() {

  cout << "\n[ " << YELLOW << "PERTANYAAN" << RESET << " ] -> Tiket pesawat mana yang ingin anda beli? ";
  cin >> pilihan;
  pilihan = pilihan - 1;

  cout << "\n[ " << YELLOW << "PERTANYAAN" << RESET << " ] -> Jumlah tiket yang ingin anda beli? ";
  cin >> jumlahTiket;

}

void logicApp() {

  totalHarga = Maskapai[pilihan].harga * jumlahTiket;

}

void outputTiket() {

  cout << "\n" << endl;
  cout << "                 ┌──────────────────────────┐" << endl;
  cout << "                 │    Informasi Pembelian   │" << endl;
  cout << "                 └──────────────────────────┘" << endl;
  cout << "\n" << endl;

  cout << "     ┌─────────────────────────────────────────────────────┐" << endl;
  cout << "     │                                                     │" << endl;
  cout << "     │        * Nama Maskapai : " << RED << setw(18) << left << Maskapai[pilihan].namaMaskapai << RESET << "         │" << endl;
  cout << "     │        * Tujuan : " << MAGENTA << setw(20) << Maskapai[pilihan].tujuanPenerbangan << RESET << "              │" << endl;
  cout << "     │        * Jadwal Penerbangan : " << CYAN << setw(13) << Maskapai[pilihan].jadwalPenerbangan << RESET << "         │" << endl;
  cout << "     │        * Harga Tiket : Rp. " << GREEN << setw(7) << Maskapai[pilihan].harga << RESET << "                  │" << endl;
  cout << "     │        * Cabin Class : " << YELLOW << setw(15) << Maskapai[pilihan].cabinClass << RESET << "              │" << endl;
  cout << "     │        * Jumlah Tiket : " << YELLOW << setw(1) << jumlahTiket << RESET << "x                          │" << endl;
  cout << "     │                                                     │" << endl;
  cout << "     │        * Total Harga : Rp. " << GREEN << setw(7) << totalHarga << RESET << "                  │" << endl;
  cout << "     │                                                     │" << endl;
  cout << "     └─────────────────────────────────────────────────────┘" << endl;
  cout << "\n" << endl;

}

int main() {

  colorName();
  mainMenu();
  selectMenu();
  logicApp();
  outputTiket();

  return 0;

}
