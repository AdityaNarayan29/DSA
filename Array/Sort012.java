// package Array;

public class Sort012 {
        public static void main(String[] args) {
                int h, m, l;//high,mid,low
                int[] arr = { 0,1,0,2,0,1,2,1,2,1,2,1,2,0,1,2,0,1,2,0,1,2,0 };
                for (int i = 0; i < arr.length; i++) {
                        System.out.print(arr[i]);
                }
                l = 0;
                m = 0;
                h = arr.length-1;

                while (m <= h) {
                        if (arr[m] == 0) {
                                // swap l and m
                                int temp = arr[l];
                                arr[l] = arr[m];
                                arr[m] = temp;
                                l++;
                                m++;
                        } else if (arr[m] == 1) {
                                m++;
                        } else {
                                // swap m and h;
                                int temp = arr[h];
                                arr[h] = arr[m];
                                arr[m] = temp;
                                h--;
                        }
                }

                // counter can work in O(n)
                System.out.println();

                for (int i = 0; i < arr.length; i++) {
                        System.out.print(arr[i]);
                }
        }
}