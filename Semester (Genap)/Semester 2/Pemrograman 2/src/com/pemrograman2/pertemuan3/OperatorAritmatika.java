package com.pemrograman2.pertemuan3;

import java.util.Scanner;

public class OperatorAritmatika {
  public static void main(String[] args) {
    int angka1, angka2, hasil;

    Scanner keyboard = new Scanner(System.in);

    System.out.print("Input angka-1: ");
    angka1 = keyboard.nextInt();

    System.out.print("Input angka-2: ");
    angka2 = keyboard.nextInt();

    // Penjumlahan
    hasil = angka1 + angka2;
    System.out.println("Hasil = " + hasil);

    System.out.print("Input angka-1: ");
    angka1 = keyboard.nextInt();

    System.out.print("Input angka-2: ");
    angka2 = keyboard.nextInt();

    // Pengurangan
    hasil = angka1 - angka2;
    System.out.println("Hasil = " + hasil);

    System.out.print("Input angka-1: ");
    angka1 = keyboard.nextInt();

    System.out.print("Input angka-2: ");
    angka2 = keyboard.nextInt();

    // Perkalian
    hasil = angka1 * angka2;
    System.out.println("Hasil = " + hasil);

    System.out.print("Input angka-1: ");
    angka1 = keyboard.nextInt();

    System.out.print("Input angka-2: ");
    angka2 = keyboard.nextInt();

    // Pembagian
    hasil = angka1 / angka2;
    System.out.println("Hasil = " + hasil);

    System.out.print("Input angka-1: ");
    angka1 = keyboard.nextInt();

    System.out.print("Input angka-2: ");
    angka2 = keyboard.nextInt();

    // Sisa Bagi
    hasil = angka1 % angka2;
    System.out.println("Hasil = " + hasil);

  }
}
