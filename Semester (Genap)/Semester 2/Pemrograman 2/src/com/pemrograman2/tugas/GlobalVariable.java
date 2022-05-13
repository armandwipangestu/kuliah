package com.pemrograman2.tugas;

public class GlobalVariable {
    private static String NAMA_MAHASISWA;
    private static double NILAI_TUGAS, NILAI_UTS,
            NILAI_UAS, NILAI_AKHIR;

    public static double getNilaiTugas() {
        return NILAI_TUGAS;
    }

    public static void setNilaiTugas(double nilaiTugas) {
        NILAI_TUGAS = nilaiTugas;
    }

    public static double getNilaiUts() {
        return NILAI_UTS;
    }

    public static void setNilaiUts(double nilaiUts) {
        NILAI_UTS = nilaiUts;
    }

    public static double getNilaiUas() {
        return NILAI_UAS;
    }

    public static void setNilaiUas(double nilaiUas) {
        NILAI_UAS = nilaiUas;
    }

    public static double getNilaiAkhir() {
        return NILAI_AKHIR;
    }

    public static void setNilaiAkhir(double nilaiAkhir) {
        NILAI_AKHIR = nilaiAkhir;
    }

    public static String getNamaMahasiswa() {
        return NAMA_MAHASISWA;
    }

    public static void setNamaMahasiswa(String namaMahasiswa) {
        NAMA_MAHASISWA = namaMahasiswa;
    }
}
