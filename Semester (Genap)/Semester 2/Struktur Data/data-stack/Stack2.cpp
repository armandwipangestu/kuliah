#include <stdio.h>
#include <cstring>

#define MAX_STACK 10

struct STACK {
  int top;
  int data[10];
};

STACK tumpuk;

void inisialisasi() {
  tumpuk.top = -1;
}

int IsFull() {
  if (tumpuk.top == MAX_STACK - 1) {
    return -1;
  } else {
    return 0;
  }
}

int IsEmpty() {
  if (tumpuk.top == -1) {
    return 1;
  } else {
    return 0;
  }
}

void Push(char d[10]) {
  tumpuk.top++;
  strcpy(d, &tumpuk.data[tumpuk.top]);
}

void Pop() {
  printf("Data yang terambil = %s\n", tumpuk.data[tumpuk.top]);
  tumpuk.top--;
}

void TampilStack() {
  for(int i = tumpuk.top; i >= 0; i--) {
    printf("Data : %s\n", tumpuk.data[i]);
  }
}

int peek() {
  return tumpuk.data[tumpuk.top];
}

int main() {

  inisialisasi();
  Push('A');
  TampilStack();

  return 0;
}
