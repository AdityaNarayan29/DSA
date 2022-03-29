#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
  if (x < n && y < n && arr[x][y] == 1)
  {
    return true;
  }
  return false;
}

bool RatInMaze(int** arr, int x, int y, int n, int **SoAr)
{
  if (x == n - 1 && y == n - 1)
  {
    SoAr[x][y] = 1;
    return true;
  }

  if (isSafe(arr, x, y, n))
  {
    SoAr[x][y] = 1;
    if (RatInMaze(arr, x + 1, y, n,SoAr))
    {
      return true;
    }
    if (RatInMaze(arr, x, y + 1, n,SoAr))
    {
      return true;
    }
    SoAr[x][y] = 0; // backtracking
    return false;
  }
  return false;
}

int main()
{
  int n;
  cin >> n;

  int **arr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[n];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  int **SoAr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    SoAr[i] = new int[n];
    for (int j = 0; j < n; j++)
    {
      SoAr[i][j] = 0;
    }
  }

  if (RatInMaze(arr, 0, 0, n, SoAr))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << SoAr[i][j] << " ";
      }
      cout << endl;
    }
  }
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1