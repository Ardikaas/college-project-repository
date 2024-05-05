public class Car extends Vehicle {
  private int cc;
  private int fuel;
  private int price;

  public Car(String brandName, int year, int cc, int fuel, int price) {
    super(brandName, year);
    this.cc = cc;
    this.fuel = fuel;
    this.price = price;
  }

  public void honk() {
    System.out.println("Mobil menekan klakson");
  }

  public void engineInfo() {
    System.out.println("Mobil " + brandName + ", memiliki kapasitas mesin " + cc
        + " cc, dan memiliki tangki bahan bakar sebesar " + fuel + " liter");
  }

  public void displayPrice() {
    System.out.println("Harga Mobil " + brandName + " adalah Rp. " + price);
  }
}
