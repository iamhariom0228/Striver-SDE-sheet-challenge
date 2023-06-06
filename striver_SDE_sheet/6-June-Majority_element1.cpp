#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int majority = floor(n/2);
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
		if(mp[arr[i]] > majority) return arr[i];
	}
	if(mp[arr[n-1]] > majority) return arr[n-1];
	return -1;
}