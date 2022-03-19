package Array;
import java.util.Scanner;

public class MaxSumSubArray {
        public static void main(String[] args) {
                int n1=0, n2=0;
                Scanner sc = new Scanner(System.in);

                System.out.println("Input the length of first SET.");
                n1 = sc.nextInt();
                int [] arr1 = new int [n1];
                System.out.println("Input values:");
                for (int i = 0; i < n1; i++) {
                        arr1[i] = sc.nextInt();
                }

        }
}
