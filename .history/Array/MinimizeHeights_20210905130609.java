package Array;

import java.util.Scanner;

public class MinimizeHeights {
        public static void main(String[] args) {
                int max = 0;
                int min = 65256;


                int n=0;
                Scanner sc = new Scanner(System.in);

                System.out.println("Input the length of first SET.");
                n = sc.nextInt();
                int [] arr = new int [n];
                System.out.println("Input values:");
                for (int i = 0; i < n; i++) {
                        arr[i] = sc.nextInt();
                }

                sc.close();

        }
}
