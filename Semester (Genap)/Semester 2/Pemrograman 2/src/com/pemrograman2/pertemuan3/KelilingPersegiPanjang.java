package com.pemrograman2.pertemuan3;

import java.util.Scanner;

public class KelilingPersegiPanjang {
    public static void main(String[] args) {
        int keliling_lingkaran, panjang, lebar;

        Scanner keyboard = new Scanner(System.in);

        System.out.println("┌────────────────────────────────────┐");
        System.out.println("│  Program Keliling Persegi Panjang  │");
        System.out.println("└────────────────────────────────────┘\n");

        System.out.print("Masukan Panjang Persegi: ");
        panjang = keyboard.nextInt();

        System.out.print("Masukan Lebar Persegi: ");
        lebar = keyboard.nextInt();

        keliling_lingkaran = 2 * (panjang + lebar);
        System.out.print("Keliling Lingkaran: " + keliling_lingkaran);
    }
}
