package com.pemrograman2.pertemuan6;

public class Perulangan2 {
    public static void main(String[] args) {
        int i, a = 0;
        for ( i = 1; i <= 5; i++ ) {
            if ( i == 4 ) {
                break;
            }
            a = a + i;
        }
        System.out.println(a);
    }
}
