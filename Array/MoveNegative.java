// package Array;

public class MoveNegative {
        public static void rearrange(int arr[], int n){
                
                // This is Partitioning approach - not shorting here , only shifting -ve to left
                int j = 0 ,temp;
                for (int i = 0; i < n; i++) {
                        if(arr[i] < 0){
                                if(i != j){
                                        temp = arr[i];
                                        arr[i] = arr[j];
                                        arr[j] = temp;
                                }
                                j++;
                        }
                }
        }
        public static void printArray(int arr[], int n){
                for (int i = 0; i < arr.length; i++) {
                        System.out.print(arr[i]+" ");
                }
        }
        public static void main(String[] args) {
                int arr[] = {-5,-4,4,5,-1,5,-1,-3};
                int n = arr.length;

                rearrange(arr, n);
                printArray(arr, n);
        }
}
