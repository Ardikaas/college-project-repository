public class Main {
  public static void main(String[] args) throws Exception {
    Car mobil1 = new Car();

    mobil1.brandName = "Toyota";
    mobil1.color = "Merah";
    mobil1.year = 2020;

    mobil1.info();

    Car mobil2 = new Car();

    mobil2.brandName = "Ferarri";
    mobil2.color = "Merah";
    mobil2.year = 1999;

    mobil2.info();
  }
}
