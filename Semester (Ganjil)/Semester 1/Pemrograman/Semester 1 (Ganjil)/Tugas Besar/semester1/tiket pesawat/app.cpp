#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Biodatas
{
  string nama_user;
  int umur_user;
  string kategori_umur;
};

struct Maskapais
{
  int id;
  string nama_maskapai;
  string kelas_kabin;
  string tujuan_penerbangan;
  string jadwal_penerbangan;
  int harga_dewasa;
  int harga_anak;
};

string nama_maskapai[] = {
  "Lion Air", "Citilink",
  "Garuda Airlines", "Batik Air",
  "Indonesia Airlines",
};

string kelas_kabin[] = {
  "Economy", "Reguler",
  "Bisnis", "First Class",
  "Reguler"
};

string tujuan_penerbangan[] = {
  "Bandung - Jakarta", "Jakarta - Tarakan",
  "Tarakan - Bandung", "Bandung - Jakarta",
  "Jakarta - Bandung",
};

string jadwal_penerbangan[] = {
  "06:00 - 10:00", "13:00 - 18:00",
  "11:00 - 15:00", "06:00 - 10:00",
  "06:00 - 10:00"
};

int harga[] = {
  952000, 1439871,
  1699000, 1394052,
  1000000,
};

int pilih_tiket, total_tiket, total_tiket_umur_anak_anak,
    total_tiket_umur_dewasa, total_harga_dewasa,
    total_harga_anak_anak, total_harga;

void colorName() {

  #define COLOR_RESET       "\033[0m"              /* Defaut */
  #define COLOR_BLACK       "\033[30m"             /* Black */
  #define COLOR_RED         "\033[31m"             /* Red */
  #define COLOR_GREEN       "\033[32m"             /* Green */
  #define COLOR_YELLOW      "\033[33m"             /* Yellow */
  #define COLOR_BLUE        "\033[34m"             /* Blue */
  #define COLOR_MAGENTA     "\033[35m"             /* Magenta */
  #define COLOR_CYAN        "\033[36m"             /* Cyan */
  #define COLOR_WHITE       "\033[37m"             /* White */
  #define COLOR_BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
  #define COLOR_BOLDRED     "\033[1m\033[31m"      /* Bold Red */
  #define COLOR_BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
  #define COLOR_BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
  #define COLOR_BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
  #define COLOR_BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
  #define COLOR_BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
  #define COLOR_BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

}

int setHargaAnak( int harga ) {
  return harga * 10 / 100;
}

void setMaskapai( Maskapais Maskapai[] ) {
  for ( int i = 0; i < 5; i++ ) {
    Maskapai[i].id = i + 1;
    Maskapai[i].nama_maskapai = nama_maskapai[i];
    Maskapai[i].kelas_kabin = kelas_kabin[i];
    Maskapai[i].tujuan_penerbangan = tujuan_penerbangan[i];
    Maskapai[i].jadwal_penerbangan = jadwal_penerbangan[i];
    Maskapai[i].harga_dewasa = harga[i];
    Maskapai[i].harga_anak = harga[i] - setHargaAnak( harga[i] );
  }
}

void getMaskapai( Maskapais Maskapai[] ) {

  cout << "\n" << endl;
  cout << "                                                       ┌───────────────────────────┐" << endl;
  cout << "                                                       │     " << COLOR_YELLOW << "List Tiket Pesawat" << COLOR_RESET << "    │" << endl;
  cout << "                                                       └───────────────────────────┘" << endl;
  cout << "\n" << endl;

  cout << "┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
  cout << "│  " << COLOR_YELLOW << "No." << COLOR_RESET << "  │      " << COLOR_RED << "Nama Maskapai" << COLOR_RESET << "    │    " << COLOR_MAGENTA << "Kelas Kabin" << COLOR_RESET << "    │   " << COLOR_CYAN << "Tujuan Penerbangan" << COLOR_RESET << "    │    " << COLOR_GREEN << "Jadwal Penerbangan" << COLOR_RESET << "    │     " << COLOR_BOLDYELLOW << "Harga Dewasa" << COLOR_RESET << "   │      " << COLOR_BOLDRED << "Harga Anak" << COLOR_RESET << "    │" << endl;
  cout << "└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

  for ( int i = 0; i < 5; i++ ) {
    cout << "│  " << COLOR_BOLDYELLOW << setw(2) << Maskapai[i].id << COLOR_RESET << "   │ " << setw(18) << Maskapai[i].nama_maskapai << "    │    " << setw(11) << Maskapai[i].kelas_kabin << "    │    " << setw(17) << Maskapai[i].tujuan_penerbangan << \
    "    │      " << setw(13) << Maskapai[i].jadwal_penerbangan << "       │     Rp. " << setw(7) << Maskapai[i].harga_dewasa << "    │     Rp. " << \
    setw(7) << Maskapai[i].harga_anak << "    │   " << endl;
  }

  cout << "└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;
  cout << "                                                                                                            Note:" << endl;
  cout << "                                                                                                            [" << COLOR_YELLOW << "*" << COLOR_RESET "] Harga Anak = " << COLOR_YELLOW << "10%" << COLOR_RESET << " dari Harga Dewasa \n" << endl;
}

