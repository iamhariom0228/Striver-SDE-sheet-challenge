#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int l = 0, r = 0, ans = 0;
    unordered_set<char> mpp;
    while(r < input.size()){
        if(mpp.find(input[r])==mpp.end()){
            mpp.insert(input[r]);
            ans = max(ans, r-l+1);
            r++;
        }
        else {
            while(l < input.size() && mpp.find(input[r])!=mpp.end()){
                mpp.erase(input[l]);
                l++;
            }
        }
    }
    return ans;
}