#include <iostream>
#include <stdio.h>

using namespace std;

#define MAX_STACK 10

struct Stacks
{
 int top;
 int data[10];
};

void initialize(Stucks Stack) {
  Stack.top = -1;
}

int isFull(Stacks Stack) {
  if (Stack.top == MAX_STACK - 1) {
    return 1;
  } else {
    return 0;
  }
}

int isEmpty(Stacks Stack) {
  if (Stack.top == -1) {
    return 1;
  } else {
    return 0;
  }
}

void Push(Stacks Stack, char d[10]) {
  Stack.top++;
  strcpy(Stack.data[Stack.top],d);
}

void Pop(Stacks Stack) { 
  printf("Data yang terambil = %s\n", Stack.data[Stack.top]);
  Stack.top--;
}

int main() {
  Stacks Stack;

  initialize(Stack);


}
