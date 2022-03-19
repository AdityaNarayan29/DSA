import java.util.Scanner;
public class SearchE {
  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    System.out.println("Input Value to search");
    int val = sc.nextInt();
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
        if(arr[i][j]==val)
          System.out.print(arr[i][j]+" is at index "+i+" "+j+".");
      }System.out.println();
    }
    sc.close();
  }
}
