//3
// 300000 200000 300000 500000
// 300000 200000 500000 300000
// 300000 500000 300000 200000
// 1000000 1000000 0 0
// 0 1000000 1000000 1000000
// 999999 999999 999999 999999
// 768763 148041 178147 984173
// 699508 515362 534729 714381
// 949704 625054 946212 951187
//Noob approach
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> m;
  n = 0;
  while (m > n)
  {
    cout << "Case #" << n + 1 << ":" << endl;
    n++;
    int arr1[4], arr2[4], arr3[4];
    for (int i = 0; i < 4; i++)
      cin >> arr1[i];
    for (int i = 0; i < 4; i++)
      cin >> arr2[i];
    for (int i = 0; i < 4; i++)
      cin >> arr3[i];

    int min1 = 0, min2 = 0, min3 = 0, min4 = 0;
    min1 = min(arr1[0], arr2[0]);
    min1 = min(min1, arr3[0]);
    min2 = min(arr1[1], arr2[1]);
    min2 = min(min2, arr3[1]);
    min3 = min(arr1[2], arr2[2]);
    min3 = min(min3, arr3[2]);
    min4 = min(arr1[3], arr2[3]);
    min4 = min(min4, arr3[3]);
    if (min1 + min2 + min3 + min4 >= 1000000)
    {
      int extra = min1 + min2 + min3 + min4 - 1000000;
      extra = extra - min1 % 100000;
      min1 = min1 / 100000;
      min1 = min1 * 100000;
      extra = extra - min2 % 100000;
      min2 = min2 / 100000;
      min2 = min2 * 100000;
      extra = extra - min3 % 100000;
      min3 = min3 / 100000;
      min3 = min3 * 100000;
      extra = extra - min4 % 100000;
      min4 = min4 / 100000;
      min4 = min4 * 100000;

      if (min4 > extra)
      {
        min4 = min4 - extra;
        extra = 0;
      }else if(min4>extra/2){
        min4 = min4 - extra;
        extra /= 2;
      }
      if (min3 > extra)
      {
        min3 = min3 - extra;
        extra = 0;
      }else if(min3>extra/2){
        min3 = min3 - extra;
        extra /= 2;
      }
      if (min2 > extra)
      {
        min2 = min2 - extra;
        extra = 0;
      }else if(min2>extra/2){
        min2 = min2 - extra;
        extra /= 2;
      }
      if (min1 > extra)
      {
        min1 = min1 - extra;
        extra = 0;
      }else if(min1>extra/2){
        min1 = min1 - extra;
        extra /= 2;
      }
      cout << min1 << " " << min2 << " " << min3 << " " << min4 << endl;
    }
    else
    {
      cout << "IMPOSSIBLE" << endl;
    }
  }
}
