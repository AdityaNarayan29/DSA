#include <BitAndMaths/std++.h>
using namespace std;

int main(){
  // Number of trailing zeros in a factorial (i.e. 5! = 120 -> Answer = 1(no. of zeros at the end of an int))
  // Approach : count no of 5s and 2s ; since 5s are always smaller in no, count 5s is benefitial.
  // if an no is divisible by 25, it carries 25s, considering we will hav eto cout differently for 25,125,625...
  // No. of trailing zeros will be = |n/5|+|n/25|+|n/125|+|n/625|+.....
  // Code
  /*    Given n
    for(int i = 5; i<=n ;i+5){
      res = res + n/i ;
    }return res;
  */
}