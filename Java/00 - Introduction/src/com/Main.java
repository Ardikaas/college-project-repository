package com;

class Calculator {
  public double a = 1;
  public double b = 2;

  public void sumv() {
    System.out.println(a + b);
  }

  public int sumi(int a, int b) {
    return a + b;
  }

  public double sumd(double a, double b) {
    return a + b;
  }

  public String sums(String a, String b) {
    return a + b;
  }
}

public class Main {
  public static void main(String[] args) {
    Calculator calc = new Calculator();
    calc.sumv();
    System.out.println(calc.sumi(1, 2));
    System.out.println(calc.sumd(1, 2));
    System.out.println(calc.sums("1", "2"));
  }
}