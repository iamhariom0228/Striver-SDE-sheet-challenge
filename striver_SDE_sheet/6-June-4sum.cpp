#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int new_target = target - arr[i] - arr[j];
            int l = j+1, r = n-1;
            while(l < r){
                if(arr[l] + arr[r] == new_target) return "Yes";
                else if(arr[l] + arr[r] < new_target) l++;
                else r--;
            }
        }
    }
    return "No";
}
