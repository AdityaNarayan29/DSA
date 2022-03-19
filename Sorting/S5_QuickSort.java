
/*
        //***Partitioning logic
        Partition(int l,int h){
                int pivot = a[l];
                int i = l;
                int j = h;

                while(i<j){
                        while(a[i]<=pivot){
                                i++;
                        }
                        while(a[j]>pivot){
                                j++;
                        }
                        if(i<j){
                                swap(a,i,j);
                        }
                }
                swap(a,j,l);
                return j;
        }

        //***QuickSort Logic
        QuickSort(l,h){
                if(l<h){
                        int pivot = Partition(l,h);
                        QuickSort(l,pivot-1);
                        QuickSort(pivot+1,high);
                }
        }
*/
import java.util.Scanner;
public class S5_QuickSort {
        static void swap (int[] a,int i,int j){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
        }
        static int Partition(int[] a,int l,int h){
                int pivot = a[l];
                int i = l;
                int j = h;

                while(i<j){
                        while(a[i]<=pivot)i++;
                        while(a[j]>pivot)j--;
                        if(i<j){
                                swap(a,i,j);
                        }
                }
                swap(a,j,l);
                return j;
        }
        static void QuickSort(int[] a,int l, int h){
                if(l<h){
                        int pivot = Partition(a,l,h);
                        QuickSort(a,l,pivot-1);
                        QuickSort(a,pivot+1,h);
                }  
        }
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                System.out.println("Input the size of ");
                int n = sc.nextInt();
                int [] a = new int [n];

                System.out.println("Input values:");
                for (int i = 0; i < n; i++) {
                        a[i] = sc.nextInt();
                }
                int l=0 , h=a.length-1;
                QuickSort(a, l, h);

                for (int i = 0; i <= a.length-1; i++) {
                        System.out.print(a[i]+" ");
                }

                sc.close();
        }
}
