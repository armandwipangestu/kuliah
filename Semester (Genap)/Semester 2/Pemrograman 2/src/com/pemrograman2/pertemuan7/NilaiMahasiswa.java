package com.pemrograman2.pertemuan7;
import java.util.Scanner;

public class NilaiMahasiswa {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukan jumlah mahasiswa: ");
        int n = input.nextInt();

        String nama[] = new String[n];
        String status[] = new String[n];
        int nilai[] = new int[n];

        for ( int i = 0; i < n; i++ ) {
            System.out.println("Mahasiswa Ke-" + (i + 1));
            System.out.println("==============");
            System.out.print("Nama: ");
            nama[i] = input.next();

            System.out.print("Nilai: ");
            nilai[i] = input.nextInt();

            if ( nilai[i] >= 80 && nilai[i] <= 100 ) {
                status[i] = "A";
            } else if ( nilai[i] >= 60 && nilai[i] <= 79 ) {
                status[i] = "B";
            } else {
                status[i] = "C";
            }

            System.out.println("");
        }

        System.out.println("DAFTAR NILAI MAHASISWA");
        System.out.println("======================");
        System.out.println("No  Nama  Nilai  Status");

        for ( int i = 0; i < n; i++ ) {
            System.out.println((i + 1) + "   " + nama[i] + "  " + nilai[i] + "     " + status[i]);
        }

    }
}
