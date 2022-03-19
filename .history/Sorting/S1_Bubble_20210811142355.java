package Sorting;
//Algo
/*
        Repeat for round = 1,2,3,...(N-1);
                Repeat for i=0,1,2,...,(N-1-round);
                        if A[i]>A[i+1]{
                                swap A[i] and A[i+1];
                        }
        Return;
*/
public class S1_Bubble {
        public static void bubble_sort(int arr[],int n) {
                int round,i,temp;
                for (round = 0; round <= n-1; round++) {
                        for (i= 0; i < n-1-round; i++) {
                                if (arr[i]>arr[i+1]) {
                                        temp = arr[i];
                                        arr[i]=arr[i+1];
                                        arr[i+1]=temp;
                                }
                        }
                }
        }
        public static void main(String[] args) {
                int arr[] = {34,23,56,12,89,78};
                int i,n=arr.length;
                bubble_sort(arr,n);
                for ( i = 0; i < arr.length; i++) {
                        System.out.println(arr[i]);
                }
        }
}
