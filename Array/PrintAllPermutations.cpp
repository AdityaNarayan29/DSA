//Using String - put next element in left or right of other elements
// If question is[1,2,3]
// n = 1 -> (1) -> [[1]]
// n = 2 -> (1,2) -> [[1,2][1,2]]
// n = 3 -> (1,2,3) ->[[321][231][213][312][132][123]]

vector<vector<int>> permute(vector<int>& nums){
  vector<vector<int>> a;
  a.push_back({nums[0]});
  for (int i = 1; i < nums.size(); i++)
  {
    vector<vector<int>> temp;
    for(int j=0;j<a.size();j++){
      auto y = a[j];
      int len = y.size();
      for(int k=0;k<len;k++){
        y.insert(y.begin()+k,nums[i]);
        temp.push_back(y);
        y = a[j];
      }
    }
    a = temp;
  }
  return a;

}