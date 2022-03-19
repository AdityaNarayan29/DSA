#include <bits/stdc++.h>
using namespace std;
// Doubt , error in output, probably silly mistake / (YouTube - Codelibrary)
int merge1(int a[],int temp[],int left,int mid,int right){
  int i,j,k,inv = 0;
  i = left;
  j = mid;
  k = left;
  while((i<=mid-1) and (j<=right)){
    if(a[i]<=a[j]){
      temp[k++] = a[i++];
    }else{
      temp[k++] = a[j++];
      inv+=(mid-i);
    }
  }
  while(i<=mid-1){
    temp[k++] = a[i++];
  }
  while(j<=right){
    temp[k++] = a[j++];
  }
  for (int m = left; m < right; m++)
  {
    a[m] = temp[m];
  }
  return inv;
}

int mergeSort(int a[],int temp[],int left,int right){
  int count = 0;
  if(left<right){
    int mid = (left+right)/2;

    count += mergeSort(a,temp,left,mid);
    count += mergeSort(a,temp,mid+1,right);
    count += merge1(a,temp,left,mid+1,right);

  }
  return count;
}
int main()
{
  // its just to check, how many elements are there whose elements to right, are smaller.
  
  int n;
  cin >> n;
  int a[n];
  int coun = 0;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  // Brute force O(n^2)
    // for (int i = 0; i < n-1; i++)
    // {
    //   for (int j = i+1; j < n; j++)
    //   {
    //     if(a[i]>a[j])
    //     {
    //       coun+=1;
    //     }
    //   }
    // }
    // cout << coun;

  // Using mergesort algo O(nlogn)
  int temp[n];
  cout << mergeSort(a,temp,0,n-1);
  return 0;
}