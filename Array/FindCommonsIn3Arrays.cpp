// Find Common elements in 3 sorted arrays
#include<bits/stdc++.h>
using namespace std;

// M1 time = O(n1+n2+n3); Space = O(n1+n2+n3); HashMap
int method1(){
  int n1,n2,n3;
  cin>>n1>>n2>>n3;
  int a[n1],b[n2],c[n3];
  for (int i = 0; i < n1; i++) cin >> a[i];
  for (int i = 0; i < n2; i++) cin >> b[i];
  for (int i = 0; i < n3; i++) cin >> c[i];
  
  unordered_map<int,int> m1,m2,m3;
  for (int i = 0; i < n1; i++) m1[a[i]]++;
  for (int i = 0; i < n2; i++) m2[b[i]]++;
  for (int i = 0; i < n3; i++) m3[c[i]]++;

  vector<int> v;
  for (int i = 0; i < n1; i++)
  {
    if(m1[a1[i]] and m2[a1[i]] and m3[a3[i]]){
      v.push_back(a[i]);
      m1[a[i]] = 0;
    }
  }
  for (int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
}

// M2 time = O(n1+n2+n3); Space = O(1);
vector<int> method2(int a[],int b[], int c[]){
  int i=0,j=0,k=0;
  vector<int> v;
  while(i<n1 and j<n2 and k<n3){
    if(a[i]==b[j] and b[j]==c[k]){
      v.push_back(a[i]);
      i++;j++;k++;
    }
    else if(a[i]<b[j]){
      i++;
    }else if(b[j]< c[k]){
      j++
    }else{k++;}

    //if unique elements required
    int xx = a[i-1];
    while(a[i]==xx)i++;
    int yy = b[j-1];
    while(b[j]==yy)j++;
    int zz = c[k-1];
    while(c[k]==zz)k++;
  }
  if(v.size()==0)return {-1};
return v;
}