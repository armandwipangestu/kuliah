package com.pemrograman2.tugas;

import java.util.Scanner;
import com.pemrograman2.tugas.GlobalVariable;

public class ProcedurDanFungsi {
    static GlobalVariable gv = new GlobalVariable();
    public static void inputNilai() {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukan Nama Mahasiswa: ");
        gv.setNamaMahasiswa(input.nextLine());

        System.out.print("Masukan Nilai Tugas: ");
        gv.setNilaiTugas(input.nextDouble());

        System.out.print("Masukan Nilai UTS: ");
        gv.setNilaiUts(input.nextDouble());

        System.out.print("Masukan Nilai UAS: ");
        gv.setNilaiUas(input.nextDouble());

        gv.setNilaiAkhir(
                (gv.getNilaiTugas() * 0.3) +
                (gv.getNilaiUts() * 0.35) +
                (gv.getNilaiUas() * 0.35)
        );
    }

    public static void main(String[] args) {
        inputNilai();
/*        System.out.println("Nilai Tugas Anda: " + gv.getNilaiTugas());
        System.out.println("Nilai UTS Anda: " + gv.getNilaiUts());
        System.out.println("Nilai UAS Anda: " + gv.getNilaiUas());*/
        System.out.println("=========================");
        System.out.println("Nilai Akhir " + gv.getNamaMahasiswa() + " Adalah: " + gv.getNilaiAkhir());
    }
}
