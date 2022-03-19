#include <bits/stdc++.h>
using namespace std;
int main(){
  // To check if even
  // Usual : if(a % 2 == 0)...
  // Bits  : if(a & 1 == 0)...

  // To divide by 2
  // Usual : a = a / 2
  // Bits  : a = a >> 1

  // To multiply by 2
  // Usual : a = a * 2
  // Bits  : a = a << 1

  // To swap 2 no.s -> a = 5 , b = 7
  /*Usual: temp = a;
           a = b;
           b = temp;
  */
  /*Bits: a = a^b;
          b = a^b;
          a = a^b;
  */
 
  // Find number of bits to change a to b -> while k saath( n & n-1 )use krna hai  // to be coded later Doubt
  // Revise bit masking / imp 
  
  // Find the Different element -> [5, 4, 1, 4, 3, 5, 1]
  // Approach : int res = 0; res = 5^4^1^4^3^5^1;

// Doubt Resolved But read it once
  // Find the Different element -> [5, 4, 1, 4, 3, 5, 1, 2]
  // Approach : int res = 0; res = 5^4^1^4^3^5^1^2 ; which gives value of 3^2 -> divide the array on the basis of { 3^2, iska jo (value) xor aaya , us bit k liye; kyu ki wahi differenciating factor hoga}
  /*
      3^2 = 11 ^ 10(in bits) = 01
      so , jiska las bit 0 hai , au jiska 1 hai uss basis pe differ krlo array ko
      [5, 4, 1, 4, 3, 5, 1, 2]
      becomes: [ 4, 4, 2 ](for 0 bit) and [5, 1, 3, 5, 1](for 1 bit)
          ab isme exor maar lo pichle question jaisa
      [4 ,4 ,2] -> 2 and [5 ,1 ,3 ,5 ,1] -> 3
  */


 // Find the element which is present once, while others are present k times
 /*
  1. Since there are 32 bits used to store an integer array , take an integer array of size 32, initialized from 0.
  2. convert elements to binary one by one, and add it to the array according to the sequence of bits.
    Example, 5 -> 101, so a[0] += 1; a[1] += 0; a[2] +=1;
  3. After the whole loop is covered, divide each element by k using % ; (i.e. a[i] = a[i] % k ;).
  4. Convert the array to integer(since array represents the bits here). Thats the answer. 
 */

}