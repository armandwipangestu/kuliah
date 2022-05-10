package com.pemrograman2.pertemuan6;

public class Perulangan1 {
    public static void main(String[] args) {
        int count = 1, total = 20, i;
        System.out.println("=================================================");
        System.out.println("| Program Perulangan Menampilkan Bilangan Genap |");
        System.out.println("=================================================");
        System.out.println("- Total Perulangan: " + total + "\n");
        for ( i = 1; i <= total; i++ ) {
            if ( i % 2 == 0 ) {
                System.out.println("Perulangan ke-" + count + ": " + i);
                count = count + 1;
            }
        }
    }
}
