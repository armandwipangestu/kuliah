package com.pemrograman2.pertemuan5;

class OperatorBitwiseNOT {
  public static void main(String[] args) {
    int a = 20;
    int c = ~a;
    // > Bitwise NOT (bit bernilai 0 akan menjadi 1 dan bit bernilai 1 akan menjadi 0)
    //
    // bit 'a' = 0 0 0 1 0 1 0 0
    //           ──────────────── ~ (NOT)
    // bit 'c' = 1 1 1 0 1 0 1 1
    //
    // yang dimana dalam bit seperti ini:
    // ┌────────────────────────────────────────────────────┐
    // │  128  │  64  │  32  │  16  │  8  │  4  │  2  │  1  │
    // └────────────────────────────────────────────────────┘
    //     1      1      1      0      1     0     1     1
    //
    // Penjelasan:
    // 128 - 64 - 32 - 8 - 2 - 1 = -21
    //
    // > Value dari variable 'c' == -21
    // 
    // atau cara cepat nya adalah:
    // a = x
    //   = -x - 1
    // 
    // Contoh pada variable di atas nilai a = 20, jika dimasukkan ke dalam rumus menjadi
    // a = 20
    //   = -20 - 1
    //   = -21
    System.out.println("~a = " + c);
  }
}