void setBiodata( Biodatas Biodata[] ) {
  cout << endl;
  for ( int i = 0; i < total_tiket; i++ ) {

    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│      " << COLOR_YELLOW << "Formulir Tiket ke-[" << COLOR_RESET << i + 1 << COLOR_YELLOW "]" << COLOR_RESET << "      │" << endl;
    cout << "└─────────────────────────────────┘" << endl;

    cout << "Note Kategori Umur:" << endl;
    cout << "[" << COLOR_YELLOW << "*" << COLOR_RESET "] " << COLOR_YELLOW << "1 - 12" << COLOR_RESET << " Tahun = Anak - Anak" << endl;
    cout << "[" << COLOR_YELLOW << "*" << COLOR_RESET "] " << COLOR_YELLOW << "13^" << COLOR_RESET << "    Tahun = Dewasa\n" << endl;

    cout << "[" << COLOR_YELLOW << "?" << COLOR_RESET << "] Masukan Nama Penumpang: ";
    cin.ignore();
    getline(cin, Biodata[i].nama_user);

    cout << "[" << COLOR_YELLOW << "?" << COLOR_RESET << "] Masukan Umur Penumpang: ";
    cin >> Biodata[i].umur_user;

    cout << endl;

    if ( Biodata[i].umur_user > 0; Biodata[i].umur_user < 13 ) {
      Biodata[i].kategori_umur = "Anak - Anak";
      total_tiket_umur_anak_anak = total_tiket_umur_anak_anak + 1;
    } else if ( Biodata[i].umur_user > 12 ) {
      Biodata[i].kategori_umur = "Dewasa";
      total_tiket_umur_dewasa = total_tiket_umur_dewasa + 1;
    }

  }
}

string getKategoriUmur( Biodatas Biodata[], int index ) {
  return Biodata[index].kategori_umur;
}

