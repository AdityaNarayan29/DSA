// package Array;

import java.util.*;

public class Maxmin {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int[] arr = new int[5];
                int max = 0, min = 34000;
                
                for (int i = 0; i < arr.length; i++) {
                        arr[i] = sc.nextInt();
                }
                sc.close();

                // naive approach
                // for (int i = 0; i < arr.length; i++) {
                // if(max<=arr[i]){
                // max=arr[i];
                // }
                // if(min>=arr[i]){
                // min=arr[i];
                // }
                // }

                //optimised approach - 2 2 krke check kro; Aadha time lega;
                int i;
                if (arr.length % 2 != 0) {
                        max = arr[0];
                        min = arr[0];
                        i = 1;
                }else{
                        if (arr[1] <= arr[0]) {
                                min = arr[1];
                                max = arr[0];
                        }else{
                                min = arr[0];
                                max = arr[1];
                        }
                        i = 2;
                }
                while(i<arr.length-1){
                        if(arr[i]>arr[i+1]){
                                if(arr[i]>max){
                                        max = arr[i];
                                }
                                if(arr[i+1]<min){
                                        min = arr[i+1];
                                }
                        }else{
                                if(arr[i+1]>max){
                                        max = arr[i+1];
                                }
                                if(arr[i]<min){
                                        min = arr[i];
                                }
                        }
                        i=i+2;
                }
                System.out.println("Max value is : " + max);
                System.out.println("Min value is : " + min);
        }
}
