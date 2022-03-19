// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int end = n - 1, start = 0;
  while (end > start)
  {
    swap(arr[end], arr[start]);
    // int temp = arr[end];
    // arr[end] = arr[start];
    // arr[start] = temp;
    end--;
    start++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}