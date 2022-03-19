package Array;

import java.util.Scanner;

public class MinimizeHeights {
        public static void main(String[] args) {
                int max = 0;
                int min = 65256;


                int n=0;
                Scanner sc = new Scanner(System.in);

                System.out.println("Input the no.of towers: ");
                n = sc.nextInt();
                int [] arr = new int [n];
                System.out.println("Input values:");
                for (int i = 0; i < n; i++) {
                        arr[i] = sc.nextInt();
                }
                
                int k=0;
                System.out.println("Input the integer: ");
                k = sc.nextInt();
                sc.close();
                
                for (int i = 0; i < arr.length; i++) {
                        if(arr[i]-k<=0){
                                arr[i]+=k;
                        }else{
                                arr[i]-=k;
                        }
                        if(arr[i]<min){
                                min = arr[i];
                        }
                        if(arr[i]>max){
                                max = arr[i];
                        }
                }
                
                System.out.println();
                
                for (int i = 0; i < n; i++) {
                        System.out.print(arr[i]+" ");
                }
                
                System.out.println();
                System.out.println(max - min);
        }
}
