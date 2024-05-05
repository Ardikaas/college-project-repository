public class Bike extends Vehicle {
  private String type;
  private int numberOfGears;
  private int price;

  public Bike(String brandName, int year, String type, int numberOfGears, int price) {
    super(brandName, year);
    this.type = type;
    this.numberOfGears = numberOfGears;
    this.price = price;
  }

  public void bell() {
    System.out.println("Sepeda membunyikan lonceng");
  }

  public void specs() {
    System.out
        .println("Sepeda " + brandName + " dengan tipe " + type + ", memiliki " + numberOfGears + " tingkat kecepatan");
  }

  public void displayPrice() {
    System.out.println("Harga speda " + brandName + " adalah Rp. " + price);
  }
}
