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

const int total_data = 1000;

int data_random[total_data],
    data_random_length = sizeof(data_random)/sizeof(data_random[0]),
    data_bubble[total_data],
    data_bubble_length,
    data_selection[total_data],
    data_selection_length,
    data_insertion[total_data],
    data_insertion_length,
    pilih_menu;

int time_bubble_sort, time_selection_sort, time_insertion_sort;

void setDataRandom(int data_random[], int data_random_length) {
  for( int i = 0; i < data_random_length; i++ ) {
    data_random[i] = (rand() % 1000) + 1;
    data_bubble[i] = data_random[i];
    data_selection[i] = data_random[i];
    data_insertion[i] = data_random[i];
  }
}

void getDataRandom(int data_random[], int data_random_length, string data_name) {
  cout << "[" << COLOR_GREEN << "Nama Data" << COLOR_RESET << "] > " << COLOR_YELLOW << data_name << COLOR_RESET;
  cout << "\n\n";
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
  auto start = high_resolution_clock::now();
  for( int i = 0; i < data_bubble_length; i++ ) {
    for( int j = 0; j < data_bubble_length - i - 1; j++ ) {
      if( data_bubble[j] > data_bubble[j + 1] ) {
        swapPointer( &data_bubble[j], &data_bubble[j + 1] );
      }
    }
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  time_bubble_sort = duration.count();
}

void startSelectionSort(int data_selection[], int data_selection_length) {
  auto start = high_resolution_clock::now();
  for(int i = 0; i < data_selection_length - 1; i++) {
    int pos = i;
    for(int j = i + 1; j < data_selection_length; j++) {
      if(data_selection[j] < data_selection[pos]) {
        pos = j;
      }
    }
    swapPointer(&data_selection[pos], &data_selection[i]);
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  time_selection_sort = duration.count();
}

void startInsertionSort(int data_insertion[], int data_insertion_length) {
  auto start = high_resolution_clock::now();
  for(int i = 1; i < data_insertion_length; i++) {
    int key = data_insertion[i];
    int j = i - 1;

    while(j >= 0 && data_insertion[j] > key) {
      data_insertion[j + 1] = data_insertion[j];
      j = j - 1;
    }
    data_insertion[j + 1] = key;
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  time_insertion_sort = duration.count();
}

void tampilkanTabelPerbandingan(int data_random[], int data_sorting[], string sorting_name) {
  cout << "\n[" << COLOR_YELLOW << "Tabel Perbandingan Berdasarkan 10 Index Array Pertama" << COLOR_RESET "]" << endl;
  cout << COLOR_CYAN << "───────────────────────────────────────────────────────\n" << COLOR_RESET << endl;
  cout << "Algoritma yang digunakan: " << COLOR_YELLOW << sorting_name << COLOR_RESET;
  cout << "\n\n";
  cout << "Data Sebelum Di Sorting:" << endl;
  cout << "┌──────────────────┐" << endl;
  cout << "│  Index  │  Data  │" << endl;
  cout << "└──────────────────┘" << endl;
  for ( int i = 0; i < 10; i++ ) {
    cout << "│   " << COLOR_YELLOW << setw(2) << i << COLOR_RESET << "    │  " << COLOR_RED << setw(3) << data_random[i] << COLOR_RESET << "   │" << endl;
  }
  cout << "└──────────────────┘" << endl;

  cout << "\nData Setelah Di Sorting:" << endl;
  cout << "┌──────────────────┐" << endl;
  cout << "│  Index  │  Data  │" << endl;
  cout << "└──────────────────┘" << endl;
  for ( int i = 0; i < 10; i++ ) {
    cout << "│   " << COLOR_YELLOW << setw(2) << i << COLOR_RESET << "    │  " << COLOR_GREEN << setw(3) << data_sorting[i] << COLOR_RESET << "   │" << endl;
  }
  cout << "└──────────────────┘" << endl;
  cout << endl;
}

void checkData(int data_random[], int data_bubble[], int data_length) {
  for( int i = 0; i < data_length; i++ ) {
    if( data_random[i] == data_bubble[i] ) {
      cout << "ya ";
    }
  }
}

void getTotalWaktuSorting(int time_sort, string sorting_name) {
  cout << "\n";
  cout << "[" << COLOR_GREEN << "INFO" << COLOR_RESET << "] > Total Waktu " << COLOR_GREEN << sorting_name << COLOR_YELLOW << " '" << time_sort << COLOR_RESET << "' microseconds.";
}

void getInfo(string title, string subtitle, string color) {
  if ( color == "success" ) {
    cout << "[" << COLOR_GREEN << title << COLOR_RESET << "] > " << subtitle << endl;
  } else if ( color == "success" ) {
    cout << "[" << COLOR_YELLOW << title << COLOR_RESET << "] > " << subtitle << endl;
  } else if ( color == "danger" ) {
    cout << "[" << COLOR_RED << title << COLOR_RESET << "] > " << subtitle << endl;
  }
}

void main_menu() {
  cout << "[" << COLOR_YELLOW << "Menu Program" << COLOR_RESET "]" << endl;
  cout << COLOR_CYAN << "──────────────" << COLOR_RESET << endl;
  cout << "[" << COLOR_YELLOW << "1" << COLOR_RESET << "] Penyiapan Data Random (" << total_data << " data)" << endl;
  cout << "[" << COLOR_YELLOW << "2" << COLOR_RESET << "] Lakukan Sort dengan Bubble Sort" << endl;
  cout << "[" << COLOR_YELLOW << "3" << COLOR_RESET << "] Lakukan Sort dengan Selection Sort" << endl;
  cout << "[" << COLOR_YELLOW << "4" << COLOR_RESET << "] Lakukan Sort dengan Insertion Sort" << endl;
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
        data_selection_length = sizeof(data_selection)/sizeof(data_selection[0]);
        data_insertion_length = sizeof(data_insertion)/sizeof(data_insertion[0]);
        cout << "\n";
        cout << "[" << COLOR_GREEN << "Menu Yang Dipilih" << COLOR_RESET << "] > Penyiapan Data Random (" << total_data << " data)" << endl;
        if( data_bubble[0] == data_random[0] ) {
          getInfo("INFO", "Data Berhasil di-generate", "success");
          getDataRandom(data_random, data_random_length, "Data Random");
        }
        cout << "\n\n";
        break;

      case 2:
        cout << "\n";
        getInfo("Menu Yang Dipilih", "Lakukan Sort dengan Bubble Sort", "success");
        startBubbleSort(data_bubble, data_bubble_length);
        if( data_bubble[0] != data_random[0] ) {
          getInfo("INFO", "Data Berhasil di Sorting menggunakan Algoritma Bubble Sort", "success");
          cout << "\n";
          getInfo("INFO", "Data Sebelum Di Sorting", "danger");
          getDataRandom(data_random, data_random_length, "Data Random");
          cout << "\n\n";
          getInfo("INFO", "Data Setelah Di Sorting", "success");
          getDataRandom(data_bubble, data_bubble_length, "Data Bubble Sort");
          cout << "\n";
        } else {
          getInfo("INFO", "Data Belum Disiapkan", "danger");
        }
        cout << "\n";
        break;

      case 3:
        cout << "\n";
        getInfo("Menu Yang Dipilih", "Lakukan Sort dengan Selection Sort", "success");
        startSelectionSort(data_selection, data_selection_length);
        if( data_selection[0] != data_random[0] ) {
          getInfo("INFO", "Data Berhasil di Sorting menggunakan Algoritma Selection Sort", "success");
          cout << "\n";
          getInfo("INFO", "Data Sebelum Di Sorting", "danger");
          getDataRandom(data_random, data_random_length, "Data Random");
          cout << "\n\n";
          getInfo("INFO", "Data Setelah Di Sorting", "success");
          getDataRandom(data_selection, data_selection_length, "Data Selection Sort");
          cout << "\n";
        } else {
          getInfo("INFO", "Data Belum Disiapkan", "danger");
        }
        cout << "\n";
        break;

      case 4:
        cout << "\n";
        getInfo("Menu Yang Dipilih", "Lakukan Sort dengan Insertion Sort", "success");
        startInsertionSort(data_insertion, data_insertion_length);
        if( data_insertion[0] != data_random[0] ) {
          getInfo("INFO", "Data Berhasil di Sorting menggunakan Algoritma Insertion Sort", "success");
          cout << "\n";
          getInfo("INFO", "Data Sebelum Di Sorting", "danger");
          getDataRandom(data_random, data_random_length, "Data Random");
          cout << "\n\n";
          getInfo("INFO", "Data Setelah Di Sorting", "success");
          getDataRandom(data_insertion, data_insertion_length, "Data Insertion Sort");
          cout << "\n";
        } else {
          getInfo("INFO", "Data Belum Disiapkan", "danger");
        }
        cout << "\n";
        break;

      case 5:
        cout << "\n";
        getInfo("Menu Yang Dipilih", "Tampilkan Hasil Sorting", "success");
        if( data_random[0] != '\0' ) {
          cout << "\n";
          getInfo("INFO", "Data Sebelum Di Sorting (data random)", "success");
          getDataRandom(data_random, data_random_length, "Data Random");
          cout << "\n\n";

          getInfo("INFO", "Data Setelah Di Sorting menggunakan Algoritma Bubble Sort", "success");
          getDataRandom(data_bubble, data_bubble_length, "Data Bubble Sort");
          cout << "\n\n";

          getInfo("INFO", "Data Setelah Di Sorting menggunakan Algoritma Selection Sort", "success");
          getDataRandom(data_selection, data_selection_length, "Data Selection Sort");
          cout << "\n\n";

          getInfo("INFO", "Data Setelah Di Sorting menggunakan Algoritma Insertion Sort", "success");
          getDataRandom(data_insertion, data_insertion_length, "Data Insertion Sort");
          cout << "\n\n";

          break;
        } else {
          cout << "\n";
          getInfo("INFO", "Data Belum Di Siapkan", "danger");
          cout << "\n";
          break;
        }

      case 6:
        cout << "\n";
        getInfo("Menu Yang Dipilih", "Tampilkan Total Waktu Sorting", "success");
        if ( time_bubble_sort != '\0' && time_selection_sort != '\0' && time_insertion_sort != '\0' ) {
          getTotalWaktuSorting(time_bubble_sort, "Bubble Sort");
          getTotalWaktuSorting(time_selection_sort, "Selection Sort");
          getTotalWaktuSorting(time_insertion_sort, "Insertion Sort");
          cout << "\n\n";
          break;
        } else {
          cout << "\n";
          cout << "[" COLOR_RED << "INFO" << COLOR_RESET << "] > Sorting Belum Dilakukan." << endl;
          cout << "\n";
          break;
        }

      case 7:
        cout << "\n";
        getInfo("Menu Yang Dipilih", "Tampilkan Hasil Tabel Perbandingan", "success");
        if ( data_random[0] != '\0' && data_bubble[0] != '\0' && data_insertion[0] != '\0' ) {
          tampilkanTabelPerbandingan(data_random, data_bubble, "Bubble Sort");
          tampilkanTabelPerbandingan(data_random, data_selection, "Selection Sort");
          tampilkanTabelPerbandingan(data_random, data_insertion, "Insertion Sort");
          break;
        } else if ( data_random[0] == '\0' && data_bubble[0] == '\0' && data_insertion[0] == '\0' ) {
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
