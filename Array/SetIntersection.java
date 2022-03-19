// package Array;

import java.util.Scanner;

public class SetIntersection {
        static int [] Intersection (int arr1[],int arr2[],int arrout[]){
                int i=0,j=0,k=0;
                while (i<arr1.length && j<arr2.length) {
                        if(arr1[i]==arr2[j]){
                                arrout[k] = arr1 [i];
                                i++;j++;k++;
                        }else if(arr1[i]>arr2[j]){
                                j++;
                        }else{i++;}
                }
                return arrout;
        }
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

                System.out.println("Input the length of second SET.");
                n2 = sc.nextInt();
                int [] arr2 = new int [n2];
                System.out.println("Input values:");
                for (int i = 0; i < n2; i++) {
                        arr2[i] = sc.nextInt();
                }

                int nout;
                if(n1 < n2){
                        nout = n1;
                }else nout = n2;
                int [] arrout = new int [nout];
                Intersection(arr1, arr2, arrout);
                System.out.println();
                for (int i = 0; i < nout; i++) {
                        if(arrout[i]==0){
                                if(i==0){
                                        System.out.print(arrout[i]+" ");
                                }
                        }
                        else{
                                System.out.print(arrout[i]+" ");
                        }
                }
                sc.close();
                
        }
}
