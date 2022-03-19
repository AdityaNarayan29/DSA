import java.util.*;
import java.lang.*;
import java.io.*;

public class Arraylist {
  public static void main(String[] args) {
    // ArrayList<String> cars = new ArrayList<String>();
    // cars.add("Volvo");
    // cars.add("BMW");
    // cars.add("Ford");
    // cars.add("Mazda");
    // for (int i = 0; i < cars.size(); i++) {
    //   System.out.println(cars.get(i));
    // }


    ArrayList<Integer> myNumbers = new ArrayList<Integer>();
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int temp =0;
    for (int i = 0; i < n; i++) {
      temp = sc.nextInt();
      myNumbers.add(temp);
    }
    // myNumbers.add(15);
    // myNumbers.add(20);
    // myNumbers.add(25);
    for (int i : myNumbers) {
      System.out.println(i);
    }
    
  }

}
