// Java Package:
// Berfungsi untuk mengatur atau mengelola Class - Class Java kedalam
// namespaces, menyediakan nama unik untuk setiap jenis yang ditulisnya.
// Kelas - kelas dalam paket yang sama dapat saling mengakses private package
// dan protected members.
package com.pemrograman2.pertemuan2;

// Keyword import:
// Berfungsi untuk memanggil library, pada kasus ini kita memanggil library
// java.util.Scanner yang berfungsi untuk menangkap input-an program.
import java.util.Scanner;

// Class DataMahasiswa:
// Penamaan Class Pada Bahasa Pemrograman Java harus sama dengan nama File nya.
// Jika tidak maka akan error.
public class DataMahasiswa {

    // static void main():
    // Keyword ini merupakan function atau procedure utama yang akan di jalankan
    // ketika suatu program java berjalan pertama kali
    public static void main(String[] args) {

        // String nama, alamat:
        // Disini kita membuat 2 variable yang namanya adalah "nama" dan "alamat".
        // Variable ini menggunakan tipe data String dikarenakan akan menampung
        // text atau character dan juga nomer untuk variable alamat
        String nama, alamat;

        // int usia:
        // Variable usia menggunakan tipe data integer dikarenakan akan menampung
        // nilai angka seperti "19" atau "20"
        int usia;

        // double ipk:
        // Variable ipk menggunakan tipe data double dikarenakan pada penilaian
        // IPK mungkin saja terdapat nilai koma (","). Tipe data double ini
        // dapat menampung bilangan koma atau floating, namun yang membedakannya
        // dengan floating adalah kapasistas penyimpanan nya. Double ini lebih
        // besar kapasitas penyimpanan nya dibandingkan floating.
        double ipk;

        // Scanner keyboard = new Scanner(System.in);
        // Pada command ini kita melakukan inisialisasi atau instance dari library
        // "java.util.Scanner" tadi yang dimana menggunakan nama keyboard untuk
        // mengaksesnya.
        Scanner keyboard = new Scanner(System.in);

        // Menampilkan Text "### Identitas Mahasiswa ####".
        System.out.println("### Identitas Mahasiswa ###");

        // Menampilkan Text Beserta form input-an Nama: 
        // dari library "java.util.Scanner" dan hasil input-an nya dimasukan
        // kedalam variable nama.
        System.out.print("Nama: ");
        nama = keyboard.nextLine();

        // Menampilkan Text Beserta form input-an Alamat: 
        // dari library "java.util.Scanner" dan hasil input-an nya dimasukan
        // kedalam variable alamat.
        System.out.print("Alamat: ");
        alamat = keyboard.nextLine();

        // Menampilkan Text Beserta form input-an Usia: 
        // dari library "java.util.Scanner" dan hasil input-an nya dimasukan
        // kedalam variable usia.
        System.out.print("Usia: ");
        usia = keyboard.nextInt();

        // Menampilkan Text Beserta form input-an IPK: 
        // dari library "java.util.Scanner" dan hasil input-an nya dimasukan
        // kedalam variable IPK.
        System.out.print("IPK: ");
        ipk = keyboard.nextDouble();

        // Menampilkan Text "===================="
        System.out.println("====================");

        // Menampilkan Text Hasil dari input-an sebelumnya
        System.out.println("Nama: " + nama);
        System.out.println("Alamat: " + alamat);
        System.out.println("Usia: " + usia);
        System.out.println("IPK: " + ipk);
    }
}
