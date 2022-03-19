package Array;

import java.util.Scanner;

public class CyclicallyRotate {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int size=0;
                System.out.println("Input the size of the array:");
                size=sc.nextInt();
                int [] arr = new int [size];
                for (int i = 0; i < arr.length; i++) {
                        arr[i]= sc.nextInt();
                }

                //Cycle ka jugaad
                int last = arr[arr.length-1];

                for (int i = arr.length-1; i > 1 ; i--) {
                        arr[i] = arr[i-1];
                }
                arr[0]=last;
                sc.close();
                
                for (int i = 0; i < arr.length; i++) {
                        System.out.println(arr[i]);
                }
        
        }
}