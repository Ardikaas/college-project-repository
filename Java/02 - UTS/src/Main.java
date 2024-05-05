public class Main {
  public static void main(String[] args) throws Exception {
    Vehicle kendaraan = new Vehicle("Bis", 2022);
    kendaraan.displayInfo();
    kendaraan.move();
    kendaraan.stop();

    Car mobil = new Car("Nissan", 2015, 2500, 100, 980000000);
    mobil.engineInfo();
    mobil.honk();
    mobil.displayPrice();

    Bike sepeda = new Bike("Polygon", 2022, "Road Bike", 6, 2500000);
    sepeda.specs();
    sepeda.bell();
    sepeda.displayPrice();
  }
}
