#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> temp(m);
	for(int i=0;i<m;i++) temp[i] = arr1[i];
	int i = 0, j = 0, k = 0;
	while(i < m && j < n){
		if(temp[i] < arr2[j]) arr1[k++] = temp[i++];
		else arr1[k++] = arr2[j++];
	}
	while(i < m){
		arr1[k++] = temp[i++];
	}
	while(j < n){
		arr1[k++] = arr2[j++];
	}
	return arr1;
}