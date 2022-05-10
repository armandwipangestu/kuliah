package com.pemrograman2.ujian;

import java.util.Scanner;

public class Soal1 {
    public static void main(String[] args) {
        int pilih_menu;

        Scanner input = new Scanner(System.in);

        System.out.println("[1] Aku");
        System.out.println("[2] Dia");

        System.out.print("Pilih Aku atau Dia: ");
        pilih_menu = input.nextInt();

        switch(pilih_menu) {
            case 1:
                System.out.println("Aku pasti akan lebih baik dari dia");
                break;
            case 2:
                System.out.println("Lebih baik aku pergi jauh dari hidupmu");
                break;
        }
    }
}
