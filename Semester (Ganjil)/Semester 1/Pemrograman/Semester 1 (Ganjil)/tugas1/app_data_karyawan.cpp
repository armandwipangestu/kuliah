#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

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

void bannerApp() {

  cout << "\n" << endl;
  cout << "┌────────────────────────────────────────────────┐" << endl;
  cout << "│     " << YELLOW << "App Manage Data Karyawan Perusahaan XYZ" << RESET << "    │" << endl;
  cout << "└────────────────────────────────────────────────┘" << endl;
  cout << "\n" << endl;

}

struct Employees {

  int ID;
  int NIP;
  string NAME;
  string ADDRESS;
  string DATE_OF_BIRTH;
  string PHONE_NUMBER;

};

void entryData() {

  int AMOUNT_OF_DATA;

  cout << "[ " << YELLOW << "PERTANYAAN" << RESET << " ] Berapa banyak data yang ingin anda masukan? ";
  cin >> AMOUNT_OF_DATA;

  Employees Employee[AMOUNT_OF_DATA];

  for ( int i = 0; i < AMOUNT_OF_DATA; i++ ) {

    cout << "\n" << endl;

    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│     " << YELLOW << "Input Data Karyawan Ke-" << i+1 << RESET << "    │" << endl;
    cout << "└─────────────────────────────────┘" << endl;

    Employee[i].ID = i+1;

    cout << " * [ " << YELLOW << "INPUT" << RESET << " ] Masukan NIP (Nomor Identitas Pegawai): ";
    cin >> Employee[i].NIP;

    cout << " * [ " << YELLOW << "INPUT" << RESET << " ] Masukan Nama Pegawai: ";
    cin.ignore();
    getline(cin, Employee[i].NAME);

    cout << " * [ " << YELLOW << "INPUT" << RESET << " ] Masukan Alamat Rumah: ";
    getline(cin, Employee[i].ADDRESS);

    cout << " * [ " << YELLOW << "INPUT" << RESET << " ] Masukan Tempat / Tanggal Lahir: ";
    getline(cin, Employee[i].DATE_OF_BIRTH);

    cout << " * [ " << YELLOW << "INPUT" << RESET << " ] Masukan No. Telepon: ";
    getline(cin, Employee[i].PHONE_NUMBER);

    // cout << "\n" << endl;

  }

  cout << "\n" << endl;
  cout << "┌────────────────────────────────────┐" << endl;
  cout << "│     " << YELLOW << "Data Karyawan Perusahaan XYZ   " << RESET << "│" << endl;
  cout << "└────────────────────────────────────┘" << endl;
  cout << "\n" << endl;

  cout << "┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
  cout << "│ " << YELLOW << " No." << RESET << " │" << RED << "    NIP   " << RESET << "│" << MAGENTA << "         Nama       " << RESET << "│" << CYAN << "         Alamat        " << RESET << "│" << GREEN << "      Tempat / Tanggal Lahir     " << RESET << "│" << YELLOW << "      No. Telepon     " << RESET << " │ " << endl;
  cout << "└────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

  for ( int i = 0; i < AMOUNT_OF_DATA; i++ ) {

    cout << "│   " << YELLOW << Employee[i].ID << RESET << "  │ " << RED << setw(8) << left << Employee[i].NIP << RESET << " │ " << MAGENTA << setw(18) << Employee[i].NAME << RESET << " │ " << CYAN << setw(21) << Employee[i].ADDRESS << RESET << " │ " << GREEN << setw(31) << Employee[i].DATE_OF_BIRTH << RESET << " │ " << YELLOW << setw(21) << Employee[i].PHONE_NUMBER << RESET << " │ " << endl;

  }

  cout << "└────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << RESET << endl;

}

int main() {

  colorName();
  bannerApp();
  entryData();

}