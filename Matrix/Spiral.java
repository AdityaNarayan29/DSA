import java.util.Scanner;

public class Spiral {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Input row and column");
    int m = sc.nextInt();
    int n = sc.nextInt();
    int arr[][] =  new int [n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        arr[i][j]=sc.nextInt();
      }
    }
    sc.close();

    // Algo
    /*
      top->     1   2   3   4
                5   6   7   8
                9   10  11  12
      down->    13  14  15  16
                ^            ^
              left          right

      4 pointers -> top,down,left,right; 
      4 kinds of iterations;
    */
    int top,down,left,right, dir=0; 
    top = 0; down = n-1;
    left = 0; right = m-1;

/*  Directions (dir) 
          0 = > ;
          1 = v ;
          2 = < ;
          3 = ^ ;
*/
    while ( left <= right && top <= down ) {
      
      if(dir==0){
        for (int i = left; i <= right; i++) {
          System.out.print(arr[top][i] + " ");
        }
        top++;
      }else if(dir==1){
        for (int i = top; i <= down; i++) {
          System.out.print(arr[i][right] + " ");
        }
        right--;
      }else if(dir ==2){
        for (int i = right; i >= left; i--) {
          System.out.print(arr[down][i] + " ");
        }
        down--;
      }else if(dir ==3){
        for (int i = down; i >= top; i--) {
          System.out.print(arr[i][left] + " ");
        }
         left++;
      }
      dir = (dir+1)%4;
    }
  }
}
