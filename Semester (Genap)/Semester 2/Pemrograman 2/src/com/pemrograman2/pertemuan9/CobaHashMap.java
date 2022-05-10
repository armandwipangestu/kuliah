package com.pemrograman2.pertemuan9;
import java.util.HashMap;

public class CobaHashMap {
    public static void main(String[] args) {
        // Membuat objek HashMap
        HashMap<Integer, String> days = new HashMap<Integer, String>();

        // Mengisi nilai ke objek days
        days.put(1, "Minggu");
        days.put(2, "Senin");
        days.put(3, "Selasa");
        days.put(4, "Rabu");
        days.put(5, "Kamis");
        days.put(6, "Jum'at");
        days.put(7, "Sabtu");

        // Mencetak semua isi dari objek days
        System.out.println("Isi objek days: " + days);

        // Mencetak salah satu dari objek days menggunakan key
        System.out.println("Salah satu objek days: " + days.get(4));
    }
}
