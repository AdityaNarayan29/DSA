import java.util.Scanner;

public class MergeTwo {
  static void MergeArr(int arr1[], int arr2[], int arrM[]) {
    int n = 0, k = 0, m = 0;
    while (n < arr1.length && m < arr2.length) {
        if (arr1[n] < arr2[m]) {
          arrM[k] = arr1[n];
          n++;
          k++;
          System.out.println(n+"_"+k);
        } else if (arr1[n] < arr2[m]) {
          arrM[k] = arr2[m];
          m++;
          k++;
          System.out.println(m+"_"+k);
      }else if(n <= arr1.length){
        while (m < arr2.length) {
          arrM[k]= arr2[m];
          k++;m++;
          System.out.println(m+"_"+k);
        }
      }else{
        while (n <= arr1.length) {
          arrM[k]= arr1[n];
          k++;n++;
          System.out.println(n+"_"+k);
        }
      // break;
    }
    for (int i = 0; i < arrM.length; i++) {
      System.out.print(arrM[i]+" ");
    }
    System.out.println("Compiler Madharchod hai");
    return;}
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Input size of array1");
    int n = sc.nextInt();
    System.out.println("Input size of array2");
    int m = sc.nextInt();

    int arr1[] = new int[n];
    int arr2[] = new int[m];

    for (int i = 0; i < arr1.length; i++) {
      arr1[i] = sc.nextInt();
    }
    for (int i = 0; i < arr2.length; i++) {
      arr2[i] = sc.nextInt();
    }
    sc.close();
    int arrM[] = new int[n + m];

    MergeArr(arr1, arr2, arrM);
  }
}