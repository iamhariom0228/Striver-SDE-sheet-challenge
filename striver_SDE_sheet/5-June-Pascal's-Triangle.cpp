#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans(n);
  for(int i=0;i<n;i++){
    ans[i].push_back(1);
    for(int j=1;j<i;j++){
      ans[i].push_back(ans[i-1][j-1] + ans[i-1][j]);
    }
    if(i>0) ans[i].push_back(1);
  }
  return ans;
}
