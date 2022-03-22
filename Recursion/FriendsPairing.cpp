// Find the number of ways in which n friends can remain single or can be paired up.
#include <bits/stdc++.h>
using namespace std;

int FriendsPairing(int n)
{
  if (n == 0 || n == 1 || n == 2)
  {
    return n;
  }
  return FriendsPairing(n - 1) + FriendsPairing(n - 2) * (n - 1); // (n-1), if single else (n-2)
}

int main()
{
  cout << FriendsPairing(4);
  return 0;
}