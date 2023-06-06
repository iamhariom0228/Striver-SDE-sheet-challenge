#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    int majority = floor(arr.size()/3);
    unordered_map<int,int> mpp;
    for(int x:arr){
        mpp[x]++;
    }
    for(auto x:mpp){
        if(x.second > majority) ans.push_back(x.first);
    }
    return ans;
}