import java.util.*;

public class AplusB {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int a = in.nextInt();
      int b = in.nextInt();
      System.out.println(a + b);
    } catch (NumberFormatException e) {
      System.out.println("Invalid input");
    }
  }
}