package com.pemrograman2.ujian;

import java.util.Scanner;

public class Soal2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Masukan Sisi Segitiga: ");
        double sisi = input.nextDouble();
        double luas = (Math.sqrt(3) / 4) * (sisi * sisi);
        double keliling = sisi + sisi + sisi;

        System.out.println("Luas Segitiga Sama Kaki adalah: " + luas);
        System.out.println("Keliling Segitiga Sama Kaki adalah: " + keliling);
    }
}
