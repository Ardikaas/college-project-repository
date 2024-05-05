public class Vehicle {
  protected String brandName;
  protected int year;

  public Vehicle(String brandName, int year) {
    this.brandName = brandName;
    this.year = year;
  }

  public void move() {
    System.out.println("Kendaraan berjalan kedepan.");
  }

  public void stop() {
    System.out.println("Kendaraan berhenti.");
  }

  public void displayInfo() {
    System.out.println("Merk Kendaraan: " + brandName);
    System.out.println("Keluaran Tahun: " + year);
  }
}
