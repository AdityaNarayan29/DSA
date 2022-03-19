// package Array;

import java.util.*;

public class Kth {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int n=0,size=0;
                System.out.println("Input the size of the array:");
                size=sc.nextInt();
                int [] arr = new int [size];

                System.out.println("Input nth position for min and max in "+size);
                n=sc.nextInt();
                for (int i = 0; i < arr.length; i++) {
                        arr[i]= sc.nextInt();
                }
                sc.close();


                // naive approach
                // for (int i = 0; i < arr.length; i++) {
                //         for (int j = 0; j < arr.length; j++) {
                //                 if(arr[j] > arr[i]){
                //                         int temp = arr[j];
                //                         arr[j]=arr[i];
                //                         arr[i]=temp;
                //                 }
                //         }
                // }
                // System.out.println(n+"th Max value is : "+arr[size-n]);
                // System.out.println(n+"th Min value is : "+arr[n-1]);

                PriorityQueue<Integer> pq = new PriorityQueue<>();
                for (int i = 0; i < n; i++) {// here "n"th element is to be found from size "size"
                        pq.add(arr[i]);
                }
                for (int i = n; i < arr.length; i++) {
                        if(pq.peek()<arr[i]){
                                pq.poll(); // yaha pop ka java wala lagana hai
                                pq.add(arr[i]);
                        }
                }
                System.out.println(pq.peek());
        }
}
