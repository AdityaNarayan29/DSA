import java.util.Scanner;

public class StringsWithSwitch {

  static String[] mobile = { "Samsung S8", "One Plus 8", "Sony Experia" };
  static String[] tv = { "VU 55 Inches", "Sony TV", "Samsung Tv" };
  static String[] electronics = { "Speakers", "DSLR Cameras", "Security Cameras" };

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    String str = sc.next();
    // String str1 = "mobile";
    // String str2 = "tv";
    // String str3 = "electronics";

    // System.out.println(str);
    // if (str.equals(str1)) {
    //   for (int i = 0; i < tv.length; i++) {
    //     System.out.println(tv[i]);
    //   }
    // }
    // else if (str.equals(str2)) {
    //   for (int i = 0; i < tv.length; i++) {
    //     System.out.println(tv[i]);
    //   }
    // }
    // else if (str.equals(str3)) {
    //   for (int i = 0; i < tv.length; i++) {
    //     System.out.println(tv[i]);
    //   }
    // }
    // else{
    //   System.out.println("Wrong input");
    // }
    sc.close();
    
    switch (str) {
      case "mobile":
      for (int i = 0; i < mobile.length; i++) {
        System.out.println(mobile[i]);
      }
      break;
      case "tv":
      for (int i = 0; i < tv.length; i++) {
        System.out.println(tv[i]);
      }
      break;
      case "electronics":
      for (int i = 0; i < electronics.length; i++) {
        System.out.println(electronics[i]);
      }
      break;
      
      default:
      System.out.println("Wrong input");
        break;
    }
  }
}
