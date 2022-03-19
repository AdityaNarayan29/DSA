import java.util.Scanner;
public class FindDuplicate1 {
  // find duplicate in an array of N+1 Integers

  static int findDuplicate(int[] arr){
    int n = arr.length;
    int freq[] = new int[n+1];
    for (int i = 0; i < n; i++) {
      if (freq[arr[i]] == 0) {
          freq[arr[i]] += 1;
      }else{
        return arr[i];
      }
    }
    return -1;
  }

  // One more approach can be (no extra space used) : 
  /*
      Index:  0 1 2 3 4 5 => N = 6
      Input:  0 1 2 3 2 3
      Algo:  0 7 14 21 2 3 => added N to the index "arr[i]" when  " i " is found in the array
             0 1  2  3 0 0 => divided "arr[i]/N" => became frequency table 
      Output: for(int i=0;i<n;i++){
                if(arr[i]>=2){
                        sysout("repeated term = "+i);
                      }
              }
  */
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int []arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }

    System.out.println(findDuplicate(arr));

    sc.close();
  }
}
