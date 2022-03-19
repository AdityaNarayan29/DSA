// package Array;

import java.util.Scanner;

/**
 * Reverse
 */
public class Reverse {

        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int [] arr = new int [5];
                int [] rev = new int [5];
                
                for (int i = 0; i < arr.length; i++) {
                        arr[i]= sc.nextInt();
                }
                for (int i = 0; i < arr.length; i++) {
                        rev[i]=arr[arr.length-i-1];
                        System.out.println(rev[i]);
                }
                sc.close();
        }
}