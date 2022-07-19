#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unistd.h>

using namespace std; 

int max_cities(vector<string> cities, vector<int> distances){
  for (int i = 0; i < cities.size(); i++)
  {
    cout << cities[0][0];
  }
  
  return -1;
}
int main(){
  vector<string> cities = {"Tucson","Albany","Smith","Westford","Berkeley"};
  vector<int> distances = {102,95,114,1421,50};
  cout << max_cities(cities,distances);
}

int calc(array, n1, n2){
  int sum = 0;
  for(int i = n1;i<= n2;i++){
    sum += array[i];
  }
  return sum;
}

int comput_day_gains(int nbSeats,vector<int> payingGuests, vector<int>guestMovements){
  int count = 0;
  for (int i = 0; i < guestMovements.size(); i++)
  {
    int v = guestMovements[i];
    if(payingGuests[v]!= 0){
      if(nbSeats > 0){
        count += payingGuests[v];
        payingGuests[v] = 0;
        nbSeats--;
      }
    }
    else{
      nbSeats++;
    }
  }
  return count;
}