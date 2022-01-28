#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;
using namespace std::chrono;

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

int data_random[1000], 
    data_random_length = sizeof(data_random)/sizeof(data_random[0]),
    data_bubble[1000],
    data_bubble_length,
    pilih_menu;

void setDataRandom(int data_random[], int data_random_length) {
  for( int i = 0; i < data_random_length; i++ ) {
    data_random[i] = (rand() % 100) + 1;
    data_bubble[i] = data_random[i];
  }
}

void getDataRandom(int data_random[], int data_random_length) {
  for( int i = 0; i < data_random_length; i++ ) {
    cout << data_random[i] << " ";
  }
}

void swapPointer( int *x_position, int *y_position ) {
  int temporary_pointer = *x_position;
  *x_position = *y_position;
  *y_position = temporary_pointer;
}

void startBubbleSort(int data_bubble[], int data_bubble_length) {
  for( int i = 0; i < data_bubble_length; i++ ) {
    for( int j = 0; j < data_bubble_length - i - 1; j++ ) {
      if( data_bubble[j] > data_bubble[j + 1] ) {
        swapPointer( &data_bubble[j], &data_bubble[j + 1] );
      }
    }
  }
}

void tampilkanTabelPerbandingan(int data_random[], int data_bubble[]) {
  cout << "\n[" << COLOR_YELLOW << "Tabel Perbandingan" << COLOR_RESET "]" << endl;
  cout << COLOR_CYAN << "────────────────────\n" << COLOR_RESET << endl;
  cout << "Data Sebelum Di Soring:" << endl;
  cout << "┌──────────────────────────────────────────────────────────────────────────────┐" << endl;
  for( int i = 0; i < 10; i++ ) {
    cout << "│  " << setw(2) << data_random[i] << "  │";
  }
  cout << "\n└──────────────────────────────────────────────────────────────────────────────┘\n";

  cout << "\nData Setelah Di Soring:" << endl;
  cout << "┌──────────────────────────────────────────────────────────────────────────────┐" << endl;
  for( int i = 0; i < 10; i++ ) {
    cout << "│  " << setw(2) << data_bubble[i] << "  │";
  }
  cout << "\n└──────────────────────────────────────────────────────────────────────────────┘\n\n";
}

void checkData(int data_random[], int data_bubble[], int data_length) {
  for( int i = 0; i < data_length; i++ ) {
    if( data_random[i] == data_bubble[i] ) {
      cout << "ya ";
    }
  }
}

void main_menu() {
  cout << "[" << COLOR_YELLOW << "Menu Program" << COLOR_RESET "]" << endl;
  cout << COLOR_CYAN << "─────────────" << COLOR_RESET << endl;
  cout << "[" << COLOR_YELLOW << "1" << COLOR_RESET << "] Penyiapan Data Random (1.000 data)" << endl;
  cout << "[" << COLOR_YELLOW << "2" << COLOR_RESET << "] Lakukan Sort dengan Bubble Sort" << endl;
  cout << "[" << COLOR_YELLOW << "5" << COLOR_RESET << "] Tampilkan Hasil Sorting" << endl;
  cout << "[" << COLOR_YELLOW << "6" << COLOR_RESET << "] Tampilkan Total Waktu Sorting" << endl;
  cout << "[" << COLOR_YELLOW << "7" << COLOR_RESET << "] Tampilkan hasil tabel perbandingan" << endl;
  cout << "[" << COLOR_YELLOW << "8" << COLOR_RESET << "] Keluar dari Program\n" << endl;
}

int main() {

  while ( true ) {
    main_menu();
    cout << "[" COLOR_YELLOW << "Pilih Menu" << COLOR_RESET << "] > ";
    cin >> pilih_menu;

    switch(pilih_menu) {
      case 1:
        setDataRandom(data_random, data_random_length);
        data_bubble_length = sizeof(data_bubble)/sizeof(data_bubble[0]);
        cout << "\n";
        if( data_bubble[0] == data_random[0] ) {
          cout << "[" << COLOR_GREEN << "INFO" << COLOR_RESET << "] > Data Berhasil di-generate." << endl;
        }
        cout << "\n";
        break;

      case 2:
//        auto waktu_mulai = high_resolution_clock::now();
        startBubbleSort(data_bubble, data_bubble_length);
//        auto waktu_berhenti = high_resolution_clock::now();
//        auto waktu = duration_cast<microseconds>(waktu_berhenti - waktu_mulai);
        cout << "\n";
        break;

      case 5:
        if( data_random[0] != '\0' ) {
          cout << "\n";
          cout << "[" COLOR_RED << "INFO" << COLOR_RESET << "] > Data Sebelum Di Sorting" << endl;
          getDataRandom(data_random, data_random_length);
          cout << "\n\n";

          cout << "[" COLOR_GREEN << "INFO" << COLOR_RESET << "] > Data Setelah Di Sorting" << endl;
          getDataRandom(data_bubble, data_bubble_length);
          cout << "\n\n";
          break;
        } else {
          cout << "\n";
          cout << "[" COLOR_RED << "INFO" << COLOR_RESET << "] > Data Belum Di Siapkan" << endl;
          cout << "\n\n";
          break;
        }

      case 6:
//        cout << "[" << COLOR_YELLOW << "INFO" << COLOR_RESET << "] > Total Waktu Sorting " << COLOR_YELLOW << "'" << waktu.count() << "' microseconds." << endl;
        break;

      case 7:
        if ( data_random[0] != '\0' && data_bubble[0] != '\0' ) {
          tampilkanTabelPerbandingan(data_random, data_bubble);
          break;
        } else if ( data_random[0] == '\0' && data_bubble[0] == '\0' ) {
          cout << "\n";
          cout << "[" COLOR_RED << "INFO" << COLOR_RESET << "] > Data Belum Di Siapkan" << endl;
          cout << "\n";
          break;
        }

      case 8:
        return 0;
        break;

    }
  }

  return 0;
}
