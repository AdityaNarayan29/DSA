package Array;
import java.util.Scanner;

public class MaxSumSubArray {
        public static void main(String[] args) {
                int n=0;
                Scanner sc = new Scanner(System.in);

                System.out.println("Input the length of first SET.");
                n = sc.nextInt();
                int [] arr1 = new int [n];
                System.out.println("Input values:");
                for (int i = 0; i < n; i++) {
                        arr1[i] = sc.nextInt();
                }

        }
}
