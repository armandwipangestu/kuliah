package com.pemrograman2.pertemuan3;

import java.util.Scanner;

public class KelilingPersegiPanjang {
    public static void main(String[] args) {
        int keliling_persegi_panjang, panjang, lebar;

        Scanner keyboard = new Scanner(System.in);

        System.out.println("┌────────────────────────────────────┐");
        System.out.println("│  Program Keliling Persegi Panjang  │");
        System.out.println("└────────────────────────────────────┘\n");

        System.out.print("Masukan Panjang Persegi: ");
        panjang = keyboard.nextInt();

        System.out.print("Masukan Lebar Persegi: ");
        lebar = keyboard.nextInt();

        keliling_persegi_panjang = 2 * (panjang + lebar);
        System.out.print("Keliling Persegi Panjang: " + keliling_persegi_panjang);
    }
}
