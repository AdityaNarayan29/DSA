#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>

using namespace std;
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  if (b == 0)
    return a;
  if (a == b)
    return a;
  if (a > b)
    return gcd(a - b, b);
  return gcd(a, b - a);
}

int main()
{

  vector<vector<string>> data{
      {"0", "0", "2"},
      {"1", "1", "2"},
      {"2", "2", "3"},
      {"3", "3", "4"},
      {"4", "4", "5"},
      {"5", "5", "6"},
      {"6", "6", "7"},
      {"7", "7", "8"},
      {"8", "8", "9"},
      {"9", "9", "10"},
      {"A", "10", "11"},
      {"B", "11", "12"},
      {"C", "12", "13"},
      {"D", "13", "14"},
      {"E", "14", "15"},
      {"F", "15", "16"},
      {"G", "16", "17"},
      {"H", "17", "18"},
      {"I", "18", "19"},
      {"J", "19", "20"},
      {"K", "20", "21"},
      {"L", "21", "22"},
      {"M", "22", "23"},
      {"N", "23", "24"},
      {"O", "24", "25"},
      {"P", "25", "26"},
      {"Q", "26", "27"},
      {"R", "27", "28"},
      {"S", "28", "29"},
      {"T", "29", "30"},
      {"U", "30", "31"},
      {"V", "31", "32"},
      {"W", "32", "33"},
      {"X", "33", "34"},
      {"Y", "34", "35"},
      {"Z", "35", "36"},
      {"a", "36", "37"},
      {"b", "37", "38"},
      {"c", "38", "39"},
      {"d", "39", "40"},
      {"e", "40", "41"},
      {"f", "41", "42"},
      {"g", "42", "43"},
      {"h", "43", "44"},
      {"i", "44", "45"},
      {"j", "45", "46"},
      {"k", "46", "47"},
      {"l", "47", "48"},
      {"m", "48", "49"},
      {"n", "49", "50"},
      {"o", "50", "51"},
      {"p", "51", "52"},
      {"q", "52", "53"},
      {"r", "53", "54"},
      {"s", "54", "55"},
      {"t", "55", "56"},
      {"u", "56", "57"},
      {"v", "57", "58"},
      {"w", "58", "59"},
      {"x", "59", "60"},
      {"y", "60", "61"},
      {"z", "61", "62"}};

  string str, T;
  getline(cin, str);
  // cout << str << "\n ";

  vector<string> strSet;
  vector<int> intSet;
  stringstream X(str);
  while (getline(X, T, ' '))
  {
    strSet.push_back(T);
  }

  int val = 0;
  for (int i = 0; i < strSet.size(); i++)
  {
    // cout << strSet[i] << "\n ";
    if (strSet[i].length() == 2)
    {
      for (int j = 0; j < 62; j++)
      {
        string s = strSet[i];
        if (data[j][0].at(0) == s.at(0))
        {
          val = stoi(data[j][1]);
        }
      }
      for (int j = 0; j < 62; j++)
      {
        string s = strSet[i];
        if (data[j][0].at(0) == s.at(1))
        {
          int a = stoi(data[j][2]);
          int b = stoi(data[j][1]);
          val = val * a + b;
          // cout << "val : " << val << "\n";
          intSet.push_back(val);
        }
      }
    }
    else
    {
      for (int j = 0; j < 62; j++)
      {
        if (data[j][0] == strSet[i])
        {
          // cout << "val : " << data[j][1] << "\n";
          val = stoi(data[j][1]);
          intSet.push_back(val);
        }
      }
    }
  }
  // for (auto it = intSet.begin(); it != intSet.end(); ++it)
  //   cout << ' ' << *it;
  // cout << endl;
  // cout << endl;
  int max = 0;
  

  for (int i = 0; i < intSet.size(); i++)
  {
    for (int j = i+1; j < intSet.size(); j++)
    {
      // cout << intSet[i] << " " << intSet[j] <<endl;
      int temp = gcd(intSet[i], intSet[j]);
      if (temp > max)
      {
        max = temp;
      }
    }
  }

  cout << max;
  return 0;
}