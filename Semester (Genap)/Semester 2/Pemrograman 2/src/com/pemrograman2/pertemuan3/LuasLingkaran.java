package com.pemrograman2.pertemuan3;

import java.util.Scanner;

public class LuasLingkaran {

    public static void main(String[] args) {
        float luas_lingkaran, phi, jari_jari;

        Scanner keyboard = new Scanner(System.in);

        System.out.println("┌──────────────────────────┐");
        System.out.println("│  Program Luas Lingkaran  │");
        System.out.println("└──────────────────────────┘\n");

        System.out.print("Masukan Jari - Jari Lingkaran: ");
        jari_jari = keyboard.nextFloat();

        System.out.print("Masukan \uD835\uDFB9 Lingkaran: ");
        phi = keyboard.nextFloat();

        luas_lingkaran = phi * jari_jari * jari_jari;
        System.out.println("Luas Lingkaran: " + luas_lingkaran);
    }

}
