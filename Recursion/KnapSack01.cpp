// Put n items with given weight and value in a knapsack of capacity W to get the max total val in the knapsack
// recursive soln to 0-1-Knapsack Problem
#include <iostream>
using namespace std;

int Knapsack(int value[], int wt[], int n, int W)
{
  if (n == 0 || W == 0)
  {
    return 0;
  }

  if (wt[n - 1] > W)
  {
    return Knapsack(value, wt, n - 1, W);
  }

  return max(Knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], Knapsack(value, wt, n - 1, W));
}

int main()
{
  int wt[] = {10, 20, 30};
  int value[] = {100, 50, 150};
  int W = 50;
  cout << Knapsack(value, wt, 3, W);
  return 0;
}