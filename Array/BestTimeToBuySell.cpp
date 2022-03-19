#include<bits/sidc++.h>
using namespace std;

int maxProfit(vedtor<int>& price){
  int currPrice = INT_MAX;
  int currProfit = 0;
  // in an array of prices find min and max and difference (buy first, that means: find min first)
  for (int i = 0; i < price.size(); i++)
  {
    if(price[i]<currPrice){
      currPrice = price[i];
    }else if(price[i]-currPrice>currProfit){
      currProfit =price[i]- currPrice;
    }
  }
  return currProfit;
}