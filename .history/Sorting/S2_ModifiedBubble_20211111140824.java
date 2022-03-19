
//Algo
/*
1        Repeat step 2,3,4 for round = 1,2,3,...(N-1);
2        flag=0
3                Repeat for i=0,1,2,...,(N-1-round);
                        if A[i]>A[i+1]{
                                swap A[i] and A[i+1];
                                set flag =1
                        }
4                        if flag == 0 return
5        Return;
*/
public class S2_ModifiedBubble {
        public static void bubble_sort(int arr[],int n) {
                int round,i,temp,flag;
                for (round = 0; round <= n-1; round++) {
                        flag=0;
                        for (i= 0; i < n-1-round; i++) {
                                if (arr[i]>arr[i+1]) {
                                        ++flag;
                                        temp = arr[i];
                                        arr[i]=arr[i+1];
                                        arr[i+1]=temp;
                                }
                                
                        }if (flag==0) {
                                System.out.println("Round : "+round);
                                return;
                       }
                }
        }
        public static void main(String[] args) {
                int arr[] = {34,23,56,12,89,0};
                int i,n=arr.length;
                bubble_sort(arr,n);
                System.out.println();
                for ( i = 0; i < arr.length; i++) {
                        System.out.println(arr[i]);
                }
        }
}
