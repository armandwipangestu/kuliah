package com.pemrograman2.pertemuan3;

import java.util.Scanner;

public class LuasPersegiPanjang {

    public static void main(String[] args) {
        int luas_persegi_panjang, panjang, lebar;

        Scanner keyboard = new Scanner(System.in);

        System.out.println("┌────────────────────────────────┐");
        System.out.println("│  Program Luas Persegi Panjang  │");
        System.out.println("└────────────────────────────────┘\n");

        System.out.print("Masukan Panjang Persegi: ");
        panjang = keyboard.nextInt();

        System.out.print("Masukan Lebar Persegi: ");
        lebar = keyboard.nextInt();

        luas_persegi_panjang = panjang * lebar;
        System.out.println("Luas Persegi Panjang: " + luas_persegi_panjang);
    }

}
