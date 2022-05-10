#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define MAX 10
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

struct Stacks {
  int top;
  string data[MAX];
} Stack;


void initIalize() {
  Stack.top = -1;
}

bool isEmpty() {
  return Stack.top == -1;
}

bool isFull() {
  return Stack.top == MAX - 1;
}

void printStack() {

  if ( !isEmpty() ) {

    cout << endl;
    cout << "- Menampilakan Data" << endl;  
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ id ┃         Data Value          ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;

    for ( int i = Stack.top; i >= 0; i-- ) {

      cout << "┃ " << COLOR_YELLOW << setw(2) << left << i << COLOR_RESET << " ┃ " << setw(24) << Stack.data[i] << "    ┃" << endl;

    }

    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;

  } else {

    cout << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ " << COLOR_YELLOW << "! STACK KOSONG !" << COLOR_RESET << " ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━┛" << endl;

  }

}

void pushData() {

  if ( !isFull() ) {
  
    Stack.top++;
  
    cout << endl;
    cout << "- Pengisian Data" << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃" << COLOR_YELLOW << " Masukan Data: " << COLOR_RESET;
    cin.ignore();
    getline(cin, Stack.data[Stack.top]);
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;
    printStack();
  
  } else {
  
    cout << endl;
    cout << "┏━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ " << COLOR_YELLOW << "! STACK PENUH !" << COLOR_RESET " ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━┛" << endl;
  
  }

}

void popData() {

  if ( !isEmpty() ) {
  
    cout << endl;
    cout << "- Penghapusan Data" << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << endl;
    cout << "┃ Data: '" << COLOR_GREEN << Stack.data[Stack.top] << COLOR_RESET << "' Berhasil dihapus dari stack!" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << endl;
    Stack.top--;
    printStack();
  
  } else {
  
    cout << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ " << COLOR_YELLOW << "! STACK KOSONG !" << COLOR_RESET << " ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━┛" << endl;
  
  }

}

int main() {

  int pilihan;
  initIalize();
  while (true) {
    cout << "\n[1] Input (Push)" << endl;
    cout << "[2] Hapus (Pop)" << endl;
    cout << "[3] Show (Print)" << endl;
    cout << "[4] Keluar\n" << endl;
    cout << "Pilih Menu > ";
    cin >> pilihan;
    switch (pilihan) {
      case 1:
        pushData();
        break;
      case 2:
        popData();
        break;
      case 3:
        printStack();
        break;
      case 4:
        return 0;
      default:
        cout << endl;
        cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
        cout << "┃ " << COLOR_RED << "! PILIHAN TIDAK TERSEDIA !" << COLOR_RESET " ┃" << endl;
        cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;
        break;
    }
  }
  return 0;
}
