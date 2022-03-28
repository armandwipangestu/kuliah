#include <iostream>

using namespace std;

#define MAX 10

struct Stacks {
  int top;
  int data[MAX];
};

Stacks Stack;

void init() {
  Stack.top = -1;
}

bool isEmpty() {
  return Stack.top == -1;
}

bool isFull() {
  return Stack.top == MAX - 1;
}

void push() {
  if (isFull()) {
    cout << "\nTumpukan Penuh" << endl;
  } else {
    Stack.top++;
    cout << "\nMasukan Data: ";
    cin >> Stack.data[Stack.top];
    cout << "Data " << Stack.data[Stack.top] << " masuk ke dalam stack" << endl;
  }
}

void pop() {
  if (isEmpty()) {
    cout << "\nData Kosong" << endl;
  } else {
    cout << "\nData " << Stack.data[Stack.top] << " berhasil terambil" << endl;
    Stack.top--;
  }
}

void printStack() {
  if (isEmpty()) {
    cout << "\nTumpukan Kosong" << endl;
  } else {
    cout << "\nTumpukan:";
    for (int i = Stack.top; i >= 0; i--) {
      cout << Stack.data[i] << ((i == 0) ? "" : ",");
    }
  }
}

int main() {

  int pilihan;
  init();
  do {
    printStack();
    cout << "1. Input (Push)\n2. Hapus (Pop)\n3. Keluar\nMasukan Pilihan: ";
    cin >> pilihan;
    switch(pilihan) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      default:
        cout << "Pilihan tidak tersedia";
        break;
    }
  } while (pilihan != 3);

  return 0;

}
