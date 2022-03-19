// package Array;

import java.util.Scanner;

//     KADANE algo

public class Kadane {
  public static void main(String[] args) {
    int n = 0;
    Scanner sc = new Scanner(System.in);

    System.out.println("Input the length of Array.");
    n = sc.nextInt();
    int[] arr = new int[n];
    System.out.println("Input values:");
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
    sc.close();

    int maxSum = 0;
    int currSum = 0;

    for (int i = 0; i < arr.length; i++) {
      currSum += arr[i];
      if (currSum > 0) {

        if (currSum > maxSum) {
          maxSum = currSum;
        }
      } else {
        currSum = arr[i];
      }
    }

    System.out.println("MAX SUM of SUBARRAY IS: " + maxSum);
  }
}
