import java.util.Scanner;
// import java.util.Spliterator.OfPrimitive;

public class Transpose {
  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    System.out.println("Input row and column");
    int m = sc.nextInt();
    int n = sc.nextInt();
    int arr[][] =  new int [n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        arr[i][j]=sc.nextInt();
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          System.out.print(arr[i][j]+" ");
      }System.out.println();
    }
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n; i++) {
          System.out.print(arr[i][j]+" ");
      }System.out.println();
    }
    sc.close();
  }
}
