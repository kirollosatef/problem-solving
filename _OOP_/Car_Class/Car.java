package Car_Class;

public class Car {
  // Encapsulation: that means 

  String brand;
  String model;
  String color;
  Integer maxSpeed;
  Double price;

  // Constructor
  public Car(String brand, String model, String color, Integer maxSpeed, Double price) {
    System.out.println("Car object created");
    this.brand = brand;
    this.model = model;
    this.color = color;
    this.maxSpeed = maxSpeed;
    this.price = price;
  }

  public void startEngine() {
    System.out.println("Engine started");
  }

  public void stopEngine() {
    System.out.println("Engine stopped");
  }
}