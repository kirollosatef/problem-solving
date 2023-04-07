package Car_Class;

// import java.lang.*;

public class Main {
  public static void main(String[] args) {
    Car ford = new Car("Ford", "Mustang", "Red", 250, 30000.0);
    System.out.println(ford.brand);
    System.out.println(ford.model);
    System.out.println(ford.color);
    System.out.println(ford.maxSpeed);
    System.out.println(ford.price);
    ford.startEngine();
    ford.stopEngine();
  }
}