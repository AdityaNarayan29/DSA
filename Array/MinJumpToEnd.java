// Java program to find Minimum
// number of jumps to reach end
// Returns minimum number of
// jumps to reach arr[h] from arr[l]
// Base case: when source
// and destination are same
// When nothing is reachable
// from the given source
// Traverse through all the points
// reachable from arr[l]. Recursively
// get the minimum number of jumps
// needed to reach arr[h] from these
// reachable points.

// import java.util.*;
// import java.io.*;

public class MinJumpToEnd {

  // Recursion
  // static int minJumps(int arr[], int l, int h) {
  //   if (h == l)
  //   return 0;
    
  //   if (arr[l] == 0)
  //   return Integer.MAX_VALUE;
    
  //   int min = Integer.MAX_VALUE;
  //   for (int i = l + 1; i <= h && i <= l + arr[l]; i++) {
  //     int jumps = minJumps(arr, i, h);
  //     if (jumps != Integer.MAX_VALUE && jumps + 1 < min)
  //     min = jumps + 1;
  //   }
  //   return min;
  // }
  
  //-------------------MY WAY--------------------//
  // static int minJumps(int arr[], int l, int h){
    //   if (h == l)
    //     return 0;
    
    //   if (arr[l] == 0)
    //     return Integer.MAX_VALUE;
    
    //   int min = Integer.MAX_VALUE;
    //   for(int i=0;i<=l;i++){
      //     ',' // Code missing
      //   }
      //   return -1;
      // }
      
      // Dynamic Programming
      static int minJumps(int arr[], int l, int h) {
        int dp[] = new int [arr.length];
        for (int i = 0; i < arr.length; i++) {
          dp[i] = Integer.MAX_VALUE;
        }
        dp[0] = 0;
        for(int i=0 ;i<dp.length ;i++){
          for (int j = 0; j < i; j++) {
            if(dp[j]!= Integer.MAX_VALUE && (arr[j]+j>=i)){
              if(dp[j] + 1 < dp[i]){
                dp[i] = dp[j]+1;
              }
            }
          }
        }
        System.out.println(dp[dp.length-1]);
        return dp[dp.length-1];
      }
      
      // Driver code
      public static void main(String args[]) {
        int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
        int n = arr.length;
    System.out.print("Minimum number of jumps to reach end is "
        + minJumps(arr, 0, n - 1));
  }
}
