package com.pemrograman2.pertemuan5;

class OperatorBitwise {
  public static void main(String[] args) {
    int a = 60; /* 60 = 0011 1100 */
    int b = 13; /* 13 = 0000 1101 */
    int c = 0; /* 12 = 0000 1100 */

    c = a & b;
    System.out.println("a & b = " + c);
  }
}
