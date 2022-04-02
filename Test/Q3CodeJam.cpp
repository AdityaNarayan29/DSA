// 4
// 4
// 6 10 12 8
// 6
// 5 4 5 4 4 4
// 10
// 10 10 7 6 7 4 4 5 7 4
// 1
// 10

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> m;
  n = 0;
  while (m > n)
  {
    cout << "Case #" << n + 1 << ": ";
    int k;cin >> k;
    int arr[k];
    for (int i = 0; i < k; i++)cin >> arr[i];
    sort(arr, arr + k);
    int j=0;
    for (int i = 0; i < k; i++){
      if(arr[i]>j){
        j++;
      }
    }

    cout <<j<< endl;
    n++;
  }
}