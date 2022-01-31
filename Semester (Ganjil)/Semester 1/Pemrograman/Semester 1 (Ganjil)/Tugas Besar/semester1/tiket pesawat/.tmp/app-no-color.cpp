#include <iostream>
#include <string>
#include <cstdio>
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
  cout << "┌───────────────────────────┐" << endl;
  cout << "│     List Tiket Pesawat    │" << endl;
  cout << "└───────────────────────────┘" << endl;
  cout << "\n" << endl;

  cout << "┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
  cout << "│  No.  │      Nama Maskapai    │    Kelas Kabin    │   Tujuan Penerbangan    │    Jadwal Penerbangan    │     Harga Dewasa   │      Harga Anak    │" << endl;
  cout << "└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;

  for ( int i = 0; i < 5; i++ ) {
    cout << "│  "<< setw(2) << Maskapai[i].id << "   │ " << setw(18) << Maskapai[i].nama_maskapai << "    │    " << setw(11) << Maskapai[i].kelas_kabin << "    │    " << setw(17) << Maskapai[i].tujuan_penerbangan << \
    "    │      " << setw(13) << Maskapai[i].jadwal_penerbangan << "       │     Rp. " << setw(7) << Maskapai[i].harga_dewasa << "    │     Rp. " << \
    setw(7) << Maskapai[i].harga_anak << "    │   " << endl;
  }

  cout << "└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;
  cout << "                                                                                                            Note:" << endl;
  cout << "                                                                                                            [*] Harga Anak = 10% dari Harga Dewasa \n" << endl;
}

void setBiodata( Biodatas Biodata[] ) {
  cout << endl;
  for ( int i = 0; i < total_tiket; i++ ) {

    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│      Formulir Tiket ke-[" << i + 1 << "]      │" << endl;
    cout << "└─────────────────────────────────┘" << endl;

    cout << "Note Kategori Umur:" << endl;
    cout << "[*" "] 1 - 12 Tahun = Anak - Anak" << endl;
    cout << "[*" "] 13^    Tahun = Dewasa\n" << endl;

    cout << "[?] Masukan Nama Penumpang: ";
    cin.ignore();
    getline(cin, Biodata[i].nama_user);

    cout << "[?] Masukan Umur Penumpang: ";
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

string getKategori( Biodatas Biodata[], int index ) {
  return Biodata[index].kategori_umur;
}

void getOutput( Maskapais Maskapai[], int pilih_tiket, Biodatas Biodata[] ) {
  pilih_tiket = pilih_tiket - 1;

  cout << "\n" << endl;
  cout << "┌─────────────────────────────┐" << endl;
  cout << "│     Informasi Pemebelian    │" << endl;
  cout << "└─────────────────────────────┘" << endl;
  cout << "\n" << endl;

  for ( int i = 0; i < total_tiket; i++ ) {

    cout << "┌─────────────────────────────────────────────────────┐" << endl;
    cout << "│                                                     │" << endl;
    
    cout << "│                    Tiket Ke-[" << i + 1 << "]                     │" << endl;
    cout << "│                                                     │" << endl;
    cout << "│      Nama: " << setw(18) << left << Biodata[i].nama_user << "                       │" << endl;
    cout << "│      Umur: "<< setw(2) << Biodata[i].umur_user << " Tahun " << setw(11) << getKategori( Biodata, i ) << "                     │" << endl;
    cout << "│      ID Tiket: " << setw(1) << Maskapai[pilih_tiket].id << "                                    │" << endl;
    cout << "│      Nama Maskapai: " << setw(18) << Maskapai[pilih_tiket].nama_maskapai << "              │" << endl;
    cout << "│      Kelas Kabin: " << setw(11) << Maskapai[pilih_tiket].kelas_kabin << "                       │" << endl;
    cout << "│      Tujuan Penerbangan: " << setw(17) << Maskapai[pilih_tiket].tujuan_penerbangan << "          │" << endl;
    cout << "│      Jadwal Penerbangan: " << setw(13) << Maskapai[pilih_tiket].jadwal_penerbangan << "              │" << endl;

    if ( Biodata[i].kategori_umur == "Anak - Anak" ) {
      // cout << "│      Kategori: " << setw(11) << Biodata[i].kategori_umur << "                          │" << endl;
      cout << "│      Harga: Rp. " << setw(7) << Maskapai[pilih_tiket].harga_anak << "                             │" << endl;
      total_harga_anak_anak = total_harga_anak_anak + Maskapai[pilih_tiket].harga_anak;
    } else if ( Biodata[i].kategori_umur == "Dewasa" ) {
      // cout << "│      Kategori: " << setw(6) << Biodata[i].kategori_umur << "                               │" << endl;
      cout << "│      Harga: Rp. " << setw(7) << Maskapai[pilih_tiket].harga_dewasa << "                             │" << endl;
      total_harga_dewasa = total_harga_dewasa + Maskapai[pilih_tiket].harga_dewasa;
    }

    cout << "│                                                     │" << endl;
    cout << "└─────────────────────────────────────────────────────┘\n" << endl;
    
  }

  cout << "┌─────────────────────────────────────────────────────────────┐" << endl;
  cout << "│                                                             │" << endl;
  cout << "│                 [  Informasi Pembayaran  ]                  │" << endl;
  cout << "│                                                             │" << endl;
  cout << "│          Jumlah Tiket Anak - Anak: " << total_tiket_umur_anak_anak << "x                       │" << endl;
  cout << "│          Jumlah Harga Tiket Anak - Anak: Rp. " << setw(7) << total_harga_anak_anak << "        │" << endl;
  cout << "│                                                             │" << endl;
  cout << "│          Jumlah Tiket Dewasa: " << total_tiket_umur_dewasa << "x                            │" << endl;
  cout << "│          Jumlah Harga Dewasa: Rp. " << setw(7) << total_harga_dewasa << "                   │" << endl;
  cout << "│                                                             │" << endl;
  cout << "│          Total Harga: Rp. " << setw(7) << total_harga_anak_anak + total_harga_dewasa << "                           │" << endl;
  cout << "│                                                             │" << endl;
  cout << "└─────────────────────────────────────────────────────────────┘" << endl;
  
}

int main() {

  Maskapais Maskapai[5];
  int jumlah_maskapai = sizeof(Maskapai)/sizeof(Maskapai[0]);

  setMaskapai( Maskapai );
  getMaskapai( Maskapai );

  cout << "[?] Tiket mana yang ingin anda beli: ";
  cin >> pilih_tiket;

  if ( pilih_tiket >= 1 && pilih_tiket <= jumlah_maskapai ) {

    cout << "[?] Berapa banyak tiket yang ingin anda beli: ";
    cin >> total_tiket;

    Biodatas Biodata[total_tiket];

    setBiodata( Biodata );

    getOutput( Maskapai, pilih_tiket, Biodata );

  } else {

    cout << "\n" << endl;

    cout << "┌─────────────────────────────────────────────────┐" << endl;
    cout << "│      Maaf angka yang anda masukan tidak ada    │" << endl;
    cout << "└─────────────────────────────────────────────────┘" << endl;

    cout << "\n" << endl;

    return 1;

  }

  cout << "\n" << endl;

  return 0;

}
