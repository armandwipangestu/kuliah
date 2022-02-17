package com.pemrograman2.pertemuan5;

class OperatorLogika {
  public static void main(String[] args) {
    boolean a = true;
    boolean b = false;
    boolean c;

    c = a && b;
    System.out.println("True && False = " + c);

    c = a || b;
    System.out.println("True || False = " + c);

    System.out.println("Negasi, !true = " + !a);
  }
}
