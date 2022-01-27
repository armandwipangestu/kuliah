#include <iostream>
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

int data_random[10000], 
    data_random_length = sizeof(data_random)/sizeof(data_random[0]),
    data_bubble[10000],
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

void checkData(int data_random[], int data_bubble[], int data_length) {
  for( int i = 0; i < data_length; i++ ) {
    if( data_random[i] == data_bubble[i] ) {
      cout << "ya ";
    }
  }
}

void main_menu() {
  cout << "Menu Program:" << endl;
  cout << "1. Penyiapan Data Random (1.000 data)" << endl;
  cout << "2. Lakukan Sort dengan Bubble Sort" << endl;
  cout << "5. Tampilkan Hasil Sorting" << endl;
  cout << "6. Tampilkan hasil tabel perbandingan" << endl;
  cout << "7. Keluar dari Program\n" << endl;
}

void switchCase(int pilih_menu) {

  switch(pilih_menu) {
    case 1:
      setDataRandom(data_random, data_random_length);
      data_bubble_length = sizeof(data_bubble)/sizeof(data_bubble[0]);
      switchCase(pilih_menu);

    case 2:
      startBubbleSort(data_bubble, data_bubble_length);
      switchCase(pilih_menu);

    case 5:
      cout << COLOR_RED << "Data Sebelum Di Sorting" << COLOR_RESET << endl;
      getDataRandom(data_random, data_random_length);

      cout << COLOR_GREEN << "Data Setelah Di Sorting" << COLOR_RESET << endl;
      getDataRandom(data_bubble, data_bubble_length);
      switchCase(pilih_menu);

    case 6:

      break;

    case 7:

      break;
  }

}

int main() {

  //setDataRandom(data_random, data_random_length);
  //int data_bubble_length = sizeof(data_bubble)/sizeof(data_bubble[0]);
  //getDataRandom(data_random, data_random_length);

  //cout << "\n\n";

  //checkData(data_random, data_bubble, data_random_length);
  //cout << "\n\n";

  //startBubbleSort(data_bubble, data_bubble_length);
  //getDataRandom(data_bubble, data_bubble_length);

  //main_menu();
  //cout << "Masukan Pilihan Anda: ";
  //cin >> pilih_menu;

  //switchCase(data_random, data_random_length, pilih_menu);
  while ( true ) {
    main_menu();
    cout << "Masukan Pilihan Anda: ";
    cin >> pilih_menu;

    switch(pilih_menu) {
      case 1:
        setDataRandom(data_random, data_random_length);
        data_bubble_length = sizeof(data_bubble)/sizeof(data_bubble[0]);
        cout << "\n";
        break;

      case 2:
        startBubbleSort(data_bubble, data_bubble_length);
        cout << "\n";
        break;

      case 5:
        cout << "\n";
        cout << COLOR_RED << "Data Sebelum Di Sorting" << COLOR_RESET << endl;
        getDataRandom(data_random, data_random_length);
        cout << "\n\n";

        cout << COLOR_GREEN << "Data Setelah Di Sorting" << COLOR_RESET << endl;
        getDataRandom(data_bubble, data_bubble_length);
        cout << "\n\n";
        break;

      case 6:

        break;

      case 7:

        break;
    }
  }

  return 0;
}
