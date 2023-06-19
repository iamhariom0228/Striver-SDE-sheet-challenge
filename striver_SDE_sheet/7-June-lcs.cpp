#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int cnt = 1, maxi = 1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) continue;
        if(arr[i]==arr[i-1]+1) cnt++;
        else{
            cnt = 1;
        }
        maxi = max(maxi, cnt);
    }
    return maxi;
}