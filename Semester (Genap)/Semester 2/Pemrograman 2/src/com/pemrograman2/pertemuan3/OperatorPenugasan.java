package com.pemrograman2.pertemuan3;

public class OperatorPenugasan {
  public static void main(String[] args) {
    int a, b;

    // Pengisian Nilai
    a = 5;
    b = 10;

    // Penambahan
    b += a;
    // Sekarang b = 15
    System.out.println("Penambahan: " + b);

    // Pengurangan
    b -= a;
    // Sekarang b = 10 (karena 15 - 5)
    System.out.println("Pengurangan: " + b);

    // Perkalian
    b *= a;
    // Sekarang b = 50 (karena 10 * 5)
    System.out.println("Perkalian: " + b);

    // Pembagian
    b /= a;
    // Sekarang b = 10 (karena 50 : 5)
    System.out.println("Pembagian: " + b);

  }
}