void getOutput( Maskapais Maskapai[], int pilih_tiket, Biodatas Biodata[] ) {
  pilih_tiket = pilih_tiket - 1;

  cout << "\n" << endl;
  cout << "           ┌─────────────────────────────┐" << endl;
  cout << "           │     " << COLOR_YELLOW << "Informasi Pemebelian" << COLOR_RESET << "    │" << endl;
  cout << "           └─────────────────────────────┘" << endl;
  cout << "\n" << endl;

  for ( int i = 0; i < total_tiket; i++ ) {

    cout << "┌─────────────────────────────────────────────────────┐" << endl;
    cout << "│                                                     │" << endl;
    
    cout << "│                    Tiket Ke-[" << COLOR_YELLOW << i + 1 << COLOR_RESET << "]                     │" << endl;
    cout << "│                                                     │" << endl;
    cout << "│      Nama: " << COLOR_BOLDGREEN << setw(18) << left << Biodata[i].nama_user << COLOR_RESET << "                       │" << endl;
    cout << "│      Umur: " << COLOR_BOLDYELLOW << setw(2) << Biodata[i].umur_user << COLOR_RESET << " Tahun " << COLOR_YELLOW << setw(11) << getKategoriUmur( Biodata, i ) << COLOR_RESET << "                     │" << endl;
    cout << "│      ID Tiket: " << COLOR_BOLDBLUE << setw(1) << Maskapai[pilih_tiket].id << COLOR_RESET << "                                    │" << endl;
    cout << "│      Nama Maskapai: " << COLOR_RED << setw(18) << Maskapai[pilih_tiket].nama_maskapai << COLOR_RESET << "              │" << endl;
    cout << "│      Kelas Kabin: " << COLOR_BOLDMAGENTA << setw(11) << Maskapai[pilih_tiket].kelas_kabin << COLOR_RESET << "                       │" << endl;
    cout << "│      Tujuan Penerbangan: " << COLOR_BLUE << setw(17) << Maskapai[pilih_tiket].tujuan_penerbangan << COLOR_RESET << "          │" << endl;
    cout << "│      Jadwal Penerbangan: " << COLOR_GREEN << setw(13) << Maskapai[pilih_tiket].jadwal_penerbangan << COLOR_RESET << "              │" << endl;

    if ( Biodata[i].kategori_umur == "Anak - Anak" ) {
      cout << "│      Harga: Rp. " << COLOR_RED << setw(7) << Maskapai[pilih_tiket].harga_anak << COLOR_RESET << "                             │" << endl;
      total_harga_anak_anak = total_harga_anak_anak + Maskapai[pilih_tiket].harga_anak;
    } else if ( Biodata[i].kategori_umur == "Dewasa" ) {
      cout << "│      Harga: Rp. " << COLOR_YELLOW << setw(7) << Maskapai[pilih_tiket].harga_dewasa << COLOR_RESET << "                             │" << endl;
      total_harga_dewasa = total_harga_dewasa + Maskapai[pilih_tiket].harga_dewasa;
    }

    cout << "│                                                     │" << endl;
    cout << "└─────────────────────────────────────────────────────┘\n" << endl;
    
  }

  cout << "┌─────────────────────────────────────────────────────────────┐" << endl;
  cout << "│                                                             │" << endl;
  cout << "│                 [ " << COLOR_YELLOW << " Informasi Pembayaran " << COLOR_RESET << " ]                  │" << endl;
  cout << "│                                                             │" << endl;
  cout << "│          Jumlah Tiket Anak - Anak: " << COLOR_YELLOW << total_tiket_umur_anak_anak << COLOR_RESET << "x                       │" << endl;
  cout << "│          Jumlah Harga Tiket Anak - Anak: Rp. " << COLOR_YELLOW << setw(7) << total_harga_anak_anak << COLOR_RESET << "        │" << endl;
  cout << "│                                                             │" << endl;
  cout << "│          Jumlah Tiket Dewasa: " << COLOR_YELLOW << total_tiket_umur_dewasa << COLOR_RESET << "x                            │" << endl;
  cout << "│          Jumlah Harga Dewasa: Rp. " << COLOR_YELLOW << setw(7) << total_harga_dewasa << COLOR_RESET << "                   │" << endl;
  cout << "│                                                             │" << endl;
  cout << "│          Total Harga: Rp. " << COLOR_YELLOW << setw(7) << total_harga_anak_anak + total_harga_dewasa << COLOR_RESET << "                           │" << endl;
  cout << "│                                                             │" << endl;
  cout << "└─────────────────────────────────────────────────────────────┘" << endl;
  
}

int main() {

  Maskapais Maskapai[5];
  int jumlah_maskapai = sizeof(Maskapai)/sizeof(Maskapai[0]);

  setMaskapai( Maskapai );
  getMaskapai( Maskapai );

  cout << "[" << COLOR_YELLOW << "?" << COLOR_RESET << "] Tiket mana yang ingin anda beli: ";
  cin >> pilih_tiket;

  if ( pilih_tiket >= 1 && pilih_tiket <= jumlah_maskapai ) {

    cout << "[" << COLOR_YELLOW << "?" << COLOR_RESET << "] Berapa banyak tiket yang ingin anda beli: ";
    cin >> total_tiket;

    Biodatas Biodata[total_tiket];

    setBiodata( Biodata );

    getOutput( Maskapai, pilih_tiket, Biodata );

  } else {

    cout << "\n" << endl;

    cout << "┌─────────────────────────────────────────────────┐" << endl;
    cout << "│    " << COLOR_YELLOW << " " << COLOR_RESET << " Maaf angka yang anda masukan tidak ada    │" << endl;
    cout << "└─────────────────────────────────────────────────┘" << endl;

    cout << "\n" << endl;

    return 1;

  }

  cout << "\n" << endl;

  return 0;

}
