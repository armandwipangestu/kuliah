package com.pemrograman2.pertemuan5;

class OperatorBitwise {
  public static void main(String[] args) {

    // Operator Bitwise adalah operator khusus yang berfungsi
    // untuk menangani proses logika untuk bilangan biner. Cara
    // kerja dari Operator Bitwise sama seperti Operator Logika,
    // tapi operasinya dilakukan bit-demi-bit (bit = binary digit).
    // Dalam operasi ini, bilangan bulat yang dijadikan operand akan
    // dikonversi ke bentuk biner terlebih dahulu. Selanjutnya, operator
    // logikanya dilakukan antar bit.
    //
    // Dalam penerpannya sendiri memang hampir tidak pernah menggunakannya.
    // Karena memang dalam penggunaan Operator Bitwise ini hanya ketika sedang
    // membuat program yang langsung berkaitan dengan pemrosesan bilangan biner.
    //
    // Operator:        Keterangan:
    // &                Bitwise AND (akan bernilai 1 jika kedua bit bernilai 1)
    // |                Bitwise OR (akan bernilai 1 jika salah satu bit bernilai 1)
    // ^                Bitwise XOR (akan bernilai 1 jika salah satu bit bernilai 1, tapi bukan keduanya)
    // ~                Bitwise NOT (bit bernilai 0 akan menjadi 1 dan bit bernilai 1 akan menjadi 0)
    // <<               Bitwise Shift Left (menggeser nilai bit ke arah kiri)
    // >>               Bitwise Shift Right (menggeser nilai bit ke arah kanan)

    // Contoh:
    // Disini value dari variable 'a' adalah 60, yang dimana dalam bit seperti ini:
    // ┌────────────────────────────────────────────────────┐
    // │  128  │  64  │  32  │  16  │  8  │  4  │  2  │  1  │
    // └────────────────────────────────────────────────────┘
    //     0      0      1      1      1     1     0     0
    //
    //  Penjelasan:
    //  32 + 16 + 8 + 4 = 60

    int a = 60;

    // Disini value dari variable 'b' adalah 13, yang dimana dalam bit seperti ini:
    // ┌────────────────────────────────────────────────────┐
    // │  128  │  64  │  32  │  16  │  8  │  4  │  2  │  1  │
    // └────────────────────────────────────────────────────┘
    //     0      0      0      0      1     1     0     1
    //
    //  Penjelasan:
    //  8 + 4 + 1 = 13
    int b = 13;

    // Disini value dari variable 'c' adalah hasil dari proses Operasi Bitwise,
    // pada kasus ini, operator yang digunakan adalah & atau AND. Seperti penjelasan
    // sebelumnya Operator & atau AND ini:
    // > Bitwise OR (akan bernilai 1 jika kedua bit bernilai 1)
    //
    // bit 'a' = 0 0 1 1 1 1 0 0
    // bit 'b' = 0 0 0 0 1 1 0 1
    //           ──────────────── &
    // bit 'c' = 0 0 0 0 1 1 0 0
    //
    // yang dimana dalam bit seperti ini:
    // ┌────────────────────────────────────────────────────┐
    // │  128  │  64  │  32  │  16  │  8  │  4  │  2  │  1  │
    // └────────────────────────────────────────────────────┘
    //     0      0      0      0      1     1     0     0
    //
    // Penjelasan:
    // 8 + 4 = 12
    //
    // > Value dari variable 'c' == 12
    int c = 0;
    c = a & b;

    System.out.println("a & b = " + c);
  }
}
