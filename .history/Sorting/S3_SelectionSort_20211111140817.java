

//Algo
/*
        Select the smallest value in the list;
        Swap smallest value with the first value of the list;
        Again select the smallest value in the list (exclude first value);
        Swap this value from 2nd element in the list;
        Keep doing n-1 times to place all n values in the sorted order;
*/

public class S3_SelectionSort {
        static int min(int arr[],int k,int n) {

                int loc=k,min=arr[k];

                for (int i = k; i < n; i++) {
                        if(min > arr[i]){
                               // min = arr[i];
                                loc = i;
                                // System.out.println("     hadd " + arr[loc]);
                        }
                }
                // System.out.println("hippa " + arr[loc]);
                return(loc);
        }
        public static void main(String[] args) {
                int [] arr = {9,8,7,6,5,4,3,2,1};
                int loc,k=0,n=arr.length,temp=0;
                
                for (k=0; k < n; k++) {
                        loc = min(arr, k, n);
                        temp = arr[k];
                        arr[k] = arr[loc];
                        arr[loc] = temp;
                }
                for(k = 0;k < n;k++){
                        System.out.println(arr[k]);
                }
        }
}