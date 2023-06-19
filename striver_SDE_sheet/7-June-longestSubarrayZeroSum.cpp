#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr) {

  // Write your code here
  int maxi = 0;
  for (int i = 1; i < arr.size(); i++){
    arr[i] += arr[i-1];
  }
  unordered_map<int,int> mpp;
  for(int i=0;i<arr.size();i++){
    if(arr[i]==0) maxi = i+1;
    else if(mpp.find(arr[i])!=mpp.end()) maxi = max(maxi, i-mpp[arr[i]]);
    else mpp[arr[i]] = i;
  }
  return maxi;
  
}